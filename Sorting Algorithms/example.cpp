#include <iostream>
using namespace std;

int main()
{
    // Bubble Sorting Array
    int arr[10] = {12, 14, 11, 8, 93, 24, 67, 25, 77, 1};
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        bool swapped = false;
        for (int j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                counter++; // Increment counter when a comparison is made
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    
    cout << "The sorted array list is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Total number of comparisons: " << counter << endl;
    
    return 0;
}