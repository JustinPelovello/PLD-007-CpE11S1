#include <stdio.h>

int main() 
{
    int choice;
    float radius, length, width, base, height, side;

    do 
	{
        //Show the area calculation menu
        printf("\nArea Calculation Menu:\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Triangle\n");
        printf("4. Area of Square\n");
        printf("5. Exit\n");

        //Get the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //Perform the calculation based on the choice
        if (choice == 1) 
		{
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle = %.2f\n", 3.14 * radius * radius);
        } else if (choice == 2) 
		{
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Area of the rectangle = %.2f\n", length * width);
        } else if (choice == 3) 
		{
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of the triangle = %.2f\n", 0.5 * base * height);
        } else if (choice == 4) 
		{
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            printf("Area of the square = %.2f\n", side * side);
        } else if (choice != 5) 
		{
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);  //Repeat until the user chooses to exit

    return 0;
}

