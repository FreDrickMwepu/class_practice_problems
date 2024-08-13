#include <iostream>

using namespace std;

int main()
{
    int value;
    int nums[10] = {5, 10, 3, 19, 14, 100, 77, 54, 27, 0};  // Initialize all 10 elements
    cout << "Enter number to search for: ";
    cin >> value;

    int pos = -1;
    for (int i = 0; i < 10; i++)  // Changed 9 to 10 to loop through all 10 elements
    {
        if (nums[i] == value)
        {
            pos = i;
            break;  // Added break to exit loop once number is found
        }
    }

    if (pos < 0)
    {
        cout << "The number not found in array" << endl;
    }
    else 
    {
        cout << "Item found at position " << pos << endl;  // Corrected "end1" to "endl"
    }
    return 0;
}
