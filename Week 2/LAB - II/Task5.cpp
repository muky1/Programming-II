#include <iostream>
using namespace std;

int main () {

    int dayOfTheWeek;

    cout << "Please enter a number between 1 and 7 (inclusive): ";
    cin >> dayOfTheWeek;

    if (dayOfTheWeek < 1 || dayOfTheWeek > 7) {
        cout << "Invalid number, please enter a number between 1 and 7!";
    } else {
        switch (dayOfTheWeek) {
        case 1:
            cout << "Monday!";
            break;
        case 2:
            cout << "Tuesday!";
            break;
        case 3:
            cout << "Wednesday!";
            break;
        case 4:
            cout << "Thursday!";
            break;
        case 5:
            cout << "Friday!";
            break;
        case 6:
            cout << "Saturday!";
            break;
        case 7:
            cout << "Sunday!";
            break;
        
        default:
            break;
        }
    }
     
    return 0;
}