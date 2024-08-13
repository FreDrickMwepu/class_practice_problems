#include <iostream>
using namespace std;

// Node structure for the Linked List
struct Node {
    int data;
    Node* next;
};

class Stack {
    private:
        Node* topNode;
    public:
        Stack() {
            topNode = NULL;
        }
    // Push Operation
    void push(int val) {
        Node* newNode = new Node();
        newNode -> data = val;
        newNode -> next = topNode;
        topNode = newNode;
    }
    // Pop Operation
    void pop() {
        if (topNode == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        } else {
            cout << "The popped element is " << topNode -> data << endl;
            topNode = topNode -> next;
        }
        Node* temp = topNode;
        topNode = topNode -> next;
        delete temp;
    }
    // Check if the stack is empty
    bool isEmpty() {
        return topNode == NULL;
    }

    // Get the top item
    int top() {
        if (topNode == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        } else {
            return topNode -> data;
        }
    }

    // Print the bottom item
    void printBottom() {
        if (topNode == NULL) {
            cout << "Stack is empty" << endl;
        } else {
            Node* temp = topNode;
            while (temp -> next != NULL) {
                temp = temp -> next;
            }
            cout << "The bottom element is " << temp -> data << endl;
        }
    }

    // Print the top item
    void printTop() {
        if (topNode == NULL) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "The top element is " << topNode -> data << endl;
        }
    }

    // Print the stack
    void printStack() {
        if (topNode == NULL) {
            cout << "Stack is empty" << endl;
        } else {
            Node* temp = topNode;
            while (temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }
    }

};

int main() {
    Stack myStack;

    //Push items onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);


    // Print the Bottom item of the stack
    myStack.printBottom();

    // Print the Top item of the stack
    myStack.printTop();

    // Insert a new item to the top of the stack
    myStack.push(4);

    // Pop the top item from the stack
    myStack.pop();
    // Print the stack
    myStack.printStack();

    return 0;
}