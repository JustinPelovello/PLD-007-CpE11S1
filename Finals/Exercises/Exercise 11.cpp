// Example 4
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int* ptr = (int*) malloc (sizeof(int)); // Dynamically allocate memory
	if (ptr != NULL);
	{
	
	*ptr = 10;
	cout << "Value: "<< *ptr << endl;
	free(ptr); // Free allocate memory

    }  
     return 0;
}
