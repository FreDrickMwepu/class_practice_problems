#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int average;
    int sum;
    int grades[9] = {45, 87, 65, 67, 89, 90, 34, 78, 96};
        for (int i = 8; i > 0; i--) {
            counter += grades[i];
        }
    average = counter / 9;
    cout << "Our Average: " << average;
    return 0;
}
