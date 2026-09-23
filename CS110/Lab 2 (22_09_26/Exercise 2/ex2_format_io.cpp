// Purpose: Practice reading lines of text and formatting number output
//
// Complete this header based on the sample in Exercise 1
// or match your professor's requirements.
//
// Add short comments in the code to explain each change you make.

#include <iostream>
#include <string>
#include <iomanip> // for formatting output

using namespace std;

int main()
{
    string product;
    float price;

    cout << "Product name: ";
    getline(cin, product); // Get the product name, but with spaces
    cout << "Price: $";
    cin >> price;
    cout << endl;

    cout << product << ": $" << fixed << setprecision(2) << price * 0.7 << "(with 30% discount)" << endl; // Using fixed and setprecision to format the price

    return 0;
}