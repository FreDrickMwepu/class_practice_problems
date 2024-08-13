#include <iostream>
using namespace std;

int main() {
    int UserInput;
    cout << " Enter a number: " << "";
    cin >> UserInput;


    for (int i = 1; i <= UserInput * 2 - 1; i++) {

        if (i <= UserInput ) {
            cout << i << endl;
        } 
        else {
            cout << 2*UserInput - i << endl;
        }
    }

    return 0;
}