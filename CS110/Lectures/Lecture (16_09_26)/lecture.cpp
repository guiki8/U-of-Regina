#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 6;
    cout << !(!((a==b) || (a!=b)) && (!(a>=6)||(a<=b)));
    return 0;
}