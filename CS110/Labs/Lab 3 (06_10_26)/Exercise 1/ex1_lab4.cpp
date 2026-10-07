// Program ex1_lab4.cpp demonstrates how to input file and output file

// Program IODemo demonstrates how to use files

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout  << fixed;

    ifstream inData;       // declare input stream
    ofstream outData;      // declare output stream

    inData.open("ex1_input.txt");

    // test the state of the input stream
    //  - true means the last I/O operation on that stream succeeded
    //  - false means the last I/O operation on that stream failed
    if (!inData)
    {
       cout << "Can't open the input file successfuly." << endl;
       return 1;
    }

    outData.open("ex1_output.txt");

    // test the state of the output stream
    if (!outData)
    {
       cout << "Can't open the output file successfuly." << endl;
       return 2;
    }

    float val1, val2, val3, val4, val5, val6, val7, val8, val9, val10;           // declare 10 variables
    inData >> val1 >> val2 >> val3 >> val4 >> val5 >> val6 >> val7 >> val8 >> val9 >> val10; // input 10 values

    // see if the read succeeded
    if (!inData)
    {
       cout << "Could not read 10 floats from the input file." << endl;
       return 3;
    }

    float sum = val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10;  // calculate sum
    float avarage = sum / 10;  // calculate avarage

    outData  << "Sum: " << sum  << endl;  // output sum and avarage to the output file
    outData  << "Average: " << avarage  << endl;

    inData.close();   // close input file
    outData.close();  // close output file

    return 0;
}
