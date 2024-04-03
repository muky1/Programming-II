#include <iostream>
using namespace std;

int main () {
    int numOfCourses;
    double grade, averageGrade, sumOfGrades;

    cout << "Enter the amount of courses you had: ";
    cin >> numOfCourses;

    for (int i = 1; i <= numOfCourses; i++) {
        cout << "Enter grade for course #: " << i << " >>";
        cin >> grade;
        sumOfGrades = sumOfGrades + grade;
    }

    averageGrade = sumOfGrades / numOfCourses;

    cout << "The average grade for " << numOfCourses << " courses is " << averageGrade << endl;

    return 0;

}