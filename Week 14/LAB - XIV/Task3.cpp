#include <iostream>


std::string recursiveReverseString(std::string &string, int start, int end) {
    if (start >= end) {
        return string;
    } else {
        std::swap(string[start], string[end]);
        return recursiveReverseString(string, start + 1, end - 1);
    }
}


int main () {

    // Write a recursive function to reverse a string. Additionally, check if the word is a palindrome.

    std::string string;
    std::cout << "Enter string: " << std::endl;
    std::cin >> string;

    std::cout << "Reversed string: " << recursiveReverseString(string, 0, string.length() - 1);

    return 0;
}