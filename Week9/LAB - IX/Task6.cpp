#include <iostream>
#include <string>

int main () {

    // Write a C++ program that will return the length of each string in a multidimensional array;

    std::string myArray[3][3] = {{"John", "Michael", "David"}, {"Henry", "Barry", "Sean"}, {"Christopher", "Randal", "George"}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "The length of string " << myArray[i][j] << " is " << myArray[i][j].length() << std::endl;
        }
    }

    return 0;
}