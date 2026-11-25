/*
This program will include the following:

Declare an integer array of size 10
Ask user to enter 10 numbers for the array
Print out the array in index ascending order (print from position 0 to 9, do not sort)
Print out the array in index descending order (print from position 9 to 0, do not sort)
Find the sum of the array and print it out
*/

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int num;

    // Ask user to enter 10 numbers for the array
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cout << "- ";
        cin >> num;
        arr[i] = num;
    }

    // Print out the array in index ascending order
    cout << "Array in ascending order: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print out the array in index descending order
    cout << "Array in descending order: ";
    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find the sum of the array and print it out
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;

    return 0;
}