//    Lesson 2: Variables and Data Types

/*
What is a variable?
A variable is a container (like a box) used to store data. Imagine you have a box at home for tea leaves—that box has a name (like "tea box"), and it holds something (data) inside. Whenever you need it, you can open the box using that name and retrieve the contents.

Similarly, in programming, a variable is a name used to store a value (such as a number or text) that can be used whenever needed.

Real-life example: Suppose you want to store your age. You would create a variable named `age` and store the value `25` in it. Whenever necessary, you can simply use the name `age` to access that value.


What is a data type?
The data stored in a variable has a specific type—meaning, what kind of data it is: a number, text, or a decimal value. It is important to inform the computer about this so it can store the data correctly and allocate the appropriate amount of memory.

Think of having containers of different sizes at home—a small container might hold two grains of rice (a small item), while a large container holds flour (a larger item). Likewise, the computer allocates different amounts of memory for different data types.

Common Data Types of C++

Data Type     What does it store                  Example
int           Poor number (integer)               25, -10, 0
float         Decimal number (small precision)    3.14, 9.5
double        Decimal number (large precision)    3.14159265
char          Only one character                  'A', 'z', '9'
bool          True or False                       true, false
string        Text (multiple characters)          "Hello", "Rohit"
*/

// How to create variables (Syntax)
// data_type variable_name = value;

// Let's watch a program:
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';
    bool isStudent = true;
    string name = "Rohit";

    cout << "Naam: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student hai kya: " << isStudent << endl;

    return 0;
}

/*
Now, let's understand each line:

#include <string>
It is necessary to include this header file to use the `string` data type—`iostream` does not include `string`, so it must be imported separately.

### Let's understand each line:

**`#include <string>`**
To use the `string` data type, it is necessary to include this header file — `iostream` does not include `string` support, so it must be imported separately.

**`int age = 25;`**
- `int` indicates that this variable will store an integer (whole number).
- `age` is the variable name (you can choose any valid name).
- `= 25` means the value `25` is stored in this variable.
- A box named `age` is created in memory, and `25` is placed inside it.

**`float height = 5.9;`**
`float` stores decimal numbers. `5.9` is stored in `height`.

**`char grade = 'A';`**
`char` stores only **a single character**, and it is written within **single quotes** `' '` (not double quotes!). Here, `'A'` is stored in `grade`.

**`bool isStudent = true;`**
`bool` can take only two values: `true` or `false`. Here, we set `isStudent` to `true`.

**`string name = "Rohit";`**
`string` stores text and is written within **double quotes** `" "`. Here, `"Rohit"` is stored in `name`.

**`cout << "Naam: " << name << endl;`**
Note that we used `<<` to **print multiple items together**: first the text `"Naam: "`, then the value of the variable `name`. We can chain as many `<<` operators as we like in this way. ### Output:
```
Naam: Rohit
Age: 25
Height: 5.9
Grade: A
Student hai kya: 1
```

## Note this interesting point

Printing `isStudent` resulted in `1`, not `true` or `false`! This is because, internally, the computer treats `true` as `1` and `false` as `0`. This might seem a bit strange right now, but remember—this is **normal behavior**.

## Variable Naming Rules (Very Important!)

1. The name must start with a letter (a-z, A-Z) or an underscore (`_`), not a number. ❌ `1name` ❌
2. The name cannot contain spaces. ❌ `my name` ❌ → ✅ `my_name` or `myName` ✅
3. You cannot use C++ reserved keywords (such as `int`, `return`, `cout`).
4. C++ is **case-sensitive**—`Age` and `age` are two different variables!
5. Use meaningful names—writing `age` is better than `a` (best practice).

## Best Practice

- Keep variable names **descriptive** (e.g., `studentAge` instead of `x`) so the code is easy to read.
- The `camelCase` convention is popular in professional code: e.g., `studentAge`, `totalMarks`.

## Common Mistakes

- Using double quotes for `char` (`char grade = "A";` ❌) — this is incorrect; use single quotes (`'A'` ✅).
- Declaring a variable but not using it (this might trigger a warning, but not an error).
- Creating two variables with the same name within the same scope (this will cause an error: "redefinition").
- Starting a variable name with a number (`int 2age = 5;` ❌)
*/

// Practice Questions

/* Write a program that stores your name, age, and favorite number (using string and int data types) and prints them.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "rohit";
    int age = 20;
    float favourite = 9.8; 

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "favourite: " << favourite << endl;

    return 0;
}

State whether these variable names are valid or invalid: My-Age, _Count, 2ndValue, TotalMarks.
ans => my-age → invalid ✅, _count → valid ✅, 2ndValue → invalid ✅, totalMarks → valid ✅

//  float aur double mein kya difference hai? (Hint: precision ke baare mein socho)
/* 
|                | float                            | double |                          
| Memory         | 4 bytes                          | 8 bytes |
| Precision      | Accurate to ~6-7 decimal digits  | Accurate to ~15-16 decimal digits |


**Real-life example:** Imagine you want to store the value of pi (π) — `3.14159265358979...`
- If stored in a `float`, it remains accurate only up to `3.141593` (the subsequent precision is lost).
- In a `double`, many more digits remain accurate: `3.14159265358979`.

**A simple way to remember:** `double` means **"double" the precision** of a `float` (twice the accuracy) — that is where the name comes from!

Unless high precision (like in scientific calculations) is required, `double` is more commonly used in professional code.


What could be the error in this code?
int age = 25;
int Age = 30;
cout << age;
ans => This snippet was a continuation (meaning, assume it is written inside `main()`, where `iostream` and `using namespace std;` are already included—just as we saw in earlier programs). In this context:
int age = 25;
int Age = 30;
cout << age;
There won't be any error here! Since C++ is case-sensitive, `age` and `Age` are two completely different variables (think of them like "Rahul" and "rahul" being two distinct names). To the compiler:

`age` is a box containing 25
`Age` is a completely different box containing 30

Both can coexist without any conflict. `cout << age;` will print only `age` (which holds 25).
Output:
25
Remember: This question was primarily testing case-sensitivity, not missing includes. The error you anticipated would occur if `iostream` hadn't been included—but here, we were assuming it was already included.
---
*/

// note
/*
Important Questions for Interviews/Exams

What is a variable, and why are data types important?
Explain the basic differences between int, float, char, and bool.
C++ is a case-sensitive language—what does this mean? Explain with an example.
What is the difference between char and string?
*/

/*
Quick Revision Test (State the answers)

What will be the output?
double pi = 3.14159265358979;
cout << pi;
ans => This is slightly incomplete. The `double` data type offers higher precision than `float`—we learned in the previous lesson that `double` is accurate to about 15–16 decimal digits. So, when we print a `double` using `cout`, it generally displays 6 decimal places by default...
Wait, hold on—there's actually an interesting point here. In C++, `cout` displays 6 significant digits by default (not just decimal places, but total significant digits) unless we manually set the precision.
So, printing `3.14159265358979` yields the output:
`3.14159`
Oh, your answer is actually correct! ✅ I was the one who caused the confusion—let me explain the reason clearly:
By default, `cout` prints 6 significant digits (whether it's a `float` or a `double`). From `3.14159265358979`, only the first 6 significant digits were taken: `3.14159`. If we want to display the full precision, we need to use a special command (`setprecision`), which we will learn about later in advanced topics.
Your answer is correct—excellent observation! 🎯


True/False: `char letter = "A";` is valid code.
ans => The correct answer is False/Invalid.
Reason: The `char` data type can store only a single character, and it must be enclosed in single quotes (' '). You wrote "A" inside double quotes—double quotes are used for strings, not for `char`.
cppchar letter = "A"; // ❌ Error! Double quotes are for strings
char letter = 'A'; // ✅ Correct! Single quotes are for chars
If you write "A", the compiler will throw an error because "A" is a string (technically a char array), whereas a `char` variable is designed to hold only a single character and cannot store an entire string.
A trick to remember:
Single character → single quotes ' ' → char
Multiple characters (text) → double quotes " " → string


What values ​​(in numbers) are always displayed when printing a `bool` data type?
ans => "0 or 1"
Spot on! ✅ When printing a boolean, `1` appears for `true` and `0` for `false`. We saw this earlier in the `isStudent` example.

Score: 2/3 correct; one required a correction (which you got right).
Overall, you are grasping the concepts well! Just keep in mind the difference between quotes for `char` and `string`—this is a very common exam or interview question.
Bonus Tip (for exams)
Interviewers often ask: "What is wrong with this line: `char arr = "Hello";`?" — The answer is: `char` is for a single character; to store multiple characters, you need to use a `string` or a `char` array (like `char name[] = "Hello";`).

*/