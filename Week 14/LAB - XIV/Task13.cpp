#include <iostream>

int calculateGcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGcd(b, a % b);
}

int main () {

    int num1, num2;
    
    // Input the two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    // Find and print the GCD
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << calculateGcd(num1, num2) << std::endl;

    return 0;
}