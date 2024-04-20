#include <iostream>
#include <cstring>

int f(int a) {
    return a;
}

int main () {


    /*
    In this program we demonstrate string manipulation using cstring library,
    and also specific character manipulation in the string. We have a string of
    characters named song, containing the alphabet. We use the strncpy() function
    to copy a new string into our existing song variable, the function
    takes 3 parameters, the first one is the string we are copying into, in our
    case it is the song variable, the second one is the string we are copying,
    and the third one is an integer value representing the number of
    characters that we are copying.

    After printing out the new string, we increment the value of the character
    at position 2 in the string, which is C, and the ASCII value for C is 67, 
    after incrementing the value becomes 68 and consequently the character is 
    now D.

    After printing out the string, we set the value of the character at position 0,
    to be the value of song[1] - song[2], the value of the character at position 1
    is 66, and the value of the character at position 2 is 68 (it normally is 67, but since
    we incremented the value it is now 68). so the result of that subtraction is -2.
    And the value at string[0] becomes -2.

    We use our function that returns as an integer to output that value, otherwise
    it would return us the character at that ASCII value.
    */

    char song[] = "abcdefghijklmnopqrstuvwxyz";

    std::cout << song << std::endl;
    strncpy(song, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 6);
    std::cout << song << std::endl;
    song[2]++;
    std::cout << song << std::endl;
    song[0] = song[1] - song[2];
    std::cout << f(song[0]) <<std::endl;
    return 0;
}