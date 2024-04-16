#include <iostream>
using namespace std;

void sum(int x, int y) {
  cout << x+y << endl; 
}
int main() {
    int num1, num2;
    cout << " Enter number ";
    cin >> num1;
    cout << " Enter number ";
    cin >> num2;

    sum(num1, num2);
    return 0;
}