#include <iostream>
using namespace std;

int main () {
    double basicSalary, grossSalary, houseRentAllowance, dearnesAllowance;

    cout << "Please input the amount of your salary: ";
    cin >> basicSalary;

    if (basicSalary <= 10000) {
        houseRentAllowance = 0.2 * basicSalary;
        dearnesAllowance = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        houseRentAllowance = 0.25 * basicSalary;
        dearnesAllowance = 0.9 * basicSalary;
    } else {
        houseRentAllowance = 0.3 * basicSalary;
        dearnesAllowance = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + houseRentAllowance + dearnesAllowance;
    cout << "Your gross salary is: " << grossSalary;
    
    return 0;
}