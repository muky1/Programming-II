#include <iostream>

int main () {

    // Write a C++ program that will print out all elements from a three-dimensional array.

    int myArray[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}};

    for(int i = 0; i < 2; i++) {
        std::cout << "{";
        std::cout << std::endl;
        for(int j = 0; j < 3; j++) {
            std::cout << "{";
            for (int k = 0; k < 2; k++) {
                std::cout << myArray[i][j][k] << ",";
            }
            std::cout << "}";
            std::cout << std::endl;
        }
        std::cout << "}";
        std::cout << std::endl;
    }


    return 0;
}