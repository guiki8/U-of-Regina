#include <iostream>
using namespace std;
// Testing if and else in C++

int main() {
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    if (a > b && a > c) {
        cout << "a is greater than b and c" << endl;
    } else if (b > a && b > c) {
        cout << "b is greater than a and c" << endl;
    } else if (c > a && c > b) {
        cout << "c is greater than a and b" << endl;
    } else {
        cout << "a, b, and c are not uniquely determined:" << endl;
        if (a == b && b == c) {
            cout << "All three numbers are equal." << endl;
        } else if (a == b) {
            cout << "a and b are equal." << endl;
        } else if (b == c) {
            cout << "b and c are equal." << endl;
        } else if (a == c) {
            cout << "a and c are equal." << endl;
        }
    }
    return 0;
}