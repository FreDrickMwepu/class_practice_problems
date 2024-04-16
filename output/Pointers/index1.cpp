// A pointer is a variable that stores the memory address of another variable.
// It is declared using a * and the type of the value it points to, for example: int *p;
// The memory address of a variable can be accessed using the & operator, and assigned to a pointer, for example: int *p = &num;
// The value of a memory address can be accessed using the * operator, for example *p is the value stored at the address that p points to.
// A pointer can also be assigned to an array and be used to access the elements of the array, by simply incrementing the pointer.

#include <iostream>
using namespace std;

int main() {
    int ages[] = {19, 24, 36, 45, 56, 52, 21, 27, 24, 34, 29, 60, 40, 42, 45, 47, 22, 30, 34, 20, 18, 26, 51, 43, 47, 39, 22, 34, 56, 52, 21, 27, 24, 37, 19, 24, 36, 45, 44, 49, 23, 25, 19, 40, 29, 60, 40, 42, 45, 47, 61, 30, 19, 43, 47, 39, 41, 46, 29, 24, 21, 25, 28};
    int size = 63;

    int *p = ages;
    int sum = 0; // Initialize sum variable to 0

    for(int i = 0; i < size; i++) {
        sum += *p; // Add the value pointed to by p to the sum
        p++;
    }

    // Calculate the average age as an integer
    int average = sum / size;

    cout << "The average age of the employees is: " << average << endl;

    return 0;
}


