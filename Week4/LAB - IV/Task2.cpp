#include <iostream>
using namespace std;

int main () {

    int inputValue, result = 0;

    cout << "Please input a value: ";
    cin >> inputValue;

    if (inputValue < 0) {
        cout << "Input value cannot be negative, try again!";
        return 1;
    }

    cout << "The square of each odd number from 1 to user specified value is: ";

    for (int i = 1; i <= inputValue; i++) {
        if (i % 2 != 0) {
            result = i * i;
            cout << result << "  ";
        }
    }

    return 0;
}