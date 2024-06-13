#include <iostream>

int calculateNthStair(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return calculateNthStair(n - 1) + calculateNthStair(n - 2);
    }
}

int main () {

    int stairs = 2;

    std::cout << "The amount of possible ways to climb the stairs by taking 1 or 2 stairs: " << calculateNthStair(stairs) << std::endl;


    return 0;
}