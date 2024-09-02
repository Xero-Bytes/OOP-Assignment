/*
Q3. Create a base class `Shape`with a method to display the type of shape. 
Derive two classes `Circle and `Square` from `Shape`.Each derived class 
should have methods to calculate the area specific to the shape. Demonstrate 
the use of inheritance and method overriding.
*/

#include<iostream>
using namespace std;

class Shape {
public:
    virtual void show() {
        cout << "This is a Geometrical Shape" << endl;
    }

    virtual void calculateArea() = 0; 
};

class Circle : public Shape {
private:
    float radius;
    const float phi = 3.14;

public:
    void show() override {
        cout << "This is a Circle" << endl;
    }

    void calculateArea() override {
        cout << "Enter radius: ";
        cin >> radius;
        float area = phi * (radius * radius);
        cout << "Area of Circle is: " << area << endl;
    }
};

class Square : public Shape {
private:
    float side;

public:
    void show() override {
        cout << "This is a Square" << endl;
    }

    void calculateArea() override {
        cout << "Enter side: ";
        cin >> side;
        float area = side * side;
        cout << "Area of Square is: " << area << endl;
    }
};

int main() {
    Square s1;
    Circle s2;

    s1.show();
    s1.calculateArea();

    s2.show();
    s2.calculateArea();

    return 0;
}
