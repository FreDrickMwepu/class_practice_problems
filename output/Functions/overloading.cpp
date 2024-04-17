// This program illustrates function overloading 

#include <iostream>
using namespace std;

int myFunction(int x, int y) {
    return x + y;
}

double myFunction(double x, double y) {
    return x + y;
}

int main() {
    int myNumber1 = myFunction(1, 2);   
    double myNumber2 = myFunction(1.1, 2.2);
    cout << "Int value: "<< myNumber1 << endl;
    cout << "Double value: "<< myNumber2 << endl;

    return 0;
}