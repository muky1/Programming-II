#include <iostream>
#include <fstream>

int main () {

    // Write a program that will store user input into a file until the user types “exit”.
    // Print out the content of the file.

    std::string user_input;
    std::ofstream user_input_file("UserInput.txt");
    std::cout << "Start writing to file!" << std::endl;

    while(user_input != "exit") {
        std::cin >> user_input;
        if(user_input == "exit") {
            break;
        } else {
            user_input_file << user_input << std::endl;
        }
    }

    user_input_file.close();

    std::ifstream read_user_input("UserInput.txt");
    std::string line;

    while(std::getline(read_user_input, line)) {
        std::cout << line << std::endl;
    }

    read_user_input.close();

    return 0;
}