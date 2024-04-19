#include <iostream>

int main () {

    /*
    This program uses a for loop to iterate through numbers and print out each
    even number it encounters, once it encounters the number 7 it prints out
    "End" and breaks out of the loop. However, without that if check this program
    is effectively an infinite loop, because of the condition true in the loop,
    which will always be true and i will keep incrementing, until the program
    is terminated.
    */


    for (int i = 1; true; i++) {
        if (i % 7 == 0) {
            std::cout << "End";
            break;
        }
        if (i % 2 == 0) {
            std::cout << i << std::endl;
        }
        
    }
    return 0;
}