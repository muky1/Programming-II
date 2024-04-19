#include <iostream>
#include <cstdlib>

int main () {

    /*
    The test inputs are:
                        75a,
                        1/10,
                        9/10
    */

   /*
   This program generates a random number between 0 and 9, and prompts the user to
   enter values until they guess the number. The test inputs provided all cause the
   program to enter an infinite loop, because when std::cin reads the user input it
   only takes the first value provided, in the example of 75a, std::cin reads the value 75
   and the character a is left over in the input buffer, which causes the std::cin to enter
   a fail state once the loop executes and the user is asked to enter a guess again, the
   fail state causes std::cin to stop reading further input, meaning the loop exit condition
   can no longer be met and it causes an infinite loop. The same thing happens with the other
   test inputs, each of them causing an infinite loop.
   */

    srand(time(0));
    int number = rand() % 10;
    int guess = -1;
    while (guess != number) {
        std::cout << std:: endl << "Enter your guess: ";
        std::cin >> guess;
        if (guess == number) {
            std::cout << "Yes, the number is " << number << std::endl;
        } else if (guess > number) {
            std::cout << "Your guess is too high" << std::endl;
        } else {
            std::cout << "Your guess is too low" << std::endl;
        } 
    }
    return 0;
}