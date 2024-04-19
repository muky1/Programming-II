#include <iostream>

int main () {

    /*
    The test inputs are: 1 2 3,
                         3 2 3,
                         1 1 1 1 1 1 1,
                         a b c
    */

   /*
    Since all of our numbers are integers and we are dividing by an integer,
    the result will be rounded to the closest integer value and the decimal part
    is discarded, it doesn't matter that the average is of type double since our 
    divisors and dividend are of type integer.

    One way to bypass this is to static cast our variables to type double, or
    instead of dividing by an integer 3, we can divide by a double 3.0.

    If we have more than 3 numbers for our input and our program expects exactly 3, 
    the sdt::cin will take the first 3 values and ignore the rest.

    When std::cin encounters a type mismatch in our input, ie. expecting and integer
    and the input is a char, it will go into fail state and stop reading further input
    causing unexpected behavior and the program output to be unexpected.
   */

    int number1, number2, number3;
    std::cout << "Enter three numbers: ";
    std::cin >> number1 >> number2 >> number3;
    double average = (number1 + number2 + number3) / 3;
    std::cout << "The average is: " << average << std::endl;
    return 0;
}