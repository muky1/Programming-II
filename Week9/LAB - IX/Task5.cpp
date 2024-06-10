#include <iostream>

int main () {

    // Write a C++ program that will give us the maximum and minimum value inside a multidimensional array

    int myArray[3][3] = {{2, 2, 3}, {4, 15, 6}, {7, 8, 9}};

    int min = myArray[0][0], max = myArray[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (myArray[i][j] < min) {
                min = myArray[i][j];
            } else if (myArray[i][j] > max) {
                max = myArray[i][j];
            }
        }
    }

    std::cout << "The minimum is: " << min << std::endl;
    std::cout << "The maximum is: " << max << std::endl;

    return 0;
}