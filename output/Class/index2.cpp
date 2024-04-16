/*
Polymorphism is a fundamental concept in object-oriented programming (OOP) that allows objects of
different classes to be treated as objects of a common superclass. It enables a single interface 
to represent multiple underlying data types. There are two main types of polymorphism in C++:

	1.	Compile-time polymorphism (Static polymorphism):
	•	Achieved through function overloading and operator overloading.
	•	Function overloading allows multiple functions with the same name but different parameters or return types.
	•	Operator overloading allows operators to be redefined to work with user-defined data types.

	2.	Run-time polymorphism (Dynamic polymorphism):
	•	Achieved through inheritance and virtual functions.
	•	Inheritance allows a subclass to inherit properties and behavior from a superclass.
	•	Virtual functions enable a function in a base class to be overridden in a derived class.
	•	This allows a pointer or reference of a base class to be used to invoke overridden functions at runtime, based on the actual object being pointed to or referenced.

Here’s a simple example demonstrating dynamic polymorphism using inheritance and virtual functions:


*/

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << std::endl;
    }
};

// Derived class ( This is coming from the parent class of Animal)
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << std::endl;
    }
};

// Another derived class (Same as this one)
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* ptrAnimal1 = new Dog();
    Animal* ptrAnimal2 = new Cat();

    ptrAnimal1->makeSound(); // Outputs: Dog barks
    ptrAnimal2->makeSound(); // Outputs: Cat meows

    delete ptrAnimal1;
    delete ptrAnimal2;

    return 0;
}
/*

In this example, Animal is the base class with a virtual function makeSound().Both Dog and 
Cat are derived classes that override the makeSound() function. At runtime, polymorphism allows the 
correct version of makeSound() to be called based on the actual type of the object being pointed 

*/