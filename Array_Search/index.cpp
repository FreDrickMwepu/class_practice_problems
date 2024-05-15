#include <iostream>

using namespace std;

int main()
{
    int value;
    int nums[10] = {5, 10, 3, 19, 14, 100, 77, 54, 27};
    cout << " Enter number to search for: ";
    cin >> value;

    int pos = -1;
    for (int i = 0; i < 10, i++)
    {
        if (nums[i] == value)
        {
            pos = i;
        }
    }
}
    if (pos < 0)
    {
        cout << " The not found in array" << endl;
    }
    else {
        cout << "Item found at position " << pos << end1;
    }
    return 0;

}
