#include <iostream>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << "-" << b << std::endl;
}

void swap(int &a, double &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << "-" << b << std::endl;
}


int main () {

    /*
    This code demonstrates the use of functions to swap two values,
    it demonstrates a swap by value approach and a swap by reference
    approach.
    The first function swaps the values of a and b, however since it
    is a swap by value approach the copies of the variables within the
    function are affected and not the actual variables.
    The second function swaps the two values by reference, and the 
    actual variables a and b are affected, not the function params 
    like in the first function.
    The third function attempts to swap two doubles by reference,
    however no function like that exists so the variables remain like
    they are.
    */


    int a = 5, b = 7;
    double c = 2, d = 1;
    swap(a, b);
    swap(a, c);
    swap(d, c);
    std::cout << a << "," << b << "," << c << "," << d <<std::endl;
    return 0;
}