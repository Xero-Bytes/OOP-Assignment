/*Q4. Write a C++ program that demonstrates polymorphism by creating a 
base class `Animal` with a virtual function `sound()`. Derive classes 
`Dog`, `Cat`, and `Bird` from `Animal`, each overriding the `sound()`
 method to print a sound specific to the animal. Use pointers or references 
 to call the `sound()` function polymorphically.*/
#include<iostream>
using namespace std;

class Animal {
public:
    virtual void Sound() {
        cout << "Animals Sound" << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void Sound() override {
        cout << "Woof Woof!!!" << endl;
    }
};

class Cat : public Animal {
public:
    void Sound() override {
        cout << "Meowww!!!" << endl;
    }
};

class Bird : public Animal {
public:
    void Sound() override {
        cout << "Chirp!!!" << endl;
    }
};

int main() {
    Animal *a1;

    a1 = new Animal;
    a1->Sound();
    delete a1;

    a1 = new Dog;
    a1->Sound();
    delete a1;

    a1 = new Cat;
    a1->Sound();
    delete a1;

    a1 = new Bird;
    a1->Sound();
    delete a1;

    return 0;
}
