#include <iostream>
#include <algorithm>

int main () {

    // Write a C++ program that will check whether a string inside a three-dimensional array is a palindrome if not.
    // If yes, replace the string with the sentence  “This is a palindrome”.

    std::string myArray[2][3][2] = {{{"mom", "John"}, {"Walter", "Hank"}, {"noon", "Badger"}},
                                    {{"Krazy-8", "Tuco"}, {"Hector", "George"}, {"Michael", "Gustavo"}}};

    for(int i = 0; i < 2; i++) {
        std::cout << "{";
        std::cout << std::endl;
        for(int j = 0; j < 3; j++) {
            std::cout << "{";
            for (int k = 0; k < 2; k++) {
                std::string str = myArray[i][j][k];
                std::reverse(str.begin(), str.end());
                if (str == myArray[i][j][k]) {
                    myArray[i][j][k] = "This is a palindrome.";
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