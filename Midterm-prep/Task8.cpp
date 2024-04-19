#include <iostream>

int main () {


    /*
    This program demonstrates the use of a for loop to increase the value
    of the sum variable by i * 2 each iteration, however, since the sum variable is of type short
    it can only store 2 bytes, values between -32,768 and 32,767, if the value
    exceeds any of those two limits it will cause an overflow, where the value
    will wrap around to the opposite end of the range.
    */

    short sum = 0;

    for (int i = 0; i < 32000; i++) {
        sum += i * 2;
    }
    if (sum > 0) {
        std::cout << "Positive" << std::endl;
    } else {
        std::cout << "Negative" << std::endl;
    }
    
    return 0;
}