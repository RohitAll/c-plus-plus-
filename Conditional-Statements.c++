//           Conditional Statements

// 61 Check whether a number is positive or negative.
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive Number";
    }
    else if (num < 0) {
        cout << "Negative Number";
    }
    else {
        cout << "Number is Zero";
    }

    return 0;
}
*/

// 62 Check whether a number is even or odd.
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "even number ";
    } 
    else {
        cout << "odd number";;
    }

    return 0;
}
*/

// 63 Find the greater of two numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is Greater";
    }
    else if (num2 > num1) {
        cout << num2 << " is Greater";
    }
    else {
        cout << "Both numbers are Equal";
    }

    return 0;
}
*/

// 64 Find the greatest of three numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the Greatest Number";
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " is the Greatest Number";
    }
    else {
        cout << num3 << " is the Greatest Number";
    }

    return 0;
}
*/

// 65 Check whether a person is eligible to vote.
/*
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are Eligible to Vote.";
    }
    else {
        cout << "You are Not Eligible to Vote.";
    }

    return 0;
}
*/

// 66 Check whether a year is a leap year.
/*
#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year.";
    }
    else {
        cout << year << " is Not a Leap Year.";
    }

    return 0;
}
*/

// 67 Check whether a character is a vowel or consonant.
/*
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a Vowel.";
    }
    else {
        cout << ch << " is a Consonant.";
    }

    return 0;
}
*/

// 68 heck whether a character is uppercase or lowercase.
/*
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an Uppercase Letter.";
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a Lowercase Letter.";
    }
    else {
        cout << "Invalid Input! Please enter an alphabet.";
    }

    return 0;
}
*/

// 69 Check whether a number is divisible by 5.
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter your number: ";
    cin >> num;

    if (num % 5 == 0) {
        cout << num << " is divisible by 5";
    }
    else {
        cout << num <<  " is Not Divisible by 5.";
    }

    return 0;
}
*/

// 70 Check whether a number is divisible by both 3 and 5.
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        cout << num << " is Divisible by both 3 and 5.";
    }
    else {
        cout << num << " is Not Divisible by both 3 and 5.";
    }

    return 0;
}
*/

// 71 Find the largest among four numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    cout << "Enter fourth number: ";
    cin >> num4;

    if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
        cout << num1 << " is the Largest Number.";
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4) {
        cout << num2 << " is the Largest Number.";
    }
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4) {
        cout << num3 << " is the Largest Number.";
    }
    else {
        cout << num4 << " is the Largest Number.";
    }

    return 0;
}
*/

// 72 Check whether a number is zero.
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "The number is Zero.";
    }
    else {
        cout << "The number is Not Zero.";
    }

    return 0;
}
*/

// 73 Display grade based on marks.
/*
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade A";
    }
    else if (marks >= 80) {
        cout << "Grade B";
    }
    else if (marks >= 70) {
        cout << "Grade C";
    }
    else if (marks >= 60) {
        cout << "Grade D";
    }
    else if (marks >= 40) {
        cout << "Grade E";
    }
    else if (marks >= 0) {
        cout << "Grade F (Fail)";
    }
    else {
        cout << "Invalid Marks!";
    }

    return 0;
}
*/

// 74 Check pass or fail.
/*
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 40) {
        cout << "Pass";
    }
    else {
        cout << "Fail";
    }

    return 0;
}
*/

// 75 Find the smallest of three numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    if (num1 <= num2 && num1 <= num3) {
        cout << num1 << " is the Smallest Number.";
    }
    else if (num2 <= num1 && num2 <= num3) {
        cout << num2 << " is the Smallest Number.";
    }
    else {
        cout << num3 << " is the Smallest Number.";
    }

    return 0;
}
*/

// 76 Check whether a character is a digit.
/*
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit.";
    }
    else {
        cout << ch << " is Not a Digit.";
    }

    return 0;
}
*/

// 77 Check whether a character is an alphabet.
/*
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an Alphabet.";
    }
    else {
        cout << ch << " is Not an Alphabet.";
    }

    return 0;
}
*/

// 78 Check whether a number is a multiple of 7.
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 7 == 0) {
        cout << num << " is a Multiple of 7.";
    }
    else {
        cout << num << " is Not a Multiple of 7.";
    }

    return 0;
}
*/

// 79 Check whether a triangle is valid.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "The Triangle is Valid.";
    }
    else {
        cout << "The Triangle is Not Valid.";
    }

    return 0;
}
*/

// 80 Create a simple calculator using switch.
/*
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Result = " << num1 / num2;
            }
            else {
                cout << "Cannot divide by zero.";
            }
            break;

        default:
            cout << "Invalid Operator.";
    }

    return 0;
}
*/

