#include <iostream>
using namespace std;

int main () {
    int year;

    cout << "Please input a year so we can check if it is a leap year or not: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 )) {
        cout << "Leap year!";
    } else {
        cout << "Not a leap year!";
    }

    return 0;
}