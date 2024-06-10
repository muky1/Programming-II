#include <iostream>

int main () {

    // Write a C++ program that will ask the user to enter values into a multidimensional array.

    int ROWS, COLUMNS;

    std::cout << "How many rows do you want the array to be: " << std::endl;
    std::cin >> ROWS;
    std::cout << "How many columns do you want the array to be: " << std::endl;
    std::cin >> COLUMNS;

    int myArray[ROWS][COLUMNS] = {};

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << "Enter element at row: " << i + 1 << " and column: " << j + 1 << std::endl;
            std::cin >> myArray[i][j];
        }
    }

    std::cout << "Your array is: " << std::endl;

    for (int i = 0; i < ROWS; i++) {
        std::cout << "{";
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << myArray[i][j] << ", ";
        }
        std::cout << "},";
        std::cout << std::endl;
    }

    return 0;
}