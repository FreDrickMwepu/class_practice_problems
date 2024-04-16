#include <iostream>
using namespace std;

class Person {

    // Creation of constructors 
    // A Constructor is always public 
    public:
        Person(string arg) {
            cout << " I have been called ";
            name = arg;
        }
        Person() {
            cout << " I have been called ";
        }

    public:
        string name;
        int age;
        char gender;

};

class Student : public Person {
    public:
    string sid;
        //Student(string arg) {

        }
};

void testMe() {
    Student s;
    s.testMe();
    s.age = 30;
    /*Student p("Fredrick Mwepu");
    Person p("Fredrick Mwepu");*/
}

int main() {
    
    testMe();
    cout << p.name;
    // cout << " Hello World! " <<endl;

    return 0;
}