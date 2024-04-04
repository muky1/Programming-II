#include <iostream>
using namespace std;

int main() {
    char receivedGrade;
    char allowedGrades[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    bool isAllowed = false;

    cout << "Please enter your grade: ";
    cin >> receivedGrade;

    for (int i = 0; i < 6; i++) {
        if(receivedGrade == allowedGrades[i]) {
            isAllowed = true;
            break;
        }
    }

    if (!isAllowed) {
        cout << "Please enter a valid grade, valid grades are: A, B, C, D, E and F!" << endl;
    } else {
        switch (receivedGrade) {
            case 'A':
                cout << "Excellent!";
                break;
            case 'B':
                cout << "Great!";
                break;
            case 'C':
                cout << "Well done!";
                break;
            case 'D':
                cout << "Solid!";
                break;
            case 'E':
                cout << "You passed!";
                break;
            case 'F':
                cout << "Better try again!";
                break;
            
            default:
                break;
        }
    }
    
    return 0;
}