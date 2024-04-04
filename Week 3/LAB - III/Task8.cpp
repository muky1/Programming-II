#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    double distance;

    cout << "Enter the coordinates for the first point: ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates for the second point: ";
    cin >> x2 >> y2;

    distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); // can also use pow() function from cmath to raise to the required power
    
    cout << "The distance between these two points is: " << round(distance * 100) / 100;

    return 0;
}