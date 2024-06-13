#include <iostream>
#include <fstream>

int main () {

    // Download the file “numbers.txt” and read its content. 
    // The file contains 45 random numbers. Write a program that will calculate the sum of the numbers in the file.

    std::ifstream read_file("numbers.txt");
    std::string text;

    int sum = 0;
    int num = 0;

    while(std::getline(read_file, text)) {
        num = std::stoi(text);
        sum = sum + num;
    }

    std::cout << sum << std:: endl;

    read_file.close();


    return 0;
}