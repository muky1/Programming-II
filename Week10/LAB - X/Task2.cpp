#include <iostream>

int main () {

    // Add all values from array using pointers.

    int myArray[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    int *pArray = myArray;

    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int sum = 0;

    for (int i = 0; i < arraySize; i++) {
        sum = sum + *(pArray + i);
    }

    std::cout << sum;

    return 0;
}