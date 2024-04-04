#include <iostream>
using namespace std;

int main() {
    int userOption, yearOfBirth = 0, age;

    cout << "Please choose one of the following options: " << endl;
    cout << "Option 1: Enter year of birth!" << endl;
    cout << "Option 2: Calculate age!" << endl;
    cout << "Option 3: Is the user old or not!" << endl;

    cin >> userOption;

    switch (userOption)
    {
    case 1:
        yearOfBirth;
        cout << "Enter year of birth: ";
        cin >> yearOfBirth;
        break;
    case 2:
        if (!yearOfBirth) {
            cout << "Please enter your year of birth: ";
            cin >> yearOfBirth; 
        }
            age = 2024 - yearOfBirth;
            cout << "Your age is: " << age << "!" << endl;
        break;
    case 3:
        if (!yearOfBirth) {
            cout << "Please enter your year of birth so we can determine if you are old or not :)." << endl;
            cin >> yearOfBirth;
        }
            age = 2024 - yearOfBirth;
            if (age < 40) {
                cout  << "You are still young :).";
            } else {
                cout << "You are old :(.";
            }
        break;
    default:
    cout << "No case matches this option!";
        break;
    }

    return 0;
}