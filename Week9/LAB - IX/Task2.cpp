#include <iostream>

int main () {

    // Write a C++ program that will check the occurrence of a certain element in a multidimensional array.

    int myArray[3][3] = {{1, 2, 3}, {1, 2, 3}, {3, 3, 3}};

    int element, occurence = 0;
    std::cout << "For which element do you want to check?" << std::endl;
    std::cin >> element;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ( myArray[i][j] == element ) {
                occurence++;
            }
        }
    }

    std::cout << "The occurence of element: " << element << " in the array, is: " << occurence << " times!" << std::endl; 

    return 0;
}