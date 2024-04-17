// This program passes a reference to a function and modifies the value of the variable in the main function.

#include <iostream>
using namespace std;

void myFunction(int myNumber[5]) {
    for (size_t i = 0; i < 5; i++) {
        cout << myNumber[i] << endl;
    }
}

int main() {
    int myNumber[5] = {1, 2, 3, 4, 5};
    myFunction(myNumber);
    return 0;
}