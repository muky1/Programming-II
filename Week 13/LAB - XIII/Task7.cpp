#include <iostream>
#include <fstream>

int main () {

    // Write a program that will copy the content from one file to another.

    std::ifstream old_file("MyOldFile.txt");
    std::ofstream new_file("MyNewFile.txt");
    std::string line;

    while(std::getline(old_file, line)) {
        new_file << line << std::endl;
    }

    new_file.close();
    old_file.close();

    return 0;
}