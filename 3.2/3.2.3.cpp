#include <stdio.h>

int main() 
{
    // First sequence: Print 1
    for (int i = 1; i <= 1; i++) 
	{
        printf("%d ", i);
    }
    printf("\n");

    // Second sequence: Print 1, 1
    for (int i = 1; i <= 2; i++) 
	{
        printf("1 ");
    }
    printf("\n");

    // Third sequence: Print 1, 2
    for (int i = 1; i <= 2; i++) 
	{
        printf("%d ", i);
    }
    printf("\n");

    // Fourth sequence: Print 1, 2, 3, 4, 5, 6, 7
    for (int i = 1; i <= 7; i++) 
	{
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
