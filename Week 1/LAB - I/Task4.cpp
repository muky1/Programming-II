#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Please enter value a: ";
    cin >> a;

    cout << "Please enter value b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Value a is now: " << a << endl;
    cout << "Value b is now: " << b << endl;

    return 0;
}