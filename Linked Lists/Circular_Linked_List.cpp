#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node * next;

        // Constructor
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

// Function to print the circular linked list 
void printList(Node * head) {
    if (head == nullptr) {
        return;
    }
    Node * temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Function to insert a new node at the end of the circular linked list
void insertEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        head -> next = head; // Link the node to itself
    } else {
        Node* temp = head;
        while (temp -> next != head) {
            temp = temp -> next;
        }
        temp->next = newNode;
        newNode->next = head; // Complete the circle
    }
}

int main() {
    Node* head = nullptr;

    // Insert some nodes into the circular linked list
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 4);
    insertEnd(head, 5);

    // Print the list
    printList(head);
    
    return 0;
}