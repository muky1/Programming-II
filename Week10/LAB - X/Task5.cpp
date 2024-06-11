#include <iostream>

void maxAndMin(int *arr, int size) {
    int min = *arr;
    int max = *arr;
    int arrSize = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        } else if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    std::cout << "Max is: " << max << std::endl;
    std::cout << "Min is: " << min << std::endl;
}

int main () {

    // Write a function that finds the maximum and minimum values in an array using pointers.

    int myArray[] = {10, 15, 1, 50, 100, 100, 200, 500, 100};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    maxAndMin(myArray, size);

    return 0;
}