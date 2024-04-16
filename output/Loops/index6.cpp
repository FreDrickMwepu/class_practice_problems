// Write a program in C++ to display n terms of natural numbers and their sum.
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << " Enter term: ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++) {
        cout << i << endl;
        sum += i;
    }
    cout << " The sum of the nth term is: " << sum <<endl;
    return 0;
}