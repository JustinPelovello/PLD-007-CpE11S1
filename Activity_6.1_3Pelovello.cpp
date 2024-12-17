#include <iostream>
using namespace std;

// Function to convert dollars to pesos
double dollarsToPesos(double dollars, double exchangeRate) {
    return dollars * exchangeRate;
}

// Function to convert pesos to dollars
double pesosToDollars(double pesos, double exchangeRate) {
    return pesos / exchangeRate;
}

int main() {
    double amount, exchangeRate;
    int choice;

    cout << "Enter the current exchange rate (1 Dollar = X Pesos): ";
    cin >> exchangeRate;

    cout << "Choose an option:\n";
    cout << "1. Convert Dollars to Pesos\n";
    cout << "2. Convert Pesos to Dollars\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter amount in Dollars: ";
        cin >> amount;
        cout << "Amount in Pesos: " << dollarsToPesos(amount, exchangeRate) << endl;
    } else if (choice == 2) {
        cout << "Enter amount in Pesos: ";
        cin >> amount;
        cout << "Amount in Dollars: " << pesosToDollars(amount, exchangeRate) << endl;
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
