#include <iostream>
using namespace std;

// Types of common errors in C++ programming language.
/* int main(); // Example of a syntax error (semicolon)
{
    // Example of a syntax error (missing semicolon)
    int x = 5
    int z = x + 2;

    // Example of a logical error (incorrect operation)
    cout << "The sum of " << x << " and " << y << " is: " << z << endl;

    // Example of a runtime error (division by zero)
    int a = 10;
    int b = 0;
    int c = a / b; // This will cause a runtime error

    // Example of a semantic error (using an uninitialized variable)
    int d;
    cout << "The value of d is: " << d << endl; // This will cause a semantic error 

    // Example of a type error (assigning a string to an integer)
    int e = "Hello"; // This will cause a type error

    // Example of a compilation error (undeclared variable)
    cout << "The value of f is: " << f << endl; // This will cause a compilation error

    // Example of a linker error (undefined reference)
    // This will cause a linker error if the function is not defined elsewhere

    return 0;
} */

// Conditional operators
int main() {
    int a = 10;
    int b = 20;

    // Example of a conditional operator (ternary operator)
    int max = (a > b) ? a : b;
    cout << "The maximum value is: " << max << endl;

    // Example of an if-else statement
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a < b) {
        cout << "b is greater than a" << endl;
    } else {
        cout << "a and b are equal" << endl;
    }

    return 0;
}