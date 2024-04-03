#include <iostream>
using namespace std;

int main () {
    string name;
    string dateOfBirth;
    string phoneNumber;

    // cin won't work here because it stores the input value up to a whitespace character,
    // the getline() function would work better.

    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "My name is: " + name << endl;

    cout << "Please enter your date of birth: ";
    getline(cin, dateOfBirth);
    cout << "DOB: " + dateOfBirth << endl;

    cout << "Please enter your phone number: ";
    getline(cin, phoneNumber);
    cout << "Phone number: " + phoneNumber << endl;

    return 0;
    
}