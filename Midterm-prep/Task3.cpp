#include <iostream>

int main () {

    /*
    In this program we trace the execution and we deal with pre/post increment and decrement operators.
    The number variable is initialized to 1, then we multiply number by ++number + 1, since we are using a
    pre increment operation, number will be incremented to 2 before the expression evaluates, so we will have
    2 * (2 + 1) which is equal to 6.
    Next up we add number to (number % 3) * 2 + 1, since 6 % 3 = 0, we have no remainder, then 0 * 2 = 0, and then
    0 + number-- = 6, and 6 + 6 is 12, however immediately after our expression is evaluated the number will
    be decremented to 11.
    */

   /*
   NOTE: This output is valid for this code leveraging shorthand operators, different results for using eg.
         number = number * ++number + 1 etc.;
   */


    int number = 1;
    number *= ++number + 1;
    std::cout << number << std::endl;
    number += (number % 3) * 2 + number--;
    std::cout << number << std::endl;
    return 0;
}