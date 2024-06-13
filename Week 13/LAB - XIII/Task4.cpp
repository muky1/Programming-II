#include <iostream>
#include <fstream>

class Student {
    private:
        std::string name;
        std::string surname;
        double calculus_grade;
        double programming_grade;
        double physics_grade;
        double english_language_grade;
        double german_language_grade;

    public:
        Student(std::string name, std::string surname, double calculus_grade, double programming_grade, double physics_grade, double english_language_grade, double german_language_grade) {
            this->name = name;
            this->surname = surname;
            this->calculus_grade = calculus_grade;
            this->programming_grade = programming_grade;
            this->physics_grade = physics_grade;
            this->english_language_grade = english_language_grade;
            this->german_language_grade = german_language_grade;
        }

        void generate_report_card() const {
            double average = (calculus_grade + programming_grade + physics_grade + english_language_grade + german_language_grade) / 5.0;

            std::ofstream report_card("ReportCard.txt");

            report_card << "Student name: " << name << std::endl;
            report_card << "Student surname: " << surname << std::endl;
            report_card << "<-----GRADES----->" << std::endl;
            report_card << "Calculus grade: " << calculus_grade << std::endl;
            report_card << "Programming grade: " << programming_grade << std::endl;
            report_card << "Physics grade: " << physics_grade << std::endl;
            report_card << "English language grade: " << english_language_grade << std::endl;
            report_card << "German language grade: " << german_language_grade << std::endl;
            report_card << "Average grade: " << average << std::endl;

            report_card.close();
        }
};

int main () {

    // Create a class Student which accepts his name, surname, grades from Calculus, Programming, Physics, English and German Language as parameters.
    // Create a method generate_report_card that will write all information about the student into a file named final_report_card as well as his average grade.


    Student student = Student("Muhamed", "Begic", 6, 6, 8, 9, 8);
    student.generate_report_card();

    std::ifstream read_file("ReportCard.txt");
    std::string line;

    while(std::getline(read_file, line)) {
        std::cout << line << std::endl;
    }



    return 0;
}