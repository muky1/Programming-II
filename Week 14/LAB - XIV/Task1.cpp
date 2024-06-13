#include <iostream>

int recursiveSum(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num % 10 + recursiveSum(num / 10);
    }
}

int main () {

    // Write a C++ program that will calculate the sum of digits of a number, using recursion.

    int number;

    std::cout << "Please enter a non negative integer: " << std::endl;
    std::cin >> number;

    if (number < 0) {
        std::cout << "Negative number entered!" << std::endl;
        return 1;
    }

    std::cout << "The sum is: " << recursiveSum(number) << std::endl;

    return 0;
}