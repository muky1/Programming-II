#include <iostream>
#include <string>
using namespace std;

int main () {
    /*
        Consider the following string sentence=”AMOR VINCIT OMNIA.”
        Change the “VINCIT” to “NON VINCAT”.
    */

   string sentence="AMOR VINCIT OMNIA.";

   cout << "Before replacement, string is: " << sentence << endl;

   sentence.replace(5, 6, "NON VINCAT");

   cout << "After replacement, string is: " << sentence;

   return 0; 
}