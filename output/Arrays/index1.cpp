// The following program has has Arrays and Pointers 

#include <iostream> 
using namespace std;

int main() {

    int arr[] = {2, 4, 6, 8};

    int *p = arr;

// first element
    cout << *p << endl;
// second element
    cout << *(p+1) << endl;
// third element
    cout << *(p+2) << endl;

    return 0;
}
