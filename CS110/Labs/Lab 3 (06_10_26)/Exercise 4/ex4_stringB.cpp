#include <iostream>
#include <string>
using namespace std;
int main()
{
	string originalString;
	originalString = "And now for something completely different.";

    cout << "Original string: " << originalString << endl;

    cout << "Length of original string: " << originalString.length() << endl;

	string srch = "completely ";

    int pos = originalString.find(srch);

    cout << "The position of completely in originalString is: " << pos << endl;

	string newString = originalString.substr(0, pos); // extract substring from originalString

    cout << "New string: " << newString << endl;

    newString += originalString.substr(pos + srch.length());

    cout << "New string: " << newString << endl;

	return 0;
}