#include <iostream>
#include <algorithm>

int main () {

    // Write a C++ program that will reverse all strings in a three-dimensional array.

    std::string myArray[2][3][2] = {{{"David", "John"}, {"Walter", "Hank"}, {"Jesse", "Badger"}}, {{"Krazy-8", "Tuco"}, {"Hector", "George"}, {"Michael", "Gustavo"}}};

    for(int i = 0; i < 2; i++) {
        std::cout << "{";
        std::cout << std::endl;
        for(int j = 0; j < 3; j++) {
            std::cout << "{";
            for (int k = 0; k < 2; k++) {
                std::reverse(myArray[i][j][k].begin(), myArray[i][j][k].end());
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