#include <iostream>

class Car {
    public:
        int year_created;
        std::string model;
        std::string color;
        double price;

    // constructor parameters are named the same as the class member variables, that is why we use this pointer
    // or we can use different parameter names
    Car(int year_created, std::string model, std::string color, double price) {
        this->year_created = year_created;
        this->model = model;
        this->color = color;
        this->price = price;
    }
};

int main () {

    // #1: Create class Car and two objects of that class (Toyota and Peugeot). 
    // The class should have the following attributes:
    // model
    // year_created
    // color
    // price

    Car Toyota = Car(2021, "Corolla", "Blue", 19999.99);
    Car Peugeot = Car(2000, "206", "Silver", 4999.99);

    std::cout << Toyota.color << ", " << Toyota.model << ", " << Toyota.year_created << ", " << Toyota.price << std::endl;
    std::cout << Peugeot.color << ", " << Peugeot.model << ", " << Peugeot.year_created << ", " << Peugeot.price << std::endl;



    return 0;
}