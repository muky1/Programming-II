#include <iostream>
using namespace std;

int main() {
    int numberOne, numberTwo, numberThree;

    cout << "Please input the three numbers: " << endl;
    cin >> numberOne;
    cin >> numberTwo;
    cin >> numberThree;

    if (numberOne > numberTwo && numberOne > numberThree) {
        cout << "Maximum between the three numbers is: " << numberOne;
    } else if (numberTwo > numberOne && numberTwo > numberThree) {
        cout << "Maximum between the three numbers is: " << numberTwo;
    } else {
        cout << "Maximum between the three numbers is: " << numberThree;
    }
    
    return 0;
}