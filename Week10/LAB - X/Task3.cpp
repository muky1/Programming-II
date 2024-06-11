#include <iostream>

// Pass by reference, Reference argument
void swapByReference(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// Pass by reference, Pointer argument
void swapByPointerArgument(int *n, int *m) {
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}

int main () {

    // Write a function that accepts 2 arguments (passed by reference with pointer argument).
    // The function should change the initial value of variables to new values. Function is a void function.

    int a = 10;
    int b = 20;

    std::cout << "Before the swap a is: " << a << " and b is: " << b << std::endl;

    //swapByReference(a, b);

    swapByPointerArgument(&a, &b);

    std::cout << "After the swap a is: " << a << " and b is: " << b << std::endl;

    return 0;
}