#include <iostream>
using namespace std;
// Testing \ character and its properties

int main() {
    cout << "\bHello, World!" << endl; // Backspace
    cout << "\tHello, World!" << endl; // Tab
    cout << "\nHello, World!" << endl; // Newline
    cout << "\rHello, World!" << endl; // Carriage return
    cout << "\'Hello, World!" << endl; // Single quote
    cout << "\"Hello, World!" << endl; // Double quote
    cout << "\\\\Hello, World!" << endl; // Backslash
    cout << "\?Hello, World!" << endl; // Question mark
    cout << "\aHello, World!" << endl; // Alert (bell)
    cout << "\fHello, World!" << endl; // Form feed
    cout << "\vHello, World!" << endl; // Vertical tab
    cout << "\0Hello, World!" << endl; // Null character
    // Other examples: \xhh (hexadecimal), \ooo (octal), \uhhhh (Unicode)
    return 0;
}