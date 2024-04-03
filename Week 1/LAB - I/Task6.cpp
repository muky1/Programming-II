#include <iostream>
using namespace std;

int main () {
    int celsius, fahrenheit;
    char celsiusOrFahrenheit;

    cout << "Please input either C or F depending if you want to convert from Celsius to Fahrenheit or vice versa: ";
    cin >> celsiusOrFahrenheit;

    if (celsiusOrFahrenheit != 'C' && celsiusOrFahrenheit != 'c' && celsiusOrFahrenheit != 'F' && celsiusOrFahrenheit != 'f') {
        cout << "Please enter a valid character!";
    } else {
        if (celsiusOrFahrenheit == 'F' || celsiusOrFahrenheit == 'f')
        {
            cout << "Enter Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5/9;

            cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius!" << endl;
        }

        if (celsiusOrFahrenheit == 'C' || celsiusOrFahrenheit == 'c')
        {
            cout << "Enter Celsius: ";
            cin >> celsius;
            fahrenheit = (celsius * 9/5) + 32;

            cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit!" << endl;
        }
    }

    return 0;
}
