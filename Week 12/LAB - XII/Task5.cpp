#include <iostream>

class Car {
    private:
        std::string brand;
        std::string model;
        int year;
        std::string color;
        float mileage;
        float fuel_capacity;
        float fuel_level;
        bool service_due;

    public:
        Car(std::string brand, std::string model, int year, std::string color, float mileage, float fuel_capacity, float fuel_level, bool service_due) {
            this->brand = brand;
            this->model = model;
            this->year = year;
            this->color = color;
            this->mileage = mileage;
            this->fuel_capacity = fuel_capacity;
            this->fuel_level = fuel_level;
            this->service_due = service_due;
        }

        void display_details() const {
            std::cout << "Car brand: " << brand << std::endl;
            std::cout << "Car model: " << model << std::endl;
            std::cout << "Car production year: " << year << std::endl;
            std::cout << "Car color: " << color << std::endl;
            std::cout << "Car mileage: " << mileage << std::endl;
            std::cout << "Car fuel capacity: " << fuel_capacity << std::endl;
            std::cout << "Car fuel level: " << fuel_level << std::endl;
            std::cout << "Car service due: " << (service_due ? "Yes" : "No") << std::endl;
            
        }

        void update_mileage(float new_mileage) {
            mileage = new_mileage;
            if (mileage >= 50000) {
                service_due = true;
            }
        }

        void refuel(float fuel_amount) {
            if (fuel_level + fuel_amount <= fuel_capacity) {
                fuel_level = fuel_level + fuel_amount;
            } else {
                std::cout << "Fuel tank full!" << std::endl;
            }
        }

        bool check_service_status() const {
            return service_due;
        }

        void service() {
            if (service_due) {
                std::cout << "Service completed successfully!" << std::endl;
                service_due = false;
            } else {
                std::cout << "No service needed!" << std::endl;
            }
        }
};

int main () {

    // Create class Car, with the following attributes: 
    // brand (string): The brand of the car.
    // model (string): The model of the car.
    // year (int): The year the car was manufactured.
    // color (string): The color of the car.
    // mileage (float): The mileage of the car (in kilometers).
    // fuel_capacity (float): The fuel capacity of the car (in liters).
    // fuel_level (float): The current fuel level of the car (in liters).
    // service_due (bool): Indicates whether a service is due for the car.

    // Implement the following functions: 
    // display_details(): Displays the details of the car.
    // update_mileage(float new_mileage): Updates the mileage of the car.
    // refuel(float fuel_amount): Adds fuel to the car's fuel tank.
    // check_service_status(): Checks if a service is due for the car.
    // service(): Performs a maintenance service on the car.

    Car car1 = Car("Toyota", "Corolla", 2020, "White", 25000.0, 50.0, 33.5, false);
    Car car2 = Car("Honda", "Civic", 2018, "Black", 40000.0, 45.0, 20.0, false);
    Car car3 = Car("Ford", "Mustang", 2019, "Blue", 60000.0, 60.0, 54, false);

    std::cout << "Car Details:" << std::endl;
    car1.display_details();
    std::cout << std::endl;

    std::cout << "Updating mileage of Toyota Corolla..." << std::endl;
    car1.update_mileage(30000.0);


    std::cout << "Checking service status..." << std::endl;
    std::cout << "Service Due for Toyota Corolla: " << (car1.check_service_status() ? "Yes" : "No") << std::endl;


    std::cout << "Refueling Toyota Corolla..." << std::endl;
    car1.refuel(10.0);
    std::cout << std::endl;

    std::cout << "Servicing Toyota Corolla..." << std::endl;
    car1.service();



    return 0;
}