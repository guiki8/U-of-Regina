#include <iostream>
#include <string>
using namespace std;

int variable_integer = 67;
double variable_double = 0.02;
char variable_char = 'A';
string variable_string = "ABCD123";
bool variable_boolean = true;

int main() {
	cout << variable_double << endl << variable_string;
	cout << endl << variable_boolean;
	cout << endl << variable_double + variable_integer;
	return 0;
}