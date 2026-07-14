/*
---

# Lesson 5: User Input (`cin`) and Loops (`for`, `while`, `do-while`)

Today's lesson is very exciting! Until now, we were writing values directly inside our programs (hardcoding). Today, we will learn how to **take input from the user** and then learn about **loops**, which allow us to perform the same task repeatedly.

---

# Part 1: User Input (`cin`)

You already discovered `cin` in the previous lesson. Now let's understand it properly.

`cin` stands for **Console Input**.

Just like `cout` prints output on the screen, `cin` takes input from the keyboard.

## Syntax

```cpp
cin >> variable_name;
```

### Real-Life Example

Think about an ATM machine.

It first asks you to enter your PIN (input), and then it performs further operations.

`cin` works in the same way.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << "! You are " << age << " years old." << endl;

    return 0;
}
```

---

## Line-by-Line Explanation

### `string name;`

Declares a variable named `name` without assigning a value.

Think of it as an empty box waiting to store data.

---

### `cout << "Enter your name: ";`

Displays a message telling the user what to enter.

This message is called a **prompt**.

Notice that we did **not** use `endl` so the user can type on the same line.

---

### `cin >> name;`

Whatever the user types is stored inside the variable `name`.

---

### `cin >> age;`

Similarly, the user's age is stored inside the variable `age`.

---

## Example Output

```
Enter your name: Rohit
Enter your age: 20
Hello Rohit! You are 20 years old.
```

---

## ⚠️ Important: `cin` and Spaces

`cin` stops reading when it encounters a **space**.

Example:

If the user enters

```
Rohit Kumar
```

Only

```
Rohit
```

will be stored.

---

### Solution: `getline()`

To read an entire line including spaces, use `getline()`.

```cpp
string fullName;

cout << "Enter your full name: ";

getline(cin, fullName);

cout << "Name: " << fullName << endl;
```

### Output

```
Enter your full name: Rohit Kumar
Name: Rohit Kumar
```

---

# Part 2: Loops

Now let's learn one of the most important topics in programming—**Loops**.

A loop allows you to **repeat the same task multiple times** while a condition remains true.

### Real-Life Example

Suppose you want to print numbers from 1 to 10.

Without loops, you would write:

```cpp
cout << 1 << endl;
cout << 2 << endl;
cout << 3 << endl;
...
```

Imagine printing numbers from 1 to 1000!

Loops solve this problem.

---

# 1. `for` Loop

Use a `for` loop when you **know how many times** the loop should run.

## Syntax

```cpp
for (initialization; condition; update)
{
    // code
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```

---

## Line-by-Line Explanation

### Part 1: `int i = 1`

Initialization

Runs only once before the loop starts.

Creates a counter variable `i` and starts it from 1.

---

### Part 2: `i <= 5`

Condition

Before every iteration, this condition is checked.

As long as it is true, the loop continues.

---

### Part 3: `i++`

Update

Runs after every iteration.

It increases the counter by 1.

`i++` means

```cpp
i = i + 1;
```

---

## Step-by-Step Execution

```
i = 1 → condition true → print 1 → i becomes 2

i = 2 → condition true → print 2 → i becomes 3

i = 3 → condition true → print 3 → i becomes 4

i = 4 → condition true → print 4 → i becomes 5

i = 5 → condition true → print 5 → i becomes 6

i = 6 → condition false → loop ends
```

### Output

```
1
2
3
4
5
```

---

## What is `i++`?

`i++` is called the **increment operator**.

It increases a variable by 1.

```cpp
int x = 5;

x++;

cout << x;
```

Output

```
6
```

Similarly,

`i--`

decreases a variable by 1.

---

# 2. `while` Loop

Use a `while` loop when you **do not know how many times** the loop should execute.

You only know the condition.

## Syntax

```cpp
while(condition)
{
    // code
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int number = 1;

    while(number <= 5)
    {
        cout << number << endl;

        number++;
    }

    return 0;
}
```

---

## Line-by-Line Explanation

### `int number = 1;`

Creates the counter variable.

Unlike a `for` loop, initialization is done outside the loop.

---

### `while(number <= 5)`

Checks the condition.

If it is true, the loop executes.

---

### `number++;`

Increases the counter.

This is very important.

If you forget it, the loop will never stop.

This is called an **Infinite Loop**.

---

## Output

```
1
2
3
4
5
```

---

# `for` vs `while`

| Situation                       | Recommended Loop |
| ------------------------------- | ---------------- |
| Number of iterations is known   | `for`            |
| Number of iterations is unknown | `while`          |

---

# 3. `do-while` Loop

A `while` loop checks the condition **before** executing the loop body.

A `do-while` loop executes the loop body **at least once**, then checks the condition.

## Syntax

```cpp
do
{
    // code
}
while(condition);
```

Notice the **semicolon** after `while`.

---

### Real-Life Example

An ATM always asks you to enter the PIN at least once.

Only after entering it does the ATM verify whether it is correct.

---

### Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int pin;

    do
    {
        cout << "Enter PIN: ";

        cin >> pin;

        if(pin != 1234)
        {
            cout << "Wrong PIN! Try again." << endl;
        }

    }while(pin != 1234);

    cout << "Correct PIN! Welcome!" << endl;

    return 0;
}
```

---

## Example Output

```
Enter PIN: 5678
Wrong PIN! Try again.

Enter PIN: 1111
Wrong PIN! Try again.

Enter PIN: 1234
Correct PIN! Welcome!
```

---

# 4. Loop Control Statements

## `break`

Stops the loop immediately.

```cpp
for(int i=1;i<=10;i++)
{
    if(i==5)
        break;

    cout<<i<<" ";
}
```

Output

```
1 2 3 4
```

---

## `continue`

Skips only the current iteration.

```cpp
for(int i=1;i<=5;i++)
{
    if(i==3)
        continue;

    cout<<i<<" ";
}
```

Output

```
1 2 4 5
```

---

# Nested Loops

A loop can exist inside another loop.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<i*j<<"\t";
        }

        cout<<endl;
    }

    return 0;
}
```

Output

```
1   2   3
2   4   6
3   6   9
```

`\t` creates a tab space to align values.

---

# Best Practices

* Use `i`, `j`, and `k` as loop counters.
* Always update the counter in a `while` loop.
* Never forget the semicolon after `while` in a `do-while` loop.
* Avoid deeply nested loops unless necessary.

---

# Common Mistakes

* Forgetting to update the counter in a `while` loop (Infinite Loop).
* Forgetting the semicolon in a `do-while` loop.
* Writing the wrong loop condition.

---

# Practice Questions

### Question 1

What will be the output?

```cpp
for(int i=10;i>=1;i--)
{
    if(i%2==0)
    {
        cout<<i<<" ";
    }
}
```

---

### Question 2

Write a program that takes a number from the user and prints its multiplication table from 1 to 10.

Example:

```
5 x 1 = 5

5 x 2 = 10
```

---

### Question 3

Write a program to calculate the sum of numbers from 1 to 100.

Hint:

Use a variable named `sum` initialized to `0`.

---

### Question 4

What is the main difference between `while` and `do-while`?

Give one situation where `do-while` is a better choice.

---

### Question 5

Find the mistake in this code.

```cpp
int i=0;

while(i<5)
{
    cout<<i<<endl;
}
```

---

# Interview/Exam Questions

* Explain the difference between `for`, `while`, and `do-while`.
* What is an infinite loop? How can you avoid it?
* What is the difference between `break` and `continue`?
* What is the difference between `cin` and `getline()`?
* How do nested loops affect time complexity?

---

# ✅ Answers to Practice Questions

## Answer 1

### Code

```cpp
for(int i=10;i>=1;i--)
{
    if(i%2==0)
    {
        cout<<i<<" ";
    }
}
```

### Explanation

The loop starts from **10** and decreases to **1**.

Only even numbers are printed.

### Output

```
10 8 6 4 2
```

---

## Answer 2

```cpp
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for(int i=1;i<=10;i++)
    {
        cout << num << " x " << i << " = " << num*i << endl;
    }

    return 0;
}
```

### Sample Output

```
Enter a number: 5

5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

---

## Answer 3

```cpp
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for(int i=1;i<=100;i++)
    {
        sum += i;
    }

    cout << "Sum = " << sum;

    return 0;
}
```

### Output

```
Sum = 5050
```

---

## Answer 4

### Difference

| `while`                     | `do-while`                                   |
| --------------------------- | -------------------------------------------- |
| Checks the condition first. | Executes once before checking the condition. |
| May execute zero times.     | Executes at least one time.                  |

### Example

ATM PIN verification is a perfect use case for `do-while`.

The user must enter the PIN at least once before it can be verified.

---

## Answer 5

### Problem

```cpp
int i=0;

while(i<5)
{
    cout<<i<<endl;
}
```

The value of `i` is never updated.

Therefore, the condition `i < 5` always remains true.

The loop never ends.

This creates an **Infinite Loop**.

### Correct Code

```cpp
int i=0;

while(i<5)
{
    cout<<i<<endl;

    i++;
}
```

---

## 🎯 Assignment

Write C++ programs for the following:

1. Print numbers from **1 to 50** using a `for` loop.
2. Print **even numbers from 1 to 100** using a `while` loop.
3. Print **odd numbers from 1 to 50** using a `do-while` loop.
4. Print the multiplication table of any number entered by the user.
5. Find the **factorial** of a number using a loop.
6. Reverse the numbers from **20 to 1**.
7. Print a **right-angle star pattern**:

   ```
   *
   **
   ***
   ****
   *****
   ```
8. Print the following number pattern:

   ```
   1
   12
   123
   1234
   12345
   ```
9. Find the sum of all even numbers from **1 to 100**.
10. Ask the user to enter the correct password repeatedly until the correct password is entered using a `do-while` loop.


*/