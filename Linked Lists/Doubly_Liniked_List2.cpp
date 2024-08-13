#include <iostream>

using namespace std;

class Node {
    public:

    int key;
    int data;
    Node * next;
    Node * previous;

    Node() {
        key = 0;
        data = 0;
        next = NULL;
        previous = NULL;
    }
    Node(int k, int d) {
        key = k;
        data = d;
    }
};

class DoublyLinkedlist {
    public:
        Node * head;

    DoublyLinkedlist() {
        head = NULL;

    }
    DoublyLinkedlist(Node* n) {
        head = n;
    }

    // 1. Check if the Node exists using key value
    Node * nodeExists(int k) {
        Node * temp = NULL;
        Node * ptr = head;

        while (ptr != NULL) {
            if (ptr->key == k) {
                temp = ptr;
            }
            ptr = ptr -> next;
        }
        return temp;
    }
    // 2. Append a node to the list 
    void appendNode(Node * n) {
        if (nodeExists(n -> key) != NULL) {
            cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
        } else {
            if (head == NULL) {
                head = n;
                cout << "Node Appended" << endl;
            } else {
                Node * ptr = head;
                while (ptr -> next != NULL) {
                    ptr = ptr -> next;
                }
                ptr -> next = n;
                n -> previous = ptr;
                cout << "Node Appended" << endl;
            }
        }
    }
    // 3. Prepend Node - Attatch a node at the start
    void prependNode (Node * n) {
        if (nodeExists(n -> key) != NULL) {
            cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
        } else {
            if (head == NULL) {
                head = n;
                cout << "Node Prepended as the Head Node" << endl;
            } else {
                head -> previous = n;
                n -> next = head;
                head = n;
                cout << "Node Prepended" << endl;
            }
        }
    }
    // 4. Insert a Node after a particular node in the list
    void insertNodeAfter(int k, Node * n) {
        Node * ptr = nodeExists(k);
        if (ptr == NULL) {
            cout << "No node exists with key value : " << k << endl;
        } else {
            if (nodeExists(n -> key) != NULL) {
                cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
            } else {
                Node * nextNode = ptr -> next;
                // Inserting at the end
                if (nextNode == NULL) {
                    ptr -> next = n;
                    n -> previous = ptr;
                    cout << "Node Inserted at the end" << endl;
                } else {
                    n -> next = nextNode;
                    nextNode -> previous = n;
                    n -> previous = ptr;
                    ptr -> next = n;
                    cout << "Node Inserted in Between" << endl;
                }
            }
        }
    }
    // 5. Delete node by unique key. Basically De-link not delete
    void deleteNodeByKey(int k) {
        Node * ptr = nodeExists(k);
        if (ptr == NULL) {
            cout << "No node exists with key value : " << k << endl;
        } else {
            if (head -> key == k) {
                head = head -> next;
                cout << "Node UNLINKED with keys value : " << k << endl;
            } else {
                Node * nextNode = ptr -> next;
                Node * prevNode = ptr -> previous;
                // Deleting at the end
                if (nextNode == NULL) {
                    prevNode -> next = NULL;
                    cout << "Node Deleted at the end" << endl;
                } else {
                    prevNode -> next = nextNode;
                    nextNode -> previous = prevNode;
                    cout << "Node Deleted in Between" << endl;
                }
            }
        }
    }
    // 6. Update Node Data by Key
    void updateNodeByKey(int k, int d) {
        Node * ptr = nodeExists(k);
        if (ptr != NULL) {
            ptr -> data = d;
            cout << "Node Data Updated Successfully" << endl;
        } else {
            cout << "Node Doesn't exist with key value : " << k << endl;
        }
    }
    // 7. Printing
    void printList() {
        if (head == NULL) {
            cout << "No Nodes in Doubly Linked List" << endl;
        } else {
            cout << endl << "Doubly Linked List Values : ";
            Node * temp = head;

            while (temp != NULL) {
                cout << "(" << temp -> key << "," << temp -> data << ") <--> ";
                temp = temp -> next;
            }
        }
    }
};

int main() {
    DoublyLinkedlist obj;
    int option;
    int key1, k1, data1;
    do {
        cout << "\n What operation do you want to perform? Select Option number. Enter 0 to exit\n";
        cout << "1. Append Node" << endl;
        cout << "2. Prepend Node " << endl;
        cout << "3. Insert Node After" << endl;
        cout << "4. Delete node By Key" << endl;
        cout << "5. Update Node By Key " << endl;
        cout << "6. Print" << endl;
        cout << "7. Clear Screen"<< endl <<endl;
    }

    cin >> option;
    Node * n1 = new Node();
    case 0;
        break;
    case 1;
        cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
        cin >> key1;
        cin >> data1;
        n1 -> key = key1;
        n1 -> data = data1;
        obj.appendNode(n1);
        break;
    case 2;
        cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
        cin >> key1;
        cin >> data1;
        n1 -> key = key1;
        n1 -> data = data1;
        obj.prependNode(n1);
        break;
    case 3;
        cout << "Insert Node After Operation \nEnter key & data of the Node to be Inserted" << endl;
        cin >> key1;
        cin >> data1;
        n1 -> key = key1;
        n1 -> data = data1;
        obj.insertNodeAfter(key1, n1);
        break;    
    case 4;
        cout << "Delete Node By Key Operation \nEnter key of the Node to be Deleted" << endl;
        cin >> key1;
        obj.deleteNodeByKey(key1);
        break;
    case 5;
        cout << "Update Node By Key Operation \nEnter key & data of the Node to be Updated" << endl;
        cin >> key1;
        cin >> data1;
        obj.updateNodeByKey(key1, data1);
        break;
    case 6;
        obj.printList();
        break;
    case 7;
        system("cls");
        break;
    default;
        cout << "Invalid Option" << endl;
        break;
    } while (option != 0); 

    return 0;
    //Node n1;

}
