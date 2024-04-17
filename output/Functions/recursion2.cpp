#include <iostream>

using namespace std;

int power(int x, int y) {
    if (y == 0) {
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
    cin >> y;

    int ans_iterative = 1;
    int ans_recursive = power(x, y);

    // Iterative calculation
    for (int i = 0; i < y; i++) {
        ans_iterative *= x;
    }

    cout << "By iteration the power of the two inputs is: " << ans_iterative << endl;
    cout << "By recursion the power of the two inputs is: " << ans_recursive << endl;

    return 0;
}
