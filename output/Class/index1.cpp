#include <iostream>
#include <string>

using namespace std;

class Person {
    private: 
        string pname;
        int pAge;
    public:
        void setPName(string p) {
            this->pname = p;

        }
        string getPName() {
            return pname;
        }
};

int main() {

    Person p[5];
    int i = 0;
    string temp;

    while(1 < 5) {

        cout << " Enter five names: " << endl;
        cin >> temp;
        p[i].setPName(temp);
        i++;

    }

    cout << "Hello" << p[1].getPName() << endl;
    return 0;

}