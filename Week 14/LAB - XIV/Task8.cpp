#include <iostream>
#include <fstream>

int calculateSumFromFile(std::ifstream &file) {
    std::string line;
    if(std::getline(file, line)) {
        if(!line.empty()) {
            int num = std::stoi(line);
            return num + calculateSumFromFile(file);
        } else {
            return calculateSumFromFile(file);
        }
    } else {
        return 0;
    }
}

int main () {

    std::ifstream file("numbers.txt");

    std::cout << "The sum of the numbers is: " << calculateSumFromFile(file) << std::endl;

    return 0;
}