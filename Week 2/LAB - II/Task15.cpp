#include <iostream>
using namespace std;

int main() {
    int userInput;

    cout << "Please input your number: ";
    cin >> userInput;

    if (userInput % 2 != 0) {
        cout << "Your number is already odd!";
    } else if (userInput % 2 == 0) {
        cout << "The nearest next odd number for: " << userInput << " is: " << userInput + 1;
    }

    return 0;
}