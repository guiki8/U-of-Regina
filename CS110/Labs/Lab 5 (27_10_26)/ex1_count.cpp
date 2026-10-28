// Program Count prompts for the number of integers to sum.
// It then reads the integers in a loop, summing them.
// Finally, it prints the sum.

#include <iostream>
using namespace std;

int main ()
{
    int  sum = 0;                 // summing variable
    int  dataValue;               // input value

    // Add code: Declare an int here for the loop counter
    int loopCounter;
    // Add code: Declare an int here for the loop total
    int loopTotal;

    // Add code: Set the loop counter to 0
    loopCounter = 0;

    // Add code: Prompt the user for how many numbers they want to add
    //           ie. the loop total
    cout << "How many numbers do you want to add? ";
    cin >> loopTotal;

    // Add code: Write a while statement that compares
    //           your loop counter to your loop total
    //             eg. while (loopctr < looptotal)
    //           Note: the variable names depend on how you declared them.

    while(loopCounter<loopTotal)
    {
        cout  << "Enter an integer value.  Press return." << endl;
        cin  >> dataValue;
        sum = sum + dataValue;

        // Add code: Increment your loop counter variable
        loopCounter++;

    }  // end of while loop block

    cout  << endl << "The sum is "  << sum  << endl;

    return 0;
}