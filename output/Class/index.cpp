#include <iostream>
using namespace std;

// The name of the class is suppose to start with Uppercase
class Student {
    // Access Modifiers Default
    private:
        int sin;

    // Access Modifiers Public 
    public:
        string name;
        long sid;
        void sayHello(){
            cout << " Hello [Hello]!";
        }

};

void Student::sayHello(){
            cout << " Hello [Hello]!";
}

int main() {
    Student stud;
    stud.sid = 4445342;
    cout << stud.sid << endl;
    stud.sayHello();

    return 0;

}