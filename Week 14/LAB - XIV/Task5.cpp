#include <iostream>

int recursivePower(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * recursivePower(base, exponent - 1);
    }
}

int main () {

    int num = 5;
    int exponent = 5;

    std::cout << num << " to the power of " << exponent << " is: " << recursivePower(num, exponent) << std::endl;

    return 0;
}