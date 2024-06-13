#include <iostream>
#include <fstream>

int main () {

    // Create a file “my_first_file” and write your name, surname, department and university into it. 
    // Also, read the content of the newly generated file.

    std::ofstream my_first_file("Exercise.txt");

    my_first_file << "Muhamed" << std::endl;
    my_first_file << "Begic" << std::endl;
    my_first_file << "FENMS Information Technologies" << std::endl;
    my_first_file << "International Burch University" << std::endl;

    my_first_file.close();


    std::ifstream read_my_file("Exercise.txt");
    std::string line;

    while(std::getline(read_my_file, line)) {
        std::cout << line << std::endl;
    }



    return 0;
}