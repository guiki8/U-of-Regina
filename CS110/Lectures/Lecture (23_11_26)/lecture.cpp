#include <iostream>
using namespace std;
// This code demonstrates arrays and how to use them in C++.

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Initialize the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Print the array elements
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    return 0;
}