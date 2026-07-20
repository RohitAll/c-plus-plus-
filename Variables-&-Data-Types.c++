//      Part 2 — Variables & Data Types (16–35)      \\

// 16 Declare an integer variable and print its value.
/*
#include <iostream>
using namespace std;

int main() {
    int age = 20;

    cout << "integer value: " << age << endl;

    return 0;
}
*/


// 17 Declare a float variable and print it.
/*
#include <iostream>
using namespace std;

int main() {
    float price = 150.55;

    cout << "float value: " << price << endl;

    return 0;
}
*/

// 18 Declare a double variable.
/*
#include <iostream>
using namespace std;

int main() {
    double pi = 3.1415926535;
    cout << "Double value: " << pi << endl;
    return 0;
}
*/

// 19 Declare a character variable and print it.
/*
#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    cout << "Character value: " << grade << endl;
    return 0;
}
*/

// 20 Declare a boolean variable and print its value.
/*
#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    cout << "Boolean value: " << isCodingFun << endl;
    return 0;
}
*/

// 21 Store your age in a variable and print it.
/*
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    
    cout << "Age: " << age << " years" << endl;
    return 0;
}
*/

// 22 Store your height.
/*
#include <iostream>
using namespace std;

int main() {
    float height = 6.9;
    
    cout << "Height: " << height << " feet" << endl;
    return 0;
}
*/

// 23 Store your weight.
/*
#include <iostream>
using namespace std;

int main() {
    double weight = 68.45;
    
    cout << "Weight: " << weight << " kg" << endl;
    return 0;
}
*/

// 24 Declare multiple variables in one line.
/*
#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20, z = 30;

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;

    return 0;
}
*/

// 25 Swap two variables without using a third variable.
/*
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
*/

// 26 Swap two variables without using a third variable
/*
#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 30;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
*/

// 27 Store marks of five subjects.
/*
#include <iostream>
using namespace std;

int main() {
    int math = 85;
    int science = 92;
    int english = 78;
    int hindi = 88;
    int computer = 95;

    cout << "Math: " << math << endl;
    cout << "Science: " << science << endl;
    cout << "English: " << english << endl;
    cout << "Hindi: " << hindi << endl;
    cout << "Computer: " << computer << endl;

    return 0;
}
*/
// 28 Print all data types in one program.
/*
#include <iostream>
#include <string> 
using namespace std;

int main() {
    
    int age = 20;                     // Integer 
    float price = 99.99f;             // Float 
    double distance = 12345.6789;     // Double 
    char grade = 'A';                 // Character 
    bool isCPlusPlusFun = true;       // Boolean 
    string name = "Rahul";            // String


    cout << "Integer (Age): " << age << endl;
    cout << "Float (Price): " << price << endl;
    cout << "Double (Distance): " << distance << endl;
    cout << "Character (Grade): " << grade << endl;
    cout << "Boolean (Is Fun?): " << isCPlusPlusFun << " (1 means True)" << endl;
    cout << "String (Name): " << name << endl;

    return 0;
}
*/

// 29 Take input from the user and print it.
/*
#include <iostream>
using namespace std;

int main() {
    int number;


    cout << "Enter a number: ";
    cin >> number;

    
    cout << "You entered: " << number << endl;

    return 0;
}
*/

// 30 Input your name and age.
/*
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

    cout << "\n--- Your Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;

    return 0;
}
*/

// 31 Input two integers.
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "enter num1: ";
    cin >> num1;

    cout << "enter num2: ";
    cin >> num2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}
*/

// 32 Input a decimal number.
/*
#include <iostream>
using namespace std;

int main() {
    double decimalNum;

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    cout << "You entered: " << decimalNum << endl;

    return 0;
}
*/

// 33 Input a character
/*
#include <iostream>
using namespace std;

int main() {
    char userchar;

    cout << "Enter a charecter number: ";
    cin >> userchar;


    cout << "You entered: " << userchar << endl;

    return 0;
}
*/

// 34 Input a boolean value.
/*
#include <iostream>
using namespace std;

int main() {
    bool id;

    cout << "Enter a id number: ";
    cin >> id;


    cout << "You entered: " << id << endl;

    return 0;
}
*/

// 35 Display all entered values.
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring variables for all the different data types
    string name;
    int age;
    int num1, num2;
    double decimalNum;
    char userChar;
    bool status;

    // 1. Input Name & Age (from Q30)
    cout << "Enter your name (no spaces): ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    // 2. Input Two Integers (from Q31)
    cout << "Enter two integers (separated by space): ";
    cin >> num1 >> num2;

    // 3. Input a Decimal Number (from Q32)
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    // 4. Input a Character (from Q33)
    cout << "Enter a character: ";
    cin >> userChar;

    // 5. Input a Boolean (from Q34) - remembers to use 0 or 1 by default!
    cout << "Enter a boolean (0 for false, 1 for true): ";
    cin >> status;

    // --- DISPLAYING ALL VALUES ---
    cout << "\n========================================" << endl;
    cout << "         SUMMARY OF ENTERED VALUES      " << endl;
    cout << "========================================" << endl;
    cout << "Name:             " << name << endl;
    cout << "Age:              " << age << " years old" << endl;
    cout << "First Integer:    " << num1 << endl;
    cout << "Second Integer:   " << num2 << endl;
    cout << "Decimal Number:   " << decimalNum << endl;
    cout << "Character:        " << userChar << endl;
    
    // Displaying the boolean as 'true' or 'false' using std::boolalpha
    cout << "Boolean Value:    " << boolalpha << status << endl;
    cout << "========================================" << endl;

    return 0;
}
*/



