#include <iostream>
#include <string>
using namespace std;

int main(){
    string username = "user1", password = "12345", user, pass;

    cout << "Type your username: ";
    cin >> user;
    cout << "Type your password: ";
    cin >> pass;

    if (username == user){
        if (password == pass){
            cout << "Login successful";
        } else{
            cout << "Incorrect password";
        }
    } else{
        cout << "Incorrect username";
    }
    return 0;
}