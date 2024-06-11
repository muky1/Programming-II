#include <iostream>
#include <string>

void reverseString(char *str) {
    // calculate the length of string, increment until null terminator character
    int sizeOfString = 0;
    while(str[sizeOfString] != '\0') {
        sizeOfString++;
    }
    for(int i = sizeOfString - 1; i >= 0; i--) {
        // access character at position i
        std::cout << *(str + i);
    }
}

int main () {

    // Write C++ program to print out string in the reverse order using pointers.

    char string[] = "Hello World!";

    reverseString(string);


    return 0;
}