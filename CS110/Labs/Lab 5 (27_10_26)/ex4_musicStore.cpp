#include <iostream>
using namespace std;

int main(){
    float balance = 10;
    while (balance >= 0.99){
        float cost;
        cout << "Enter the cost of a song: ";
        cin >> cost;
        if (cost >= 0.99){
            if (cost <= balance){
                balance -= cost;
                cout << "Song purchased for $" << cost << "! Enjoy!!" << endl;
            } else{
                cout << "Your choice is too expansive!!! Chose another one please!" << endl;
            }
        } else {
            cout << "Invalid cost. Please enter a cost of at least $0.99." << endl;
        }
        cout << "Your remaining balance is: $" << balance << endl << endl;
    }
    cout << "Your balance is: $" << balance;
    cout << ". You cannot buy anymore songs" << endl;
    cout << "Come again!" << endl;

    return 0;
}