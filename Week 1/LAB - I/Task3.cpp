#include <iostream>
using namespace std;

int main() {
    double length, width, area;

    cout << "Please input the length of the rectangle: ";
    cin >> length;

    cout << "Please input the width of the rectangle: ";
    cin >> width;

    area = length * width;

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}