#include <iostream>
using namespace std;

int main(){
    char letter;
    int number;
    cout << "Enter a letter: ";
    cin >> letter;

    letter = tolower(letter);

    switch (letter)
    {
    case 'a':
    case 'b':
    case 'c':
        number = 2;
        break;
    case 'd':
    case 'e':
    case 'f':
        number = 3;
        break;
    case 'g':
    case 'h':
    case 'i':
        number = 4;
        break;
    case 'j':
    case 'k':
    case 'l':
        number = 5;
        break;
    case 'm':
    case 'n':
    case 'o':
        number = 6;
        break;
    case 'p':
    case 'q':
    case 'r':
    case 's':
        number = 7;
        break;
    case 't':
    case 'u':
    case 'v':
        number = 8;
        break;
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        number = 9;
        break;

    default:
        cout << "Error, please enter a valid letter";
        return 0;
        break;
    }

    cout << "The corresponding number to the letter " << letter << " is " << number;

    return 0;
}