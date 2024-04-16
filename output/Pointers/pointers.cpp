#include <iostream>
using namespace std;
int main()
{
    int *age = 0;
    int temp = 65;
    age = &temp;
    int *yAge = &temp;

    cout << "Output: " << temp <<endl;
    cout << "Output: " << *age;
    cout << endl;
    cout << "Output: " << &temp;
    cout << "\n Output: " << age;

    *age = 78;
    cout <<"\n Value stored in temp is " << temp;
    cout <<"\n Value stored in temp is " << *yAge;
    return 0;
}