#include <iostream>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

void findFactorials(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = factorial(*(arr + i));
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << ", ";
    }
    std::cout << std::endl;
}

int main () {

    // Write C++ program (using functions) to find factorial of numbers in array using pointers.

    int myArray[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(myArray) / (sizeof(myArray[0]));

    findFactorials(myArray, size);

    printArray(myArray, size);


    return 0;
}