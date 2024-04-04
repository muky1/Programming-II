#include <iostream>
using namespace std;

int main () {
    int userInput;

    cout << "Please enter a number: ";
    cin >> userInput;

    if (userInput / 10 > 0) {
        if (userInput % 2 != 0) {
            cout << "Good number!";
        } else {
            cout << "Number not accepted!";
        }
    } else {
        cout << "Number not accepted!";
    }

    return 0;
}
