#include <iostream>
#include <fstream> // Include <fstream> for file stream operations.
using namespace std;

int main() {
    ofstream Myfile("output.txt"); // Create an output file stream
    Myfile.open("output.txt"); // Open the file for writing
    Myfile << "Hello, World!" << endl; // Write to the file
    Myfile.close(); // Close the file
    return 0;
}