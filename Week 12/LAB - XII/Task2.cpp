#include <iostream>

class Course {
    public:
        int year;
        std::string professor;
        int grade;

    Course(int courseYear, std::string courseProfessor, int courseGrade) {
        year = courseYear;
        professor = courseProfessor;
        grade = courseGrade;
    }

    double getGrade() {
        return grade;
    }

    int getYear() {
        return year;
    }

    std::string getProfessor() {
        return professor;
    }
};

double calculateAverage (Course *courses, int currentYear, int size) {
    int sum = 0;
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(courses[i].getYear() == currentYear) {
            sum = sum + courses[i].getGrade();
            count++;
        }
    }

    if (count > 0) {
        return double(sum) / count;
    } else {
        return 0;
    }
}

int main () {

    // Create class Course and three objects of that class (Programming, Calculus, Physics). 


    // The class should have the following attributes:
    // year
    // professor
    // grade

    // Use constructors for creation of objects.
    // Finally, find the average grade for all 3 courses of the current year.

    Course Calculus = Course(2024, "Saida", 7);
    Course Physics = Course(2024, "Gurbeta", 7);
    Course Programming = Course(2024, "Dzelila", 9);
    
    int currentYear = 2024;
    Course courses[] = {Calculus, Physics, Programming};
    int size = sizeof(courses) / sizeof(courses[0]);

    std::cout << "The average of the courses for year: " << currentYear << " is: " << calculateAverage(courses, currentYear, size) << std::endl;


    return 0;
}