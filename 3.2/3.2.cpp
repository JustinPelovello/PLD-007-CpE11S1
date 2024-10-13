#include <stdio.h>

int main() {
    int sum = 0;

    // Loop through even numbers from 2 to 100
    for (int i = 2; i <= 100; i += 2) 
	{
        sum += i;
    }

    printf("The sum of all even integers from 2 to 100 is: %d\n", sum);
    
    return 0;
}
