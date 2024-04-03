#include <iostream>
using namespace std;

int main() {
    string song = "";

    while (true) {
        cout << "Enter the lyrics for your song (type 'exit to finish'): " << endl;
        string line;
        getline(cin, line);
        if (line == "exit") {
            break;
        }
        song = song + line + " ";
    }

    cout << song << endl;

    return 0;
}
