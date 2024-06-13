#include <iostream>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}

int calculateBinomialCoefficient(int n, int k) {
    if (n == 0 || k == n) {
        return 1;
    }
    return factorial(n) / (factorial(k) * factorial(n-k));
}

int main () {

    int n = 10;
    int k = 3;

    std::cout << "The binomial coefficient is: " << calculateBinomialCoefficient(n, k) << std::endl;
    
    return 0;
}