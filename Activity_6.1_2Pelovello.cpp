#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

int main() {
    double temp;
    int choice;

    cout << "Choose an option:\n";
    cout << "1. Convert Fahrenheit to Celsius\n";
    cout << "2. Convert Celsius to Fahrenheit\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temp) << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temp) << endl;
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
