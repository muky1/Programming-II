#include <iostream>
using namespace std;

int main () {
    string inputUsername, inputPassword;
    string validUsername = "testuser";
    string validPassword = "Test124";

    cout << "Please enter username and password!" << endl;

    cout << "Username: ";
    getline(cin, inputUsername);

    cout << "Password: ";
    getline(cin, inputPassword);

    if (inputUsername != validUsername && inputPassword != validPassword) {
        cout << "Both password and username are invalid!" << endl;
    } else if (inputUsername != validUsername) {
        cout << "Invalid username!" << endl;
    } else if (inputPassword != validPassword) {
        cout << "Invalid password!" << endl;
    } else {
        cout << "Valid credentials!" << endl;
    }

    return 0;
    
}