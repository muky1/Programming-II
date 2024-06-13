#include <iostream>
#include <fstream>

int countLines(std::ifstream &file) {
    std::string line;
    if(!std::getline(file, line)) {
        return 0;
    }
    return 1 + countLines(file);
}

int main () {

    std::ifstream file("beatles.txt");

    std::cout << "The amount of lines in the file is: " << countLines(file);

    return 0;
}