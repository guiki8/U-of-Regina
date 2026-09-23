/*************************************************
 * Student Name: Guilherme Moreira Bruno
 * Student Number: 200568423
 * Assignment Number: CS 110 Lab exercise 1
 * Program Name: ex1_readdata.cpp
 * Last Modified: 22/09/26
 *
 * ------ Problem Statement -----
 * This exercise is designed for you to practice effective
 * and clear Prompt/Read interactions. Make sure the user
 * knows what to enter - including expected data type and
 * units.
 *
 * ------ Input and Output ------
 * Input:
 *  - The integer length and width of a piece of glass in inches
 *  - The price of glass per square foot
 * Output:
 *  - Nicely formatted feedback echoing the inputs
 *  - A correct final price for the given inputs
 *
 * REFER TO SAMPLE CODING TEMPLATE OR YOUR PROFESSOR'S REQUIREMENTS
 * FOR MORE.
 *
 * Add short comments in the code to explain each change you make.
 *************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

const int inchesInSqFt = 144;

int main()
{
     float length;  // measured in inches (changed to float)
     float width;   // measured in inches (changed to float)
     float price; // sold by square foot
     float cost;

     cout << "Enter the length of the glass (inches): ";
     cin >> length; // Get the lenght
     cout << "Enter the width of the glass (inches): ";
     cin >> width; // Get the width
     cout << "Enter the price of glass per square foot: $";
     cin >> price; // Get the price

     // Feedback
     cout << fixed;
     cout << "Width:  " << setw(6) << width << " in." << endl
          << "Length: " << setw(6) << length << " in. " << endl
          << "Price: $" << setw(6) << setprecision(2) << price
          << " per Sq. Ft." << endl;

     // Results
     cost = ((width * length) / inchesInSqFt) * price;
     cout << "The cost of the glass is $" << setw(6) << cost << endl;

     return 0;
}