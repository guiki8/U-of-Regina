#include <iostream>
using namespace std;
// Testing character funcions

int main() {
    char c = 66; // ASCII value for 'B'
    char b = 'h';
    int i = 'A'; // ASCII value 65 for 'A'
    cout << isdigit(c) << endl; // Check if c is a digit
    cout << isalpha(c) << endl; // Check if c is an alphabetic character
    cout << isalnum(c) << endl; // Check if c is alphanumeric
    cout << isspace(b) << endl; // Check if b is a whitespace character
    cout << isupper(c) << endl; // Check if c is an uppercase letter
    cout << tolower(c) << endl; // Convert c to lowercase (returns ascii value)

    char a = 'A';
    cout << a << endl; // Print the char a
    cout << a++ << endl; // Print the character a and then increment it (returns ascii value)
    cout << ++a << endl; // Increment a again and print the new value (returns ascii value)
    cout << a << endl; // Print the final value of a

    cout << "Enter a character: ";
    cin >> a;
    cout << "The ASCII value of " << a << " is " << int(a) << endl;

    cout << "Enter an ASCII value (from 0 to 127): ";
    int n;
    cin >> n;
    cout << "Character: " << char(n) << endl;

    return 0;
}