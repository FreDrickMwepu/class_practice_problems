// Constructors and destructors are fundamental concepts in C++ that are used to initialize and clean up objects, respectively.

// Constructors:
// - Constructors are special member functions of a class that are automatically called when an object of that class is created.
// - They have the same name as the class and may have parameters, allowing you to initialize object data members when the object is created.
// - Constructors can be default constructors (with no parameters), parameterized constructors (with parameters), copy constructors (which initialize a new object as a copy of an existing object), or move constructors (which transfer resources from one object to another).
// - Constructors are useful for setting initial values, allocating resources, and performing any necessary setup tasks when an object is created.

// Destructors:
// - Destructors are also special member functions of a class that are automatically called when an object is destroyed, either explicitly (using the `delete` keyword) or implicitly (when the object goes out of scope).
// - They have the same name as the class preceded by a tilde (~) and do not take any parameters.
// - Destructors are typically used to release resources allocated by the object, such as dynamic memory, file handles, or network connections.
// - Destructors are important for preventing memory leaks and ensuring proper cleanup of resources when objects are no longer needed.

// Example:

#include <iostream>
using namespace std;


class MyClass {
    public:
        // Constructor
        MyClass(int value) : data(value) {
            cout << "Constructor called. Initialized with " << value << endl;
        }
        // Destructor
        ~MyClass() {
            cout << "Destructor called. Cleaning up." << endl;
        }
    private:
        int data;
};

int main() {
    // Creating an object
    MyClass obj(10);

    // Object goes out of scope, destructor is called automatically
    return 0;
}


// In the example above, the constructor initializes the `data` member of the `MyClass` object with the provided value, and the destructor prints a message when the object is destroyed.