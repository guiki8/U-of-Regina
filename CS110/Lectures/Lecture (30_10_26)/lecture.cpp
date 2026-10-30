#include <iostream>
using namespace std;
// This is a example of do-while loop in C++17

int main() {
    do { // The loop body will execute at least once
        cout << "This is a do-while loop example in C++17." << endl;
    } while (false); // Checking the condition, which is false, so the loop will not execute again
    return 0;
}