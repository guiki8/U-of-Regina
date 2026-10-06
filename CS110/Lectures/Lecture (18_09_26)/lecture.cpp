#include <iostream>
using namespace std;

int main() {
    string s1 = "10";
    string s2 = "20";
    cout << s2.append(s1) << endl; //Changes the value of s2 to "2010"
    cout << s1[0] << endl;
    s2.at(0) = '1';
    cout << s2 << endl;
    s1.append(s1);
    if (s1 <= s2) {
        cout << "s1 is less than or equal to s2" << endl;
    } else {
        cout << "s1 is greater than s2" << endl;
    }
    return 0;
}