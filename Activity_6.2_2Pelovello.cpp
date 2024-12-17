#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

// Function to calculate the hypotenuse
double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double side1, side2;
    cout << "Enter the two sides of the triangle: ";
    cin >> side1 >> side2;
    cout << "The hypotenuse of the triangle is: " << hypotenuse(side1, side2) << endl;
    return 0;
}
