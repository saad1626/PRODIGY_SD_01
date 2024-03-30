#include <iostream>
using namespace std;


double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}


double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}


double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}


double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}


double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}


double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    double temperature;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "Enter the unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    switch (unit) {
        case 'C':
        case 'c':
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << " F" << endl;
            cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature) << " K" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << " C" << endl;
            cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature) << " K" << endl;
            break;
        case 'K':
        case 'k':
            cout << "Temperature in Celsius: " << kelvinToCelsius(temperature) << " C" << endl;
            cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << " F" << endl;
            break;
        default:
            cout << "Invalid unit of measurement entered!" << endl;
    }

    return 0;
}
