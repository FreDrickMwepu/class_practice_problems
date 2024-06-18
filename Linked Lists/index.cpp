#include <iostream>
using namespace std;

class Fruit {
    public:
        string name;
        double price;
        Fruit *next = NULL;
        Fruit(string name, double price) {
            this -> name = name;
            this -> price = price;
        }
};

int main() {

    Fruit *a= new Fruit("Mango", 12.5);
    Fruit *b= new Fruit("Gwava", 10.0);
    Fruit *c= new Fruit("Melon", 9.3);
    Fruit *d= new Fruit("Lemon", 2.1);

    a -> next = b;
    b -> next = c;
    c -> next = d;

    // Print one item
    cout << a ->name<<"\t" << a -> price;
    // Print the list 
    Fruit * temp = a;

    do {
        cout <<temp ->name<<"\t" << temp -> price;
        temp = temp -> next;

    } while (temp != NULL);
    return 0;
}