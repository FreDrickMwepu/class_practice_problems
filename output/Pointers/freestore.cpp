#include <iostream>
using namespace std;

int main() {
    int *age =  new int;
    *age = 67;
    cout << "Age: " << *age;
    delete age;
    cout <<"\nAge: " <<*age;
    age = new int;
    return 0;
}
