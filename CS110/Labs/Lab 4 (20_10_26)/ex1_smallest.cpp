#include <iostream>
using namespace std;

int main() {
    int a, b, c; //Declare the three variables
    cout << "Enter three integers: ";
    cin >> a >> b >> c; // User input
    if (a <= b && a <= c) { // Check if a is smaller than or equal to both b and c
        cout << "The smallest number is: " << a << endl;
    } else if (b <= a && b <= c) { // Check if b is smaller than or equal to both a and c
        cout << "The smallest number is: " << b << endl;
    } else { // If neither a nor b is the smallest, then c must be the smallest, so c doesn't need to be checked
        cout << "The smallest number is: " << c << endl;
    }
    return 0;
}