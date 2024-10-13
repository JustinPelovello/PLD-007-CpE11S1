#include <stdio.h>

int main() 
{
    double principal = 1000.00; 
    double rate = 0.05;         
    int years = 10;             
    double amount; 

    // Loop through each year (from 1 to 10)
    for (int n = 1; n <= years; n++) 
	{
        amount = principal * (1 + rate); // Interest is added each year
        principal = amount; // The new amount becomes the principal for the next year

        // Print the amount for the current year
        printf("Year %d: $%.2f\n", n, amount);
    }

    return 0;
}

