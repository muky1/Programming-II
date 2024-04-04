#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int num1, num2, option;
    double double1;

    cout << "Calculator application, please select one of the options below!" << endl;

    cout << "Option 1: Addition!" << endl;
    cout << "Option 2: Subtraction!" << endl;
    cout << "Option 3: Multiplication!" << endl;
    cout << "Option 4: Division!" << endl;
    cout << "Option 5: Logarithm!" << endl;
    cout << "Option 6: Square root of a number!" << endl;
    cout << "Option 7: Number to the power!" << endl;
    cout << "Option 8: Trigonometric functions: SIN, COS, TAN!" << endl;
    cout << "Option 9: Value rounded up and rounded down!" << endl;

    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Please enter two numbers: " << endl;
        cin >> num1 >> num2;
        cout << "Result is: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Please enter two numbers: " << endl;
        cin >> num1 >> num2;
        cout << "Result is: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Please enter two numbers: " << endl;
        cin >> num1 >> num2;
        cout << "Result is: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "Please enter two numbers: " << endl;
        cin >> num1 >> num2;
        cout << "Result is: " << num1 / num2 << endl;
        break;
    case 5:
        cout << "Please enter a number: " << endl;
        cin >> num1;
        cout << "The log base 2 of: " << num1 << " is: " << log2(num1) << endl;
        cout << "The log base 10 of: " << num1 << " is: " << log10(num1) << endl;
        break;
    case 6:
        cout << "Please enter a number: " << endl;
        cin >> num1;
        cout << "The square root of: " << num1 << " is: " << sqrt(num1) << endl;
        break;
    case 7:
        cout << "Please enter a number: " << endl;
        cin >> num1;
        cout << "Please enter a power: " << endl;
        cin >> num2;
        cout << "Number to the given power of: " << num2 << " is: " << pow(num1, num2) << endl;
        break;
    case 8:
        cout << "Please enter a number: " << endl;
        cin >> num1;
        cout << "The SIN of: " << num1 << " is: " << sin(num1) << endl;
        cout << "The COS of: " << num1 << " is: " << cos(num1) << endl;
        cout << "The TAN of: " << num1 << " is: " << tan(num1) << endl;
        break;
    case 9:
        cout << "Please enter a decimal value in order to round properly: " << endl;
        cin >> double1;
        cout << "Rounded up value of: " << double1 << " is: " << ceil(double1) << endl;
        cout << "Rounded down value of: " << double1 << " is: " << floor(double1) << endl;
        break;
    case 10:
        cout << "Exiting application!" << endl;
        break;
    
    default:
        break;
    }

    return 0;
}