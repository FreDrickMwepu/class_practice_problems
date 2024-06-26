#include <iostream>
using namespace std;


class Student {
    public:
        string name;
        Student *next;
        Student *prev;
        Student() {

        }

};

int main() {
    
    Student *stud= new Student();
    stud -> name = "John";
    rear -> next = stud;
    stud -> prev = rear;
    rear = stud;


}