#include <iostream>
using namespace std;

int main () {
    int valueOne, valueTwo;

    cout << "Please enter the first value: ";
    cin >> valueOne;

    cout << "Please enter the second value: ";
    cin >> valueTwo;

    cout << "Before swap: " << valueOne << ", " << valueTwo << endl;

    valueOne = valueOne + valueTwo;
    valueTwo = valueOne - valueTwo;
    valueOne = valueOne - valueTwo;

    cout << "After swap: " << valueOne << ", " << valueTwo << endl;

    return 0;

}