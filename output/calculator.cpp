#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    int product = 0;
    cout << " Enter the first number: ";
    cin >> num1;
    cout << " Enter the second number: ";
    cin >> num2;

    for(int i = 0; i < num2; i++) {
        product += num1;
    }
    cout << " The product of " << num1 << " and " << num2 << " is: " << product;

    return 0;
        
}