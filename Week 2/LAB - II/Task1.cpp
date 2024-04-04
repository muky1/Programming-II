#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter your number: ";
    cin >> number;

    if (number >= 0 && number <=20) {
        cout << "Number is between 0 and 20!" << endl;
    } else if (number > 20 && number <= 50) {
        cout << "Number is between 21 and 50!" << endl;
    } else if (number > 50 && number <=80) {
        cout << "Number is between 51 and 80!" << endl;
    } else {
        if (number < 0) {
            cout << "Number is negative!" << endl;
        }

        if (number > 80) {
            cout << "Number is greater than 80!" << endl;
        }
    }

    return 0;
}