#include <iostream>

using namespace std;

void myArray()
{
    // Populating the array
    int size;
    cout << "Enter the size of the array: \n";
    cin >> size;

    int numbers [size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << (i + 1) << " of the array: \n";
        cin >> numbers[i];
    }

    // Displaying the elements in the array
    cout << "The elements in the array are: \n";
    for(int k = 0; k < size; k++)
    {
        cout << numbers[k] << endl;
    }

    // Sorting the elements of the array in descending order
    int temp;
    for(int a = 0; a < size; a++)
    {
        for (int b = 0; b < (size - 1); b++)
        {
            if(numbers[b] < numbers [b + 1])
            {
                temp = numbers[b];
                numbers[b] = numbers[b + 1];
                numbers [b + 1] = temp;
            }
        }
    }

    cout << "The sorted elements of the array are: \n";
    for(int x = 0; x < size; x++)
    {
        cout << numbers[x] << endl;
    }
}

int main()
{
    myArray();
    return 0;
}

