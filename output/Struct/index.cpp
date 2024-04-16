// The following program illustrates the basic use of the struct in cpp
// Written Fredrick Mwepu
// 12th/02/2024

#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    struct address {
        int plot;
        string street;
    };
};

int main() {
    student stud;
    stud.age = 23;

    cout << stud.age;
    return 0;
}