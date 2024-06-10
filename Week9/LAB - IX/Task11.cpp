#include <iostream>
#include <cmath>

int main () {

    // Write a C++ program that will take integers as input from the user
    // and will store their square root values into a three-dimensional array.

    int DIMENSIONS, ROWS, COLUMNS;

    std::cout << "Enter how many dimensions your array is: " << std::endl;
    std::cin >> DIMENSIONS;

    std::cout << "Enter how many rows your subarray is: " << std::endl;
    std::cin >> ROWS;

    std::cout << "Enter how many columns your subarray is: " << std::endl;
    std::cin >> COLUMNS;

    double myArray[DIMENSIONS][ROWS][COLUMNS] = {};

    for (int i = 0; i < DIMENSIONS; i++) {
        for (int j = 0; j < ROWS; j++) {
            for (int k = 0; k < COLUMNS; k++) {
                std::cout << "Enter element at dimension: " << i + 1 << ", row: " << j + 1 << ", column: " << k + 1 << std::endl;
                std::cin >> myArray[i][j][k];
            }
        }
    }

    for (int i = 0; i < DIMENSIONS; i++) {
        for (int j = 0; j < ROWS; j++) {
            for (int k = 0; k < COLUMNS; k++) {
                myArray[i][j][k] = sqrt(myArray[i][j][k]);
                std::cout << myArray[i][j][k] << ",";
            }
        }
    }


    return 0;
}