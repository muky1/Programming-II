#include <iostream>

int f (int a, int b, int c=0) {
    int sum = a + b + c;
    std::cout << sum++ << std::endl;
    return sum;
}

double f (double a, double b) {
    double sum = a + b;
    std::cout << sum++ << std::endl;
    return sum;
}

int main () {

   /*
    This program demonstrates the use of function overloading, where two or more functions 
    can share the same name but have different parameter types or numbers, leading to different 
    implementations. The execution begins with the innermost function call that sums two doubles 
    (1.5 + 1.5). This function prints the sum of 3.0. After printing, the sum is incremented 
    post-print to 4.0 and returned. This return value is then used in the next function call, 
    which computes (4 + 5 + 4.0), resulting in a sum of 13. This sum, 13, is then printed, 
    incremented post-print, and returned as 14. 

    Subsequently, the value 14 is used in another sum calculation (1 + 2 + 14), totaling 17, 
    which is again printed, incremented post-print to 18, and returned. This process continues 
    with the final series of operations (1 + 2 + 18) summing to 21. After printing 21, it is 
    incremented to 22 and returned. 

    The final output printed by the main function is 22, demonstrating how each function call 
    builds on the return value of the previous call. This nested invocation of overloaded functions 
    illustrates not only function overloading but also the effects of post-increment on function 
    return values.
*/


    std::cout << f(1, 2, f(1, 2, f(4, 5, f(1.5, 1.5))));
    return 0;
}