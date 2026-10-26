#include <iostream>
using namespace std;
// This is an example of a triangle pattern using the loop for inside another loop (nested loop)

int main() {
    char input, alphabet = 'A';
    cout << "Enter a character (A-Z): ";
    cin >> input;
    input = toupper(input); // Convert input to uppercase for consistency
    for (int i = 1; i<= (input - 'A' + 1); i++) {
        for (int j = 1; j <= i; j++) {
            cout << alphabet << " ";
        }
        cout << endl;
        alphabet++;
    }
    return 0;
}