#include <iostream>

using namespace std;

int power(int x, int y) {
    if(x <= 1) {
        return 1;
    } else {
        return x * power(x, y - 1);
    }

}

int main() {
    int x;
    int y;

    cout << "Enter the base value: ";
    cin >> x;
    cout << "Enter the power value: ";
    cin >>y;
    int ans;

    for (int i = 0; i <= y; i++) {
        ans =x*x;
    }
    cout << "By iteration the power of the two inputs is: "<< ans <<endl;
    cout << "" <<endl;
    cout<< " By recursion the power of the two inputs is: " << power(x, y) <<endl;

    return 0;
}