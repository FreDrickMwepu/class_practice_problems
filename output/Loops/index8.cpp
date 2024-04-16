// Write a program in C++ to check whether a number is prime or not.
#include <iostream>
using namespace std;

int main () {

    int n;
    int counter = 0;

    cout << " Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            counter++;
        }
    }
    if (counter == 2) {
        cout << "The number entered is a prime number" <<endl;
    } else {
        cout << "The number entered is not a prime number" <<endl;
    } 

    return 0;
}