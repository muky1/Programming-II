#include <iostream>
using namespace std;

int main() {
    string firstUserName, firstUserSurname, secondUserName, secondUserSurname;
    int firstUserYOB, secondUserYOB;
    int currentYear = 2024;

    cout << "Enter the first user name and surname: ";
    getline(cin, firstUserName);
    getline(cin, firstUserSurname);

    cout << "Enter the first user year of birth: ";
    cin >> firstUserYOB;

    cin.ignore();

    cout << "Enter the second user name and surname: ";
    getline(cin, secondUserName);
    getline(cin, secondUserSurname);

    cout << "Enter the second user year of birth: ";
    cin >> secondUserYOB;

    cout << "Welcome " << firstUserName << " " << firstUserSurname << "!" << endl;
    cout << "Your age is: " << currentYear - firstUserYOB << "!" << endl;

    cout << "Welcome " << secondUserName << " " << secondUserSurname << "!" << endl;
    cout << "Your age is: " << currentYear - secondUserYOB << "!" << endl;

    if (currentYear - firstUserYOB > currentYear - secondUserYOB) {
        cout << firstUserName << " is older!";
    } else if (currentYear - firstUserYOB < currentYear - secondUserYOB) {
        cout << secondUserName << " is older!";
    } else {
        cout << "You are the same age!";
    }

    return 0;
}