#include <iostream>
#include <string>

int main () {

    // Write a C++ program that will reverse the order of  strings in a three-dimensional array.

    std::string myArray[2][2][2] = {
                                    {{"abc", "def"}, {"ghi", "jkl"}},
                                    {{"mno", "pqr"}, {"stu", "vwx"}}
                                    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            std::swap(myArray[i][j][0], myArray[i][j][1]);
            for(int k = 0; k < 2; k++) {
                std::cout << myArray[i][j][k];
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}