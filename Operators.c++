//      Part 3 — Operators (36–60)      \\

// 36 Add two numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Sum = " << a + b;

    return 0;
}
*/

// 37 Subtract two numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Difference = " << a - b;

    return 0;
}
*/

// 38 Multiply two numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Product = " << a * b;

    return 0;
}
*/

// 39 Divide two numbers.
/*
#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    cout << "Division = " << a / b;

    return 0;
}
*/

// 40 Find the remainder.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Remainder = " << a % b;

    return 0;
}
*/

// 41 Calculate the square of a number.
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Square = " << n * n;

    return 0;
}
*/

// 42 Calculate the cube of a number.
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Cube = " << n * n * n;

    return 0;
}
*/

// 43 Calculate simple interest.
/*
#include <iostream>
using namespace std;

int main() {
    float principal, intrest_rate, time, simple_intrest;
    
    cout << "Enter principal, intrest rate, time: ";
    cin >> principal >> intrest_rate >> time;
    
    simple_intrest = (principal * intrest_rate * time) / 100;

    cout << "simple intrest = " << simple_intrest << endl;

    return 0;
}
*/

// 44 Calculate area of a rectangle.
/*
#include <iostream>
using namespace std;

int main() {
    float length, width, area;

    cout << "Enter lengt and width: ";
    cin >> length >> width;

    area = length * width;
    
    cout << "area = " << area << endl;

    return 0;
}
*/

// 45 Calculate perimeter of a rectangle.
/*
#include <iostream>
using namespace std;

int main() {
    float length, width;

    cout << "Enter Length and Width: ";
    cin >> length >> width;

    cout << "Perimeter = " << 2 * (length + width);

    return 0;
}
*/

// 46 Calculate area of a circle.
/*
#include <iostream>
using namespace std;

int main() {
    float radius;
    const float PI = 3.14159;

    cout << "Enter Radius: ";
    cin >> radius;

    cout << "Area = " << PI * radius * radius;

    return 0;
}
*/

// 47 Convert Celsius to Fahrenheit.
/*
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Fahrenheit = " << fahrenheit;

    return 0;
}
*/

// 48 Convert Fahrenheit to Celsius.
/*
#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Enter Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Celsius = " << celsius;

    return 0;
}
*/

// 49 Find the average of three numbers.
/*
#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3,  average;

    cout << "Enter num1, num2, num3: ";
    cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "average = " <<  average;

    return 0;
}
*/

// 50 Find percentage.
/*
#include <iostream>
using namespace std;

int main() {
    float obtainedMarks, totalMarks, percentage;

    cout << "Enter Obtained Marks: ";
    cin >> obtainedMarks;

    cout << "Enter Total Marks: ";
    cin >> totalMarks;

    percentage = (obtainedMarks / totalMarks) * 100;

    cout << "Percentage = " << percentage << "%";

    return 0;
}
*/

// 51 Use increment operator.
/*
#include <iostream>
using namespace std;

int main() {
    int num = 10;

    cout << "Before Increment = " << num << endl;

    num++;

    cout << "After Increment = " << num;

    return 0;
}
*/

// 52 Use decrement operator.
/*
#include <iostream>
using namespace std;

int main() {
    int num = 10;

    cout << "Before Decrement = " << num << endl;

    num--;

    cout << "After Decrement = " << num;

    return 0;
}
*/

// 53 Compare two numbers.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a == b = " << (a == b);

    return 0;
}
*/

// 54 Check whether two numbers are equal.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << (a == b);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << boolalpha << (a == b);

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    if (a == b)
        cout << "Numbers are Equal";
    else
        cout << "Numbers are Not Equal";

    return 0;
}
*/

// 55 Check greater number.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << (a > b);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << boolalpha << (a > b);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    if (a == b)
        cout << "Numbers are Equal";
    else
        cout << "Numbers are Not Equal";

    return 0;
}
*/

// 56 Check smaller number.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    if (a < b)
        cout << a << " is Smaller";
    else
        cout << b << " is Smaller";

    return 0;
}
*/

// 57 Use logical AND.
/*
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter Age: ";
    cin >> age;

    
    cout << "Eligible and Not Eligible: " << (age >= 18 && age <= 60);
    // 1 Eligible
    // 0 Not Eligible

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter Age: ";
    cin >> age;

    if (age >= 18 && age <= 60)
        cout << "Eligible";
    else
        cout << "Not Eligible";

    return 0;
}
*/

// 58 Use logical OR.
/*
#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter Grade: ";
    cin >> grade;

    if (grade == 'A' || grade == 'B')
        cout << "Excellent";
    else
        cout << "Keep Improving";

    return 0;
}
*/

// 59 Use Logical NOT
/*
#include <iostream>
using namespace std;

int main() {
    bool isRain = false;

    if (!isRain)
        cout << "Go Outside";
    else
        cout << "Stay Home";

    return 0;
}
*/

// 60 Use Compound Assignment Operators
/*
#include <iostream>
using namespace std;

int main() {
    int num = 20;

    num += 5;
    cout << "After += : " << num << endl;

    num -= 3;
    cout << "After -= : " << num << endl;

    num *= 2;
    cout << "After *= : " << num << endl;

    num /= 4;
    cout << "After /= : " << num << endl;

    num %= 5;
    cout << "After %= : " << num << endl;

    return 0;
}
*/  