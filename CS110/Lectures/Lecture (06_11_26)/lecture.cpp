#include <iostream>
using namespace std;
// Default Arguments/Parameters

int main() {
    // for example, we can have a function that takes two parameters, but we can provide a default value for one of them.
    // This way, if the caller does not provide a value for that parameter, the default value will be used.
    auto add = [](int a, int b = 10) {
        return a + b;
    };
    cout << "5 + 10 = " << add(5) << endl; // Output: 5 + 10 = 15
    cout << "5 + 20 = " << add(5, 20) << endl; // Output: 5 + 20 = 25
    return 0;
}