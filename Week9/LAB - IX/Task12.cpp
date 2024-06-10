#include <iostream>

int main () {

    // Write a C++ program that will calculate the sum and average of all values per subarray in a multidimensional array.

    int myArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int counter = 0;
    double sum = 0;
    double average = 0;

    for (int i = 0; i < 3; i++) {
        sum = 0;
        counter = 0;
        for (int j = 0; j < 3; j++) {
            sum = sum + myArray[i][j];
            counter++;
        }
        average = sum / counter;
        std::cout << "The sum of subarray: " << i + 1 << " is: " << sum << std::endl;
        std::cout << "The average of subarray: " << i + 1 << " is: " << average << std::endl;
    }

    return 0;
}