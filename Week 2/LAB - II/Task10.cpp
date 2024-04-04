#include <iostream>
using namespace std;

int main () {

    char inputChar;
    
    cout << "Please input a character: ";
    cin >> inputChar;

    // Note: the switch statement here leverages the GNU range cases extension,
    // so that we don't have to check for each character individually

    switch (inputChar)
    {
    case 'A' ... 'Z':
    case 'a' ... 'z':
        cout << inputChar << " is an alphabet character!" << endl;
        break;

    case '0' ... '9':
        cout << inputChar << " is an digit!" << endl;
        break;
    
    default:
        cout << inputChar << " is a special character!" << endl;
        break;
    }

}