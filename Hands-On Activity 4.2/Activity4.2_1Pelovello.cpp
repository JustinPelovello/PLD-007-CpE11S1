#include <iostream>
using namespace std;

int main()
{
    // Array of values
    int values[] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int size = sizeof(values) / sizeof(values[0]);

    // Print the header
    cout << "Element\tValue\tHistogram" << endl;

    for (int i = 0; i < size; i++) // Loop through each element in the array
    {
        cout << i << "\t" << values[i] << "\t"; // Print the element index and value

        for (int j = 0; j < values[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
