/*
# Lesson 4: Conditional Statements (`if`, `else if`, `else`, `switch`)

Let's begin! So far, we have learned about **variables** and **operators**. Now it's time to teach our program **how to make decisions**.

---

# What are Conditional Statements?

In real life, we make decisions every day:

* **"If** it is raining, **then** take an umbrella, **otherwise** go outside."
* **"If** marks are 90 or above, **then** give Grade A, **else if** marks are 80 or above, **then** give Grade B."

Similarly, in C++, we can make our program perform different actions based on different conditions. These are called **Conditional Statements**.

---

# 1. `if` Statement

The **if statement** is the simplest conditional statement. It checks only one condition.

## Syntax

```cpp
if (condition) {
    // This code runs only if the condition is true.
}
```

### Real-Life Example

"If the temperature is above 35°C, turn on the AC."

```cpp
#include <iostream>
using namespace std;

int main() {
    int temperature = 38;

    if (temperature > 35) {
        cout << "Turn on the AC!" << endl;
    }

    return 0;
}
```

## Line-by-Line Explanation

### `if (temperature > 35)`

The program checks whether the temperature is greater than 35.

```
38 > 35
```

This is **true**.

### `cout << "Turn on the AC!" << endl;`

Since the condition is true, this statement is executed.

If the temperature were 30, the condition would be false, and nothing would be printed.

### Output

```
Turn on the AC!
```

---

# 2. `if-else` Statement

Use `if-else` when you want one action if the condition is true and another action if it is false.

## Syntax

```cpp
if (condition) {
    // Runs if condition is true
}
else {
    // Runs if condition is false
}
```

### Real-Life Example

"If you pass the exam, congratulations; otherwise, try again."

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks = 45;

    if (marks >= 50) {
        cout << "You passed! Congratulations!" << endl;
    } else {
        cout << "You failed. Try again!" << endl;
    }

    return 0;
}
```

## Line-by-Line Explanation

### `if (marks >= 50)`

```
45 >= 50
```

This is **false**.

### `else`

Since the condition is false, the `else` block executes.

### Output

```
You failed. Try again!
```

---

# 3. `if-else if-else` Statement

Use this when you need to check **multiple conditions**.

## Syntax

```cpp
if (condition1) {

}
else if (condition2) {

}
else if (condition3) {

}
else {

}
```

### Real-Life Example

Exam grading system.

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks = 75;

    if (marks >= 90) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
```

## Line-by-Line Explanation

### First Condition

```
75 >= 90
```

False.

### Second Condition

```
75 >= 80
```

False.

### Third Condition

```
75 >= 70
```

True.

Therefore,

```
Grade: C
```

is printed.

The remaining conditions are skipped.

### Output

```
Grade: C
```

---

## Important Point

As soon as **one condition becomes true**, all remaining `else if` and `else` blocks are skipped.

Example:

If

```cpp
marks = 95;
```

Only

```cpp
marks >= 90
```

is checked as true, and the program immediately exits the entire `if-else if` chain.

---

# 4. Nested `if`

Sometimes one condition needs another condition inside it. This is called a **Nested if**.

```cpp
#include <iostream>
using namespace std;

int main() {

    int age = 20;
    bool hasID = true;

    if (age >= 18) {

        if (hasID == true) {
            cout << "Entry allowed!" << endl;
        }
        else {
            cout << "No ID. Entry denied!" << endl;
        }

    }
    else {
        cout << "Underage. Entry denied!" << endl;
    }

    return 0;
}
```

### Real-Life Example

To enter a club:

* Age must be 18 or above.
* A valid ID must also be available.

### Step-by-Step Execution

Outer condition:

```
20 >= 18
```

True.

Inner condition:

```
hasID == true
```

True.

### Output

```
Entry allowed!
```

---

# 5. `switch` Statement

Use `switch` when you want to perform different actions based on **specific values** of a variable.

It is often cleaner than multiple `if-else if` statements.

## Syntax

```cpp
switch (variable) {

    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // Executes if no case matches
}
```

### Real-Life Example

Display the day of the week.

```cpp
#include <iostream>
using namespace std;

int main() {

    int day = 3;

    switch(day) {

        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        default:
            cout << "Weekend!" << endl;
    }

    return 0;
}
```

## Line-by-Line Explanation

### `switch(day)`

The value of `day` is 3.

The program compares it with each case.

### `case 3`

```
3 == 3
```

Match found.

```
Wednesday
```

is printed.

### `break`

The `break` statement immediately exits the switch block.

Without `break`, execution continues into the next case.

### `default`

Runs only if none of the cases match.

### Output

```
Wednesday
```

---

# Most Common Mistake: Forgetting `break`

```cpp
switch(day) {

    case 3:
        cout << "Wednesday" << endl;

    case 4:
        cout << "Thursday" << endl;
        break;
}
```

### Output

```
Wednesday
Thursday
```

Why?

Because there was no `break` after `case 3`, so execution continued into `case 4`.

This is called **Fall-through**.

---

# `if-else` vs `switch`

| Situation                             | Best Choice  |         |           |
| ------------------------------------- | ------------ | ------- | --------- |
| Checking ranges (`>90`, `<50`)        | `if-else if` |         |           |
| Checking exact values (`1`, `2`, `3`) | `switch`     |         |           |
| Only two choices                      | `if-else`    |         |           |
| Complex conditions (`&&`, `           |              | `, `!`) | `if-else` |

---

# Best Practices

* Always include an `else` or `default` block whenever possible.
* Never forget the `break` statement inside a switch.
* Avoid deeply nested `if` statements (more than 3 levels).
* Keep conditions simple and readable.
* Use meaningful variable names.

---

# Common Mistakes

* Forgetting `break` in a switch statement.
* Writing

```cpp
if (x = 5)
```

instead of

```cpp
if (x == 5)
```

* Using `switch` for range conditions.
* Writing overly complex nested `if` statements.

---

# Practice Questions

### Question 1

What will be the output?

```cpp
int x = 15;

if (x > 20) {
    cout << "A";
}
else if (x > 10) {
    cout << "B";
}
else {
    cout << "C";
}
```

---

### Question 2

Write a program that classifies a person's age.

* 0–12 → Child
* 13–17 → Teenager
* 18–60 → Adult
* Above 60 → Senior Citizen

---

### Question 3

Write a simple calculator using `switch`.

Perform:

* Addition
* Subtraction
* Multiplication
* Division

Store the operator (`+`, `-`, `*`, `/`) in a variable and use `switch`.

---

### Question 4

Find the mistake.

```cpp
int day = 2;

switch(day) {

    case 1:
        cout << "Monday";

    case 2:
        cout << "Tuesday";

    case 3:
        cout << "Wednesday";
}
```

---

# Answers

## Answer 1

### Code

```cpp
int x = 15;

if (x > 20) {
    cout << "A";
}
else if (x > 10) {
    cout << "B";
}
else {
    cout << "C";
}
```

### Explanation

* `15 > 20` → False
* `15 > 10` → True

Therefore,

### Output

```
B
```

---

## Answer 2

```cpp
#include <iostream>
using namespace std;

int main() {

    int age = 25;

    if (age >= 0 && age <= 12) {
        cout << "Child";
    }
    else if (age >= 13 && age <= 17) {
        cout << "Teenager";
    }
    else if (age >= 18 && age <= 60) {
        cout << "Adult";
    }
    else {
        cout << "Senior Citizen";
    }

    return 0;
}
```

### Sample Output

```
Adult
```

---

## Answer 3

```cpp
#include <iostream>
using namespace std;

int main() {

    int a = 20;
    int b = 10;
    char op = '+';

    switch(op) {

        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            cout << "Division = " << a / b;
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}
```

### Sample Output

```
Addition = 30
```

---

## Answer 4

### Mistake

The `break` statements are missing.

Because of this, the program will execute all the following cases after a match.

### Correct Code

```cpp
int day = 2;

switch(day) {

    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    default:
        cout << "Invalid Day";
}
```

### Output

```
Tuesday
```

---

# Interview/Exam Important Questions (with Answers)

### 1. What is the difference between `if-else` and `switch`?

**Answer:**

| `if-else`                                  | `switch`                                  |    |                                 |
| ------------------------------------------ | ----------------------------------------- | -- | ------------------------------- |
| Used for ranges and complex conditions     | Used for exact values                     |    |                                 |
| Supports logical operators (`&&`, `        |                                           | `) | Does not support range checking |
| Slightly slower when many conditions exist | Often cleaner and faster for fixed values |    |                                 |
| More flexible                              | More readable for menu-driven programs    |    |                                 |

---

### 2. What is the purpose of `break` in a `switch` statement?

**Answer:**

The `break` statement immediately exits the `switch` block after a matching case is executed.

Without `break`, execution continues into the next cases. This is called **fall-through**.

---

### 3. When is the `default` case executed?

**Answer:**

The `default` case executes when none of the `case` values match the value of the switch expression.

It works similarly to the `else` block in an `if-else` statement.

---

### 4. What is a Nested `if`? Give an example.

**Answer:**

A **Nested `if`** is an `if` statement inside another `if` statement. It is used when one condition depends on another.

**Example:**

```cpp
if (age >= 18) {
    if (hasID) {
        cout << "Entry Allowed";
    }
}
```

*/