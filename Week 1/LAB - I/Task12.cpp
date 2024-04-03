#include <iostream>
using namespace std;

int main() {
    int value = 10;

    value = 10;
    value = ++value;
    cout << "Pre increment: " << value << endl;

    value = 10;
    value = value++;
    cout << "Post increment: " << value << endl;

    value = 10;
    value = --value;
    cout << "Pre decrement: " << value << endl;

    value = 10;
    value = value--;
    cout << "Post decrement: " << value << endl;

    return 0;

}