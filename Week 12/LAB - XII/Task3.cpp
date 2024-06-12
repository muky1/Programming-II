#include <iostream>
#include <cmath>

class Triangle {
    private:
        double sideA, sideB, sideC;

    
    public:
    Triangle(double a, double b, double c) {
        sideA = a;
        sideB = b;
        sideC = c;
    }

    double calculatePerimeter() const {
        return sideA + sideB + sideC;
    }

    double calculateArea() const {
        double s = calculatePerimeter() / 2;
        return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }

    void printInformation() const {
        std::cout << "The perimeter of the triangle is: " << calculatePerimeter() << std::endl;
        std::cout << "The area of the triangle is: " << calculateArea() << std::endl;
    }

};

int main () {

    // Write a program to print the area and perimeter of a triangle having sides of
    // 3, 4 and 5 units by creating a class named 'Triangle'.
    // Write functions to calculate perimeter and area; and one to print the information.

    Triangle triangle = Triangle(3, 4, 5);

    triangle.printInformation();

    return 0;
}