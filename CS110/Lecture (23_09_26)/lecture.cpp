#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    cout << "A" << setw(4) << "B" << endl; // Output: A   B (setw sets the width of the next output field to 4 characters)
    cout << setfill('*') << setw(4) << "C" << endl; // Output: ***C (setfill sets the fill character for the next output field)
    cout << left << setw(4) << "D" << setw(4) << "E" << endl; // Output: D   E (left sets the alignment to left for the next output field)
    cout << scientific << 123456.789 << endl; // Output: 1.234568e+05 (scientific sets the output format to scientific notation)
    cout << fixed << setprecision(2) << 123456.789 << endl; // Output: 123456.79 (fixed sets the output format to fixed-point notation and setprecision sets the number of decimal places)
    return 0;
}