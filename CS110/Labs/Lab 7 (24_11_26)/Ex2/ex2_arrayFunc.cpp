/*
Your code will declare an integer array of size 10, then use three functions to individually do each of the following:

Ask the user to enter 10 numbers for the array
Print out the array (all the array elements)
Find the maximum value of the array and return it to be printed in main()
Test to see if your program will work with any integers, negative or positive, large or small.
*/

#include <iostream>
using namespace std;

void enterNumbers(int arr[], int size);
void printArray(int arr[], int size);
int findMaximum(int arr[], int size);

int main() {
    int const MAXIMUM_SIZE = 10;
    int arr[MAXIMUM_SIZE];

    enterNumbers(arr, MAXIMUM_SIZE);
    printArray(arr, MAXIMUM_SIZE);
    int max = findMaximum(arr, MAXIMUM_SIZE);
    cout << "Maximum value in the array: " << max << endl;

    return 0;
}

void enterNumbers(int arr[], int size) {
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++) {
        cout << "- ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMaximum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}