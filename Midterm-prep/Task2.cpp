#include <iostream>

int main() {

    /*
    This program initializes various variable types and then prints out those variables,
    not their values but the size that the variables occupy in memory.
    On most systems and integer takes up 4 bytes of memory, a double takes up 8 bytes,
    a long can take up either 4 or 8 bytes depending on the system,
    and a char takes up 1 byte of memory.
    Regarding the additional output for printing out a, it will print out the letter A,
    because the ASCII value of A is 65, and char a is initialized to 65;
    */

   /*
   NOTE: On most machines the size of long is 8 bytes, however for my machine the size of long is 4 bytes,
         however the size of long long is 8 bytes.
   */


    int number1 = 0;
    double number2 = 99999;
    long number3 = -1;
    char a = 65;
    std::cout << "The sizes are: " << sizeof(number1) << sizeof(number2) << sizeof(number3) << sizeof(a) << a << std::endl;
    return 0;
}