#include <iostream>

void arraySort(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp;
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << ", ";
    }
    std::cout << std::endl;
}

int main () {

    // Write C++ program (using functions) to sort values in an array.

    int myArray[] = {5, 7, 8, 0, 8, 1, 2};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    std::cout << "Before the sort: " << std::endl;

    printArray(myArray, size);

    arraySort(myArray, size);

    std::cout << "After the sort: " << std::endl;

    printArray(myArray, size);

    return 0;
}