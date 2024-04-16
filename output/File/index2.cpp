#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        long sid;

};

int main() {
    Student stud;
    stud.sid = 4445342;
    cout << stud.sid << endl;

    return 0;

}