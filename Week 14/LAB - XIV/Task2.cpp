#include <iostream>

bool recursiveEvenOrOdd (int num) {
    if (num == 0) {
        return true;
    }
    if(num == 1) {
        return false;
    }
    return recursiveEvenOrOdd(num - 2);
}

int main () {

    // Write a recursive function to check if a number is even or odd.

    int number;
    std::cout << "Please enter a non negative number: " << std::endl;
    std::cin >> number;

    if(number < 0) {
        std::cout << "Negative number entered!" << std::endl;
        return 1;
    }

    if(recursiveEvenOrOdd(number)) {
        std::cout << "Number: " << number << " is even!" << std::endl;
    } else {
        std::cout << "Number: " << number << " is odd!" << std::endl;
    }


    return 0;
}