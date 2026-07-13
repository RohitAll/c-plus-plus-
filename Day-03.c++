//   Lesson 3: Operators (Arithmetic, Relational, Logical)

/*
An **operator** is a symbol that performs an operation (such as a calculation or comparison). Think of the `+`, `-`, `×`, and `÷` buttons on a calculator—those are operators. C++ has similar operators.

1. Arithmetic Operators (For calculations)

| Operator | Function            | Example |
| `+`      | Addition            | `5 + 3 = 8` |
| `-`      | Subtraction         | `5 - 3 = 2` |
| `*`      | Multiplication      | `5 * 3 = 15` |
| `/`      | Division            | `10 / 3 = 3` |
| `%`      | Modulus (remainder) | `10 % 3 = 1` |

**Real-life example:** Imagine you have 10 chocolates and want to distribute them among 3 friends. Each friend will get `10 / 3 = 3` chocolates, and `10 % 3 = 1` chocolate will be left over (the remainder). The `%` operator is very useful when we need to find the "leftover part."

*/

//Let's look at the program:
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    return 0;
}
/*
Let's understand it line-by-line:

**`int a = 10;` and `int b = 3;`**
Two variables were created to store values ​​for the calculation. **`cout << "Addition: " << a + b << endl;`**
Here, `a + b` is calculated first (`10 + 3 = 13`), and then the result is printed. Note that `a + b` is an **expression** that evaluates to a specific value, which `cout` then prints.

**Pay close attention to the result of `a / b`**
The mathematical answer for `10 / 3` is `3.33`, but the output will be just `3`!

### Output:
```
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3
Modulus: 1
```

## ⚠️ Very Important Concept: Integer Division

When two `int` values ​​are divided, C++ **removes the decimal part** (truncates it) because an `int` cannot store decimals. That is why the answer for `10 / 3` is `3` instead of `3.33`.

**If you want a decimal answer:**
```cpp
float a = 10;
float b = 3;
cout << a / b; // Output: 3.33333
```
Here, both variables are of type `float`, so the result will also be a decimal.

**Rule to remember:** `int / int = int` (decimal part discarded), whereas `float / float` or `double / double = decimal result`.

2. Relational Operators (For comparison)

These operators **compare** two values ​​and return a result of either `true` or `false`.
 
| Operator        | Meaning                          | Example |

| `==`            | Equal to                        | `5 == 5` → true |
| `!=`            | Not equal to                    | `5 != 3` → true |
| `>`             | Greater than                    | `5 > 3` → true |
| `<`             | Less than                       | `5 < 3` → false |
| `>=`            | Greater than or equal           | `5 >= 5` → true |
| `<=`            | Less than or equal              | `5 <= 3` → false |

**⚠️ Very Common Mistake:** `==` (equality **comparison**) and `=` (assignment, **storing** a value) — they are different! Beginners often write `=` when `==` is needed.


int x = 5;        // assignment: stored 5 in x
if (x == 5)       // comparison: checked if x is 5 or not


### Let's look at the program:

#include <iostream>
using namespace std;

int main() {
int x = 10; 
int y = 20; 

cout << (x == y) << endl; 
cout << (x != y) << endl; 
cout << (x < y) << endl; 
cout << (x > y) << endl; 

return 0;
}


### Let's understand it:

**`cout << (x == y) << endl;`**
`x == y` checks whether `10 == 20` — this is **false**, so the output will be `0` (remember? a boolean prints as `0` or `1`).

**`cout << (x != y) << endl;`**
`10 != 20` — this is **true** (10 is indeed not equal to 20), so the output will be `1`.

### Output:
```
0
1
1
0
```

3. Logical Operators (To combine multiple conditions)

| Operator                 | Meaning                              | Example |

| `&&`                     | AND (both must be true)              | `true && true = true` |
| `||`                     | OR (at least one must be true        | `true \|\| false = true` |
| `!`                      | NOT (inverts the value)              | `!true = false` | 

**Real-life example:** Imagine you are deciding whether to go watch a movie:
- Condition: "I have money **AND** my work is finished" → only then will I go watch the movie (AND means both conditions must be true).
- "I like comedy movies **OR** I like action movies" → liking even one of them is enough (OR means at least one condition must be true).

### Let's look at the program:


#include <iostream>
using namespace std;

int main() {
bool hasMoney = true; 
bool workDone = false; 

cout << "AND: " << (hasMoney && workDone) << endl; 
cout << "OR: " << (hasMoney || workDone) << endl; 
cout << "NOT: " << (!hasMoney) << endl; 

return 0;
}


### Let's understand it:

**`hasMoney && workDone`**
`true && false` — For AND, **both** must be true; however, here `workDone` is false, so the result will be **false (0)**.

**`hasMoney || workDone`**
`true || false` — For OR, it is sufficient if **at least one** is true; `hasMoney` is true, so the result will be **true (1)**.

**`!hasMoney`**
The `!` operator [inverts] the value.

Best Practices

Don't confuse `==` with `=` — this is a very common bug, even in professional code.
Use parentheses `()` when writing complex conditions to improve readability: `(a > b) && (c < d)`.
Always carefully check the result of integer division, especially when you expect a decimal answer.

Common Mistakes

Writing `if (x = 5)` when you meant `if (x == 5)` — this performs an assignment instead of a comparison (the compiler might issue a warning, but not an error).
Mistaking integer division for decimal division (`5 / 2` results in `2`, not `2.5`).
Writing `&` instead of `&&`, or `|` instead of `||` (the single versions are bitwise operators—a different concept—which aren't needed here).
*/

//  Practice Questions
/* What will be the output of this program?
int a = 7;
int b = 2;
cout << a / b << endl;
cout << a % b << endl;

ans. 3,1 
*/

/*
State the result (True/False or 1/0) of these expressions:
int x = 15;
cout << (x > 10 && x < 20) << endl;
cout << (x == 15 || x == 10) << endl;
cout << !(x > 20) << endl;

ans. 1,1,1
*/

/*
Write a program that takes two numbers (storing them in variables) and calculates their average. Ensure the result is a decimal value (Hint: choose the correct data type).
#include <iostream>
using namespace std;

int main() {
    float num1 = 45;
    float num2 = 68;

    cout << "average=" << (num1 + num2) / 2 << endl;

    return 0; 
}

Important Questions for Interviews/Exams

What is the difference between `=` and `==`?
Where is the modulus operator (%) used? Give a real-life example.
What is integer division, and how can it be avoided when a decimal result is required?
Explain the `&&`, `||`, and `!` operators using truth tables.
*/
