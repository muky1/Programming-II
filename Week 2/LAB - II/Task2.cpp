#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "To check whether the two numbers are multiplied, please input the numbers!" << endl;
    
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    if (number1 < number2) {
        if (number2 % number1 == 0) {
            cout << "Numbers are multiplied!" << endl;
        } else {
            cout << "Numbers are not multiplied!" << endl;
        }
    } else if (number1 == number2) {
            cout << "Numbers are equal!" << endl;
    } else {
        if (number1 % number2 == 0) {
            cout << "Numbers are multiplied!" << endl;
        } else {
            cout << "Numbers are not multiplied!" << endl;
        }
    }

    return 0;
}