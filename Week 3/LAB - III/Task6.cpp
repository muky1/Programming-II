#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int userInput;

    cout << "Please input your number: ";
    cin >> userInput;

    if (userInput <= 0) {
        cout << "Number cannot be a power of 2!";
    } else {
        double logValue = log2(userInput);
        if (ceil(logValue) == floor(logValue)) {
            cout << "Number is a power of 2!";
        } else {
            cout << "Number is not a power of 2!";
        }
    }

    return 0;
}