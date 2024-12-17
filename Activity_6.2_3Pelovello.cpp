#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

// Function to convert Fahrenheit to Celsius
double celsius(int fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(int celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

int main() {
    cout << fixed << setprecision(2); // Format output to 2 decimal places

    // Print Fahrenheit to Celsius chart
    cout << "Fahrenheit to Celsius:\n";
    for (int f = 32; f <= 212; f += 10) {
        cout << f << " F = " << celsius(f) << " C\n";
    }

    // Print Celsius to Fahrenheit chart
    cout << "\nCelsius to Fahrenheit:\n";
    for (int c = 0; c <= 100; c += 10) {
        cout << c << " C = " << fahrenheit(c) << " F\n";
    }

    return 0;
}
