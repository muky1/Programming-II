#include <iostream>

class Student {
    private:
        std::string name;
        int age;
        double grade;

    public:
        Student(std::string name, int age, double grade) {
            this->name = name;
            this->age = age;
            this->grade = grade;
        }

        std::string getName() const {
            return name;
        }

        int getAge() const {
            return age;
        }

        double getGrade() const {
            return grade;
        }

        void setName(std::string newName) {
            this->name = newName;
        }

        void setAge(int newAge) {
            this->age = newAge;
        }

        void setGrade(double newGrade) {
            this->grade = newGrade;
        }
};

double averageGrade(Student *student, int size) {
    int sum = 0;
    int counter = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + student[i].getGrade();
        counter++;
    }

    if (counter > 0) {
        return (double) sum / counter;
    } else {
        return 0;
    }
}

int main () {

    // Define a class named "Student" with attributes for name, age, and grade. Create get and set methods. 
    // Finally, create a list of students and find the average grade for all students in the list.

    Student students[] = {Student("Alice", 18, 85.5),
            Student("Bob", 19, 76.2),
            Student("Charlie", 20, 92.0),
            Student("David", 19, 81.8),
            Student("Eve", 18, 88.9)};
    
    int size = sizeof(students) / sizeof(students[0]);

    std::cout << "The average grade is: " << averageGrade(students, size) << std::endl;


    return 0;
}