#include <iostream>
using namespace std;

int main() {
    int num = 10; // Declare an integer variable
    int *ptr;     // Declare a pointer to an integer

    ptr = &num;   // Assign the address of num to the pointer ptr

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Dereferenced value of ptr: " << *ptr << endl;

    return 0;
}