//         Part 5 — Loops (81–100)

// 81 Print numbers from 1 to 10.
/*
#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    return 0;
}
*/

// 82 Print numbers from 10 to 1.
/*
#include <iostream>
using namespace std;

int main() {

    for (int i = 10; i >= 1; i--) {
        cout << i << endl;
    }

    return 0;
}
*/

// 83 Print even numbers from 1 to 100.
/*
#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
*/

// 84 Print odd numbers from 1 to 100.
/*
#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
*/

// 85 Print the multiplication table of a number.
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
*/

// 86 Find the sum of the first N natural numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the value of N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum;

    return 0;
}
*/

// 87 Find the factorial of a number.
/*
#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << num << " = " << factorial;

    return 0;
}
*/

// 88 Reverse a number.
/*
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    cout << "Reverse of number = " << reverse;

    return 0;
}
*/

// 89 Count the digits of a number.
/*
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        num = num / 10;
        count++;
    }

    cout << "Number of digits = " << count;

    return 0;
}
*/

// 90 Find the sum of digits.
/*
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    cout << "Sum of digits = " << sum;

    return 0;
}
*/

// 91 Check whether a number is a palindrome.
/*
#include <iostream>
using namespace std;

int main() {

    int num, original, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {

        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;

    }

    if (original == reverse) {
        cout << "Number is Palindrome.";
    }
    else {
        cout << "Number is Not Palindrome.";
    }

    return 0;
}
*/

// 92 Check whether a number is an Armstrong number.
/*
#include <iostream>
using namespace std;

int main() {

    int num, original, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {

        digit = num % 10;

        sum = sum + (digit * digit * digit);

        num = num / 10;
    }

    if (sum == original) {
        cout << "Number is Armstrong Number.";
    }
    else {
        cout << "Number is Not an Armstrong Number.";
    }

    return 0;
}
*/

// 93  Check whether a number is a prime number.
/*
#include <iostream>
using namespace std;

int main() {

    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    }
    else {

        for (int i = 2; i < num; i++) {

            if (num % i == 0) {
                isPrime = false;
                break;
            }

        }
    }

    if (isPrime) {
        cout << num << " is a Prime Number.";
    }
    else {
        cout << num << " is Not a Prime Number.";
    }

    return 0;
}
*/

// 94 Print all prime numbers from 1 to 100.
/*
#include <iostream>
using namespace std;

int main() {

    int count;

    cout << "Prime numbers from 1 to 100 are:" << endl;

    for (int num = 2; num <= 100; num++) {

        count = 0;

        for (int i = 1; i <= num; i++) {

            if (num % i == 0) {
                count++;
            }

        }

        if (count == 2) {
            cout << num << " ";
        }

    }

    return 0;
}
*/

// 95 Print the Fibonacci series up to N terms.
/*
#include <iostream>
using namespace std;

int main() {

    int n;
    int first = 0, second = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {

        cout << first << " ";

        next = first + second;

        first = second;

        second = next;
    }

    return 0;
}
*/

// 96 Print a star triangle using loops.
/*
#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
*/

// 97 Print a pyramid pattern.
