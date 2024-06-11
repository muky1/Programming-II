#include <iostream>

int main () {

    // Print out values of an array using pointers.

    int myArray[] = {1, 2, 3, 4, 5, 6};

    int *pArray = myArray;

    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    for (int i = 0; i < arraySize; i++) {
        std::cout << pArray[i] << " ";
    }


    return 0;
}