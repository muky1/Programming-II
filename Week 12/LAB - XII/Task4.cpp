#include <iostream>

class Employee {
    private:
        std::string name;
        int employee_id;
        std::string department;
        float salary;
        int age;
    
    public:
    Employee(std::string name, int employee_id, std::string department, float salary, int age) {
        this->name = name;
        this->employee_id = employee_id;
        this->department = department;
        this->salary = salary;
        this->age = age;
    }

    void give_raise(float amount) {
        salary = salary + amount;
    }

    void promote(std::string new_position, float raise_amount) {
        department = new_position;
        salary = salary + raise_amount;
    }

    void display_details() const {
        std::cout << "Employee name: " << name << std::endl;
        std::cout << "Employee id: " << employee_id << std::endl;
        std::cout << "Employee department: " << department << std::endl;
        std::cout << "Employee salary: " << salary << std::endl;
        std::cout << "Employee age: " << age << std::endl;
        std::cout << "Employee is eligible for retirement: " << is_eligible_for_retirement() << std::endl;
    }

    bool is_eligible_for_retirement() const {
        return age >= 65 ? true : false;
    }
};

int main () {

    // Create class Employee, with the following attributes: 
    // name (string): The name of the employee.
    // employee_id (int): A unique identifier for the employee.
    // department (string): The department the employee belongs to.
    // salary (float): The salary of the employee.
    // age(int): Age of the employee
    // Implement the following functions: 
    // give_raise( amount: float) -> Void: Increases the employee's salary by the given amount.
    // promote(new_position: str, raise_amount: float) -> Void: Promotes the employee to a new position and increases their salary by the given raise amount.
    // display_details() -> Void: Prints out the employee's details in a readable format.
    // is_eligible_for_retirement() -> bool: Returns True if the employee's age is 65 or above, otherwise False.


    Employee employee = Employee("William", 190035, "Engineering", 5000, 24);

    employee.display_details();

    employee.give_raise(1500);

    employee.is_eligible_for_retirement();

    employee.display_details();


    return 0;
}