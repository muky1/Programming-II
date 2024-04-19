#include <iostream>

int main () {

     /*
    The test inputs are: 5,
                         4,
                         a b c
    */

   /*
   This program has a syntactical error, we have two if checks checking whether the number is even or odd,
   however, the semicolons immediately after the if condtition causes the if condtitional code to terminate
   instantly, meaning that the program just follows the next order of execution, likewise it terminates the
   second if condition and continues with the execution.

   In summary, both "Even" and "Odd" will be printed out no matter our input.

   To resolve this issue we can remove the semicolons, ensuring that the if condition statements are only executed
   if the condition is met.

   Moreso, another way is to have an if-else check instead of two if checks.
   */



    int number;
    std::cout << "Enter number: ";
    std::cin >> number;
    if (number % 2 == 0);
        std::cout << "Even" << std::endl;
    if (number % 2 == 1);
        std::cout << "Odd" << std::endl;
    return 0;
}