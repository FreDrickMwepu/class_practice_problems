#include <iostream>
#include <string>

using namespace std;

class Fruit {
public:
    string name;
    Fruit *next = NULL;
    Fruit *prev = NULL;
    Fruit(string name) {
        this->name = name;
    }
};

void print(Fruit *head) {
    while (head != NULL) {
        cout << head->name << endl;
        head = head->next;
    }
}

bool deleteFruit(Fruit *head, string name) {
    Fruit *temp = nullptr;
    while (head != NULL && head->name != name) {
        temp = head;
        head = head->next;
    }
    if (head != NULL) {
        if (temp != NULL) {
            temp->next = head->next;
        }
        if (head->next != NULL) {
            head->next->prev = temp;
        }
        delete head;
        return true;
    }
    return false;
}

int main() {
    Fruit *a = new Fruit("Guava");
    Fruit *b = new Fruit("Lemon");
    Fruit *c = new Fruit("Melo");
    Fruit *d = new Fruit("Mango");

    // Link the fruits
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    b->prev = a;
    c->prev = b;
    d->prev = c;
    a->prev = NULL;

    // Print 
    print(a);

    // Delete
    if (deleteFruit(a, "Lemon")) {
        cout << "Deleted successfully" << endl;
    } else {
        cout << "Fruit not found" << endl;
    }
    print(a);

    return 0;
}
