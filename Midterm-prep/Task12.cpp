#include <iostream>

void print (char a[]) {
    std::cout << a << std::endl;
}

void print (int a[]) {
    for (int i = 0; i < 10; i++) {
        std::cout<< a[i] << std::endl;
    }
}

int main () {

    /*
    This program also demostrates function overloading by having two functions of
    the same name which print out character arrays and integer arrays respectively.
    The first print statement prints out the integer array, it prints out the first
    5 elements correctlym however, since the size of the array is 5, and the function assumes
    it is 10, it tries to access the elements at the remaining 5 positions, effectively
    accessing out of bounds elements, leading to undefined behavior.

    The second function prints out the character array normally, we then modify both arrays
    first by changing the integer array at position 4 to 555, which is valid and the output would 
    be 1, 2, 3, 4, 555, followed by undetermined values for the remaining 5 elements.

    We modify the character array by manipulating the element at position 2 and changing it
    to a '\0', null character, effectively making the string shorter and only print out AB.
    */

    int a[5] = {1, 2, 3, 4, 5};
    char b[5] = {'A', 'B', 'C', 'D'};
    print(a);
    print(b);
    a[4] = 555;
    b[2] = '\0';
    print(a);
    print(b);
    return 0;
}