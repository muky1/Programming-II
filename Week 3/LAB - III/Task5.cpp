#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
        Consider the following string: txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

        Find the length of this string.
        Print out the first element of the string.
        Print out the last element of the string.
    */
    
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << "The length of the string is: " << txt.length() << endl;
    cout << "The first element of the string is: " << txt[0] << endl;
    cout << "The last element of the string is: " << txt[txt.length() - 1] << endl; 

    return 0;
}