#include <iostream>
using namespace std;

#define RESPONSE_SIZE 40
#define MAX_RESPONSE 10

int main()
{
    int responses[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10,
                                    3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6,
                                    7, 5, 6, 4, 8, 6, 8, 10};
    int frequency[MAX_RESPONSE + 1] = {0};

    for (int i = 0; i < RESPONSE_SIZE; i++)
    {
        frequency[responses[i]]++;
    }

    cout << "Response\tFrequency" << endl;

    for (int i = 1; i <= MAX_RESPONSE; i++)
    {
        cout << i << "\t\t" << frequency[i] << endl;
    }

    return 0;
}
