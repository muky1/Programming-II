#include <iostream>
using namespace std;

int main () {
    int divisor;

    cout << "Please enter a number by which you want to divide: ";
    cin >> divisor;

    if (divisor <= 0) {
        cout << "Divisor must be greater than 0!";
        return 1;
    } else if (divisor <= 3) {
        cout << "The divisor should be greater than 3 to find numbers with a remainder of 3!";
        return 1;
    } else {
        cout << "The numbers 1 - 100 when divided by " << divisor << " that have a remainder of 3 are: ";
        for (int i = 1; i <= 100; i++) {
            if(i % divisor == 3) {
                cout << i << "   ";
            }
        }
    }

    return 0;
}