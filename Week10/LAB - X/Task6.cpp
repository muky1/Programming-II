#include <iostream>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    // Write a function that swaps the values of two variables using pointers.

    int val1 = 15;
    int val2 = 20;

    std::cout << "Before the swap value 1 is: " << val1 << " and value 2 is: " << val2 << std::endl;

    swap(&val1, &val2);

    std::cout << "After the swap value 1 is: " << val1 << " and value 2 is: " << val2 << std::endl;
}