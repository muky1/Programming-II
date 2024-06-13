#include <iostream>
#include <string>

std::string decimalToBinary(int n) {
    std::string empty_string = "";
    if (n == 0) {
        return empty_string;
    }
    return (decimalToBinary(n / 2) + std::to_string(n % 2));
}

int main () {

    int number;
    std::cout << "Enter a decimal number: ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "The binary representation of 0 is: 0" << std::endl;
    } else {
        std::string binary = decimalToBinary(number);
        std::cout << "The binary representation of " << number << " is: " << binary << std::endl;
    }


    return 0;
}