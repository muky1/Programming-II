#include <iostream>

int sum (int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = *a++;
    }
    return sum;
}

int sumw (int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(a + i);
    }
    return sum;
}

int main () {

    /*
    This program demonstrates the use of pointer dereferencing in a loop.
    The first function sets the sum to the value of the last element in the loop,
    the loop size will depend on the size variable, so if for example we pass it 10,
    the sum variable will hold the value of 10.

    However, the way this is achieved is by dereferencing the current pointer at
    position a, to get the value at that location, after which it increments the
    pointer to the next element.

    The second function does a similar thing, it takes two parameters an integer
    array, and a size parameter. In this function however, we do sum up the values
    of the array, the function does this by first initializing the sum variable
    to 0, then it loops over the array, the index starts at 0 and the sum is 0,
    it takes the value of the element which is located at index 0, that is 1,
    so the sum becomes 1, it then iterates and adds the value at index 1 (which is
    at this point 2), to the sum variable, and it continues until the loop ends.

    In the main fuinction we first call the sum(a, 6) function, in which the sum
    takes the value of the last element, which is 6 and returns that value.
    The sum function is then used as a parameter in the function 
    sumw(a, sum(a, 6)), it represents the size parameter in the function, so we
    effectively have a function that tells us that the size of our array is 6, by
    using the first function to compute the size. Therefore the function could be
    looked at like this sumw(a, 6), in which it will iterate over the array and
    sum up all the elements while i < size, giving us the result of 21.

    NOTE: This works only if we know the size of our array in advance, in this
          example it is 6, so that we can provide that value to sum() function
          and use that function as a parameter in the second function.

    */


    int a[6] = {1, 2, 3, 4, 5, 6};
    std::cout << sumw(a, sum(a, 6));
    return 0;
}