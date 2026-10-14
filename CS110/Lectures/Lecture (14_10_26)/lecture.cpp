#include <iostream>
using namespace std;
// Testing character funcions

int main() {
    char c = 'B';
    char b = 'h';
    cout << isdigit(c) << endl; // Check if c is a digit
    cout << isalpha(c) << endl; // Check if c is an alphabetic character
    cout << isalnum(c) << endl; // Check if c is alphanumeric
    cout << isspace(b) << endl; // Check if b is a whitespace character
    cout << isupper(c) << endl; // Check if c is an uppercase letter
    cout << tolower(c) << endl; // Convert c to lowercase (returns ascii value)

    return 0;
}