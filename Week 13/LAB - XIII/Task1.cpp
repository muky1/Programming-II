#include <iostream>
#include <fstream>

int main () {

    // std::ofstream my_first_file("Text.txt");

    // my_first_file << "Hello from VS Code exercise!";

    std::string text_from_file;

    std::ifstream my_file("Text.txt");

    while (std::getline(my_file, text_from_file)) {
        std::cout << text_from_file;
    }



    return 0;
}