#include <iostream>

int main () {

    // Write a C++ program that will calculate the sum and average of all values in a multidimensional array.

    int sum = 0;
    double average = 0;

    int myArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int numberOfElements = sizeof(myArray) / sizeof(myArray[0][0]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + myArray[i][j];
        }
    }

    average = sum / (double) numberOfElements;

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The average is: " << average << std::endl;

    return 0;
}