#include <stdio.h>

int main()
{
    int xValue = 5;
    int yValue = 9;
    int result;
    int bigResult;

    //Perform the given manipulation
    xValue = xValue + 3;
    yValue = yValue - xValue;     
    result = xValue * yValue;     
    result = result + result;     
    result = result - 1;          
    yValue = result % result;      
    result = result + xValue;      
    bigResult = result * result * result; 
    xValue = xValue * yValue;      

    //Output the results
    printf("Result: %d\n", result);
    printf("Big Result: %d\n", bigResult);

    return 0;
}
