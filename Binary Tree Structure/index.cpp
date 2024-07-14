#include <iostream>
using namespace std;

class Fruit {
    
    public: 
        string name;
        Fruit *left = NULL;
        Fruit *right = NULL;

        Fruit (string name) {
            this->name = name;
        }
};

void PrintInOrder(Fruit *head) {
    if (head == NULL) return;
    PrintInOrder(head->left);
    cout << head->name << " ";
    PrintInOrder(head->right);
}

void PrintPreOrder(Fruit *head) {
    if (head == NULL) return;
    cout << head->name << " ";
    PrintPreOrder(head->left);
    PrintPreOrder(head->right);
}

void PrintPostOrder(Fruit *head) {
    if (head == NULL) return;
    PrintPostOrder(head->left);
    PrintPostOrder(head->right);
    cout << head->name << " ";
}

int main() {
    Fruit *f1 = new Fruit("Banana");
    Fruit *f2 = new Fruit("Mango");
    Fruit *f3 = new Fruit("Orange");
    Fruit *f4 = new Fruit("Melon");
    Fruit *f5 = new Fruit("Guava");
    Fruit *f6 = new Fruit("Lemon");

    f1->left = f2;
    f1->right = f3;
    f2->left = f4;
    f2->right = f5;
    f3->right = f6;

    cout << "InOrder Traversal: ";
    PrintInOrder(f1);
    cout << endl;

    cout << "PreOrder Traversal: ";
    PrintPreOrder(f1);
    cout << endl;

    cout << "PostOrder Traversal: ";
    PrintPostOrder(f1);
    cout << endl;

    return 0;
}
