#include <iostream>
using namespace std;
// Testing user defined functions

int add(int a, int b) { // Int functions always return an integer value
    return a + b;
}

void printSum(int a, int b) { // Void functions do not return any value
    cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << endl;
}

string askName() { // String functions return a string value
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    return name;
}

void greet(string name) { // Void functions do not return any value
    cout << "Hello, " << name << "! Welcome to the C++17 lecture." << endl;
}

int main() {
    string name = askName();
    greet(name);
    int num1 = 5;
    int num2 = 10;
    printSum(num1, num2);
    return 0;
}