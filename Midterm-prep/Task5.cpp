#include <iostream>
#include <string>

int main () {


    /*
    In this program we are dealing with string manipulation by replacing characters at specific
    indexes in the string. a[0] = 'Y' will replace the first character in the string to Y, then
    a.at(0) = 'i' will again replace the first character in the string to an i, then a[78] = 3 
    attempts to access an element at the 79th position, which is well beyond the length of our
    string, this is undefined behavior, however it doesn't raise an error or throw an exception
    (element out of bounds).

    Then we print out our string with std::cout, following that we use two diffeerent functions
    which both return us the length of the string, which is 18 characters. Then we use sizeof()
    function to determine how much memory our string occupies which is 32 bytes in my case.
    */


    std::string a = "I love programming";
    a[0] = 'Y';
    a.at(0) = 'i';
    a[78] = 3;
    std::cout<<a<<std::endl;
    std::cout<<a.length()<< "-" << a.size() << "-" << sizeof(a) <<std::endl;
    return 0;
}