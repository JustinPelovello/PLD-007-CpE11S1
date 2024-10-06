#include <stdio.h>

int main()
{
    float startValue = 100;
    float interestRate = 0.015;
    float firstYearValue, secondYearValue, thirdYearValue;

    // Compute the values for each year
    firstYearValue=startValue * (1 + interestRate);
    secondYearValue=firstYearValue * (1 + interestRate);
    thirdYearValue=secondYearValue * (1 + interestRate);

    printf("After first year: %f\n", firstYearValue);
    printf("After second year: %f\n", secondYearValue);
    printf("After third year: %f\n", thirdYearValue);

    return 0;
}
