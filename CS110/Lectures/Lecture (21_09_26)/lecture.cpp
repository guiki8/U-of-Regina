#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a=5, b=6;
    cout << max({a, b, 3, 5}) << endl;
    cout << sqrt(b) << endl;
    cout << pow(a, b) << endl;
    cout << round(2.5) << endl; // rounds to the nearest integer
    cout << log(2) << endl;
    cout << ceil(2.1) << endl; // rounds up to the nearest integer
    cout << floor(2.9) << endl; // rounds down to the nearest integer
    cout << exp(b) << endl; // calculates e raised to the power of b
    cout << abs(-5) << endl;
    cout << fmod(5.5, 2) << endl; // calculates the remainder of 5.5 divided by 2, similar to the modulus operator for integers, but for floating-point numbers
    cout << hypot(3, 4) << endl; // calculates the hypotenuse of a right triangle with sides 3 and 4
    return 0;
}