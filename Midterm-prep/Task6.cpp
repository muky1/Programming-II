#include <iostream>

int main () {


    /*
    In this program we are assigning integer values to a char data type, and
    performing operations on it in order to test what the output will be.
    When asigning a integer value to a char, that char will take up the ASCII
    value for that integer, provided it is in the accepted range.

    In the following code we are asigning value of 65 to char c, and the value 65
    represents the alphabet character A, then we do an addition of c+7, however in the first
    std::out line our character was printed out and then incremented after being printed out,
    so the value c now holds is 66, then
    adding 66 + 7 is 73, since we are adding an integer to our char, the result will be cast
    to an integer so the final result is 73.

    We then type cast the addition operation to be of type char, and the ASCII value for
    73 is the alphabet letter I, we also show we can type cast to an integer value
    giving us the result 73.
    */


    char c = 65;
    std::cout<<c++<<std::endl;
    std::cout<<c+7<<std::endl;
    std::cout<<(char)(c+7)<<std::endl;
    std::cout<<(int)(c+7)<<std::endl;


    /*
    The test inputs (part 2 of the code below this comment block) are:
                         aaaa,
                         65,
                         -1
    */

   /*
   This code prints out the value which we input, and it is assigned to the variable f,
   the code then prints out the value of f, in the case of multiple characters, numbers,
   special characters, std::cin looks only at the first input value and
   ignores the rest, however any remaining values are left in the input buffer,
   potentially causing problems for any following inputs.
   */


    char f;
    std::cout << "Enter letter: ";
    std::cin >> f;
    std::cout << f << std::endl;

    return 0;
}