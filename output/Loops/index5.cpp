/*
QUESTION: Find the sum of the fist 10 natural numbers 
*/

#include <iostream>
using namespace std;

int main() {

    // Program Counter 
    int sum = 0;

    // For loop to run the iteration 
    for(int i = 1; i <=10; i++) {
        cout << i << endl;
        sum+=i;
    }
    cout << "The sum of natural numbers is: " << sum <<endl;

    return 0;
}