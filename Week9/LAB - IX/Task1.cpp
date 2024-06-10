#include <iostream>

int main () {

    // Write a C++ program that will check whether your multidimensional array has even numbers,
    //  and if yes, replace them with zeros. 

    int myArray [2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (myArray[i][j] % 2 == 0) {
                myArray[i][j] = 0;
            }
            std::cout << myArray[i][j] << " ";
        }
    }

    return 0;
}