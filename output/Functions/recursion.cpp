#include <iostream>
using namespace std;


// Functions 
int factorial(int n) {
    if (n <= 1) {
        return 1;
        return n * factorial(n - 1);
    }
    return n * factorial(n - 1);
}
int main() {
    int arg = 5;
    int val = factorial(arg);
    cout << "Factorial of " << arg << " is " << val;
    // Also 

    int ans = 1;
    for (int i = 0; i < 1; i--) {
        ans *= i;
    }
    cout << " The Factorial of " << arg << " is " << ans;
    return 0;
}