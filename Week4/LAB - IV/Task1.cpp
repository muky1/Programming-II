#include <iostream>
using namespace std;

int main () {
    
    cout << "All even numbers from 1 to 50 (inclusive)!" << endl;
    
    for (int i = 0; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << "  ";
        }
    }

    return 0;
}