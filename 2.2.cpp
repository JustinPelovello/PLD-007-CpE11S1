#include <stdio.h>

int main() 
{
    int counter, grade, total, average;

    /* Initialization phase */
    total = 0;
    counter = 1;

    /* Processing phase */
    while (counter <= 10) {
        printf("Enter the grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }

    /* Termination phase */
    average = total / 10;
    printf("Class average is %d\n", average);

    return 0;
}
