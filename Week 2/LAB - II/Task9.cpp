#include <iostream>
using namespace std;

int main () {
    int sideOne, sideTwo, sideThree;

    cout << "Please enter the sides of the triangle: " << endl;
    cin >> sideOne;
    cin >> sideTwo;
    cin >> sideThree;

    // Note: not checking of the sides form a valid triangle,
    // the sum of any two sides must be greater than the remaining side
    
    if (sideOne == sideTwo && sideTwo == sideThree) {
        cout << "Equilateral Triangle!";
    } else if (sideOne == sideTwo || sideOne == sideThree || sideTwo == sideThree) {
        cout << "Isosceles Triangle!";
    } else {
        cout << "Scalene Triangle!";
    }

    return 0;
}