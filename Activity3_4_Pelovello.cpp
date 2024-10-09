#include <stdio.h>

int main() 
{
    int choice;
    float value;

    do 
	{
        //Show the conversion menu
        printf("\nConversion Menu:\n");
        printf("1. cm to inches\n");
        printf("2. inches to cm\n");
        printf("3. feet to meters\n");
        printf("4. meters to feet\n");
        printf("5. Exit\n");

        //Get the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //If the user chose to exit, break the loop
        if (choice == 5) 
		{
        break;
        }

        // Get the value to convert
        printf("Enter the value to convert: ");
        scanf("%f", &value);

        // Perform the conversion based on user's choice
        if (choice == 1) 
		{
            printf("%.2f cm = %.2f inches\n", value, value / 2.54);
        } else if (choice == 2) 
		{
            printf("%.2f inches = %.2f cm\n", value, value * 2.54);
        } else if (choice == 3) 
		{
            printf("%.2f feet = %.2f meters\n", value, value / 3.281);
        } else if (choice == 4) 
		{
            printf("%.2f meters = %.2f feet\n", value, value * 3.281);
        } else 
		{
            printf("Invalid choice! Please try again.\n");
        }
      
    } while (choice != 5);  // Repeat until the user chooses to exit

    return 0;
}

