#include <iostream>
#include <fstream>

int main () {

    // Download the file “beatles.txt”.
    // The file contains the lyrics for the song “Yesterday” by The Beatles. 
    // Open the file and change all uppercase letters to lowercase and vice versa.

    std::ifstream read_file("beatles.txt");
    std::string text;


    while(std::getline(read_file, text)){
        for(int i = 0; i < text.length(); i++) {
            if(isupper(text[i])) {
                text[i] = tolower(text[i]);
            } else if (islower(text[i])) {
                text[i] = toupper(text[i]);
            }
        }
        std::cout << text << std::endl;
    }


    return 0;
}