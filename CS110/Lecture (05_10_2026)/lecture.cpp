#include <iostream>
using namespace std;
// Testing switch (case controlled statements)

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    switch (x) { // Works like if-else statements, but is more efficient for multiple conditions
        case 1: // Cannot write "case x == 1:" because case labels must be constant expressions
            cout << "x is 1" << endl;
            break;
        case 2:
            cout << "x is 2" << endl;
            break;
            cout << "This line will never be executed because of the break statement above" << endl;
        case 3:
            cout << "x is 3" << endl;
            break;
        default: // This is executed if none of the above cases match (Like the "else")
            cout << "x is not 1, 2, or 3" << endl;
            break;
    }
    return 0;
}