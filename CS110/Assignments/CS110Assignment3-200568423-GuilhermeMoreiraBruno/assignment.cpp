#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    bool atm = true; // Control the ATM loop
    int choice;
    float balance = 1000.0; // Initial balance
    while (atm){
        cout << "ATM MENU:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
            case 1: // Check Balance
                cout << "Current balance: $" << fixed << setprecision(2) << balance << endl;
                break;

            case 2: // Deposit Money
                cout << "Enter amount to deposit: ";
                float deposit;
                cin >> deposit;
                if (deposit <= 0) {
                    cout << "Deposit amount cannot be negative or zero." << endl;
                    break;
                }
                balance += deposit;
                cout << "You have deposited: $" << fixed << setprecision(2) << deposit << endl;
                cout << "New balance: $" << fixed << setprecision(2) << balance << endl;
                break;

            case 3: // Withdraw Money
                cout << "Enter amount to withdraw: ";
                float withdraw;
                cin >> withdraw;
                if (withdraw <= 0) {
                    cout << "Withdrawal amount cannot be negative or zero." << endl;
                    break;
                }
                if (withdraw <= balance) {
                    balance -= withdraw;
                    cout << "You have withdrawn: $" << fixed << setprecision(2) << withdraw << endl;
                    cout << "New balance: $" << fixed << setprecision(2) << balance << endl;
                } else {
                    cout << "Insufficient funds!" << endl;
                    cout << "Current balance: $" << fixed << setprecision(2) << balance << endl;
                }
                break;

            case 4: // Exit
                atm = false;
                cout << "Thank you for using our ATM!" << endl;
                cout << "Goodbye!" << endl;
                break;

            default: // Invalid choice
                cout << "Invalid choice. Please select an option from 1 to 4." << endl;
        }
    }

    return 0;
}