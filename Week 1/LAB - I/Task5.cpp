#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;

    cout << "Please enter amount of hours and minutes as whole numbers." << endl;

    cout << "Enter amount of hours: ";
    cin >> hours;

    cout << "Enter amount of minutes: ";
    cin >> minutes;

    seconds = (hours * 60 * 60) + (minutes * 60);

    cout << hours << " hours, and " << minutes << " minutes is " << seconds << " seconds!";

    return 0;

}