#include <iostream>

int maxElement(int arr[][3], int rows, int cols) {
    int max = arr[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

std::string findAverage(int arr[], int size) {
    double average = 0;
    int sum = 0;
    std::string result;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    average = sum / (double) size;
    for (int j = 0; j < size; j++) {
        if(arr[j] > average) {
            result = result + " " + std::to_string(arr[j]);
        }
    }
    return result;
}

int findFactorial (int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * findFactorial(num - 1);
    }
}

int recursiveDigitSum (int num) {
    if (num == 0) {
        return 0;
    } else {
        return num % 10 + recursiveDigitSum(num / 10);
    }
}

class carRental {
    private:
        double fuelPrice;
        double fuelCapacity;
    
    public:
        carRental(double fuelPrice, double fuelCapacity) {
            this->fuelPrice = fuelPrice;
            this->fuelCapacity = fuelCapacity;
        }

        void calculateDaysOfFuel() const {
            std::cout << fuelCapacity / 3; 
        }

        void calculateFuelPrice(int days) const {
            std::cout << days * fuelPrice;
        }
};

std::string findAverageReturnString(int arr[], int size) {
    double average = 0;
    int sum = 0;
    std::string result;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    average = sum / size;
    for (int j = 0; j < size; j++) {
        if(arr[j] > average) {
            result = result + std::to_string(arr[j]);
        } else {
            result = result + " ";
        }
    }
    return result;
}

int main () {

    // Task 1 ---> Find max element of 2D array

    int myArray[2][3] = {{1, 2, 3}, {4, 5, 6}};

    std::cout << "The max element is: " << maxElement(myArray, 2, 3) << std::endl;

    // Task 2 ---> Find the average of a 1D array, if an element is larger than the average, append the element to a string and return the string

    int my1DArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    int size = sizeof(my1DArray) / sizeof(my1DArray[0]);

    std::cout << "Elements bigger than the average are: " << findAverage(my1DArray, size) << std::endl;

    // Task 3 ---> Find factorial recursively

    int num = 5;

    std::cout << "The factorial of number: " << num << " is: " << findFactorial(num) << std::endl;

    // Task 4 ---> Sum up digits of an integer recursively

    int digits = 1234;

    std::cout << "The sum of digits in integer: " << digits << " is: " << recursiveDigitSum(digits) << std::endl;

    // Task 5 ---> Create a carRental class with a constructor, and methods to calculate fuel price for the given amount of days,
    //        ---> and for how many days will the fuel last

    int days = 5;

    carRental rental = carRental(2.75, 50);

    std::cout << "You have: ";
    rental.calculateDaysOfFuel();
    std::cout << " days of fuel left!" << std::endl;

    std::cout << "Fuel price for: " << days << " days is: ";
    rental.calculateFuelPrice(days);
    std::cout << " $" << std::endl;

    // Task 6 ---> Find the average of a 1D array, if an element is larger than the average,
    //        ---> append the element to a string, else append a space and return the string

    int myArrayTwo[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int sizeTwo = sizeof(myArrayTwo) / sizeof(myArrayTwo[0]);

    std::cout << "The elements are: " << findAverageReturnString(myArrayTwo, sizeTwo);


    return 0;
}