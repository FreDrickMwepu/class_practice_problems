#include <iostream>
using namespace std;

class Fruit {
public:
    string name;
    double price;
    Fruit* next;

    // Constructor to initialize the Fruit object
    Fruit(string name, double price) {
        this->name = name;
        this->price = price;
        this->next = nullptr;
    }
};

int main() {
    // Creating Fruit objects
    Fruit* a = new Fruit("Mango", 12.0);
    Fruit* b = new Fruit("Guava", 10.0);
    Fruit* c = new Fruit("Lemon", 9.3);
    Fruit* d = new Fruit("Melon", 21.0);

    // Linking the objects to form a singly linked list
    a->next = b;
    b->next = c;
    c->next = d;

    // Print one item
    cout << "First item:" << endl;
    cout << a->name << " " << a->price << endl;
    cout << "" << endl;
    cout << "Second item:" << endl;
    cout << b->name << " " << b->price << endl;
    cout << "" << endl;
    cout << "Third item:" << endl;
    cout << c->name << " " << c->price << endl;
    cout << "" << endl;
    cout << "Fourth item:" << endl;
    cout << d->name << " " << d->price << endl;
    cout << "" << endl;



    // Print the list
    cout << "List items:" << endl;
    Fruit* temp = a;
    while (temp != nullptr) {
        cout << temp->name << " " << temp->price << endl;
        temp = temp->next;
    }

    // Free allocated memory
    delete a;
    delete b;
    delete c;
    delete d;

    return 0;
}
