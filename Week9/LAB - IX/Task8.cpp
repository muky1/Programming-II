#include <iostream>

int main () {

    // Write a C++ program that will return a three-dimensional array where all values higher than 4 will be divided by 2.

    double myArray[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}};

    for(int i = 0; i < 2; i++) {
        std::cout << "{";
        std::cout << std::endl;
        for(int j = 0; j < 3; j++) {
            std::cout << "{";
            for (int k = 0; k < 2; k++) {
                if (myArray[i][j][k] > 4) {
                    myArray[i][j][k] = myArray[i][j][k] / 2.0;
                }
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