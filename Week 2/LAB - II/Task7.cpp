#include <iostream>
using namespace std;

int main () {
    double numberOfClassesHeld, numberOfClassesAttended, attendance;

    cout << "Please input the number of classes held: ";
    cin >> numberOfClassesHeld;

    cout << "Please input the number of classes attended: ";
    cin >> numberOfClassesAttended;

    attendance = ((numberOfClassesAttended / numberOfClassesHeld) * 100);

    cout << "Your attendance is: " << attendance << "%" << endl;

    if (attendance < 75) {
        cout << "You are not allowed to take exam!";
    } else {
        cout << "You are allowed to take exam!";
    }
    return 0;
}