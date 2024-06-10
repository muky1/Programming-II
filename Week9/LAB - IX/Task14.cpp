#include <iostream>

int main () {

    // Write a C++ program to update every subarray element by multiplication of
    // the next and previous values of a given subarray of integers.

    int myArray[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int myArray2[2][3] = {};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                myArray2[i][j] = myArray[i][j] * myArray[i][j + 1];
            } else if (j == 2) {
                myArray2[i][j] = myArray[i][j] * myArray[i][j - 1];
            } else {
                myArray2[i][j] = myArray[i][j + 1] * myArray[i][j - 1];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << myArray2[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}