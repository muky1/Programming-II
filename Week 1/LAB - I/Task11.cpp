#include <iostream>
using namespace std;

int main() {
    int angleOne, angleTwo, angleThree;

    cout << "To find the third angle of a triangle, please input the first and second angle!" << endl;

    cout << "Please input the first angle: ";
    cin >> angleOne;

    cout << "Please input the second angle: ";
    cin >> angleTwo;

    // The sum of angles in a triangle is 180

    angleThree = 180 - (angleOne + angleTwo);

    cout << "The third angle is: " << angleThree << " degrees!" << endl;

    return 0;

}