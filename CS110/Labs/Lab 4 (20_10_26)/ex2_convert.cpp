// Program Convert converts a temperature in Fahrenheit to
// Celsius or a temperature in Celsius to Fahrenheit
// depending on whether the user enters an F or a C..

#include <iostream>
using namespace std;

int main ()
{
    char letter;	// Place to store input letter
    int tempIn;		// Temperature to be converted
    int tempOut;	// Converted temperature

    cout  <<"Input Menu"  << endl  << endl;
    cout  <<"F:  Convert from Fahrenheit to Celsius"  << endl;
    cout  <<"C:  Convert from Celsius to Fahrenheit"  << endl;
    cout  <<"Type a C or an F, then press return."  << endl << endl;

    cout << "Enter your option: ";
    cin  >> letter;

    cout  <<"Type an integer number: ";
    cin  >> tempIn;

    letter = toupper(letter);  // Convert letter to uppercase

    if (letter == 'C'){ // If the user entered a C, convert from Celsius to Fahrenheit
        tempOut = (9 * tempIn / 5) + 32;
    }
    else if (letter == 'F'){ // If the user entered an F, convert from Fahrenheit to Celsius
	    tempOut = 5 * (tempIn - 32) / 9;
    }else{ // If the user entered neither a C nor an F, display an error message
        cout << "Error: Invalid input. Please enter either 'C' or 'F'." << endl;
        return 1; // Return error code
    }

    cout << endl << endl;
    cout << "Temperature to convert: "  << tempIn  << endl;
    cout << "Converted temperature:  "  << tempOut << endl;

    return 0;
}