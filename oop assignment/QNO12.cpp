/*Q12. Define two interfaces `IDrive` and `IFly`, each with a pure
virtual function `drive()` and `fly()` respectively. Implement a 
class `FlyingCar` that inherits from both interfaces and provides
concrete implementations of `drive()` and `fly()`. Write a program
to demonstrate the use of `FlyingCar`objects through pointers or 
references to the interfaces.*/
#include<iostream>
using namespace std;
class IDrive {
public:
    virtual void drive() = 0;
    virtual ~IDrive() {
        cout<<"IDrive destructor is called!"<<endl;
    }
};
class IFly {
public:
    virtual void fly() = 0;
    virtual ~IFly() {
        cout<<"IFly destructor is called!"<<endl;
    } 
};
class FlyingCar : public IDrive, public IFly {
public:
    void drive() override {
        cout << "Driving on the road!" << endl;
    }
    void fly() override {
        cout << "Flying in the sky!" << endl;
    }
    ~FlyingCar() {
        cout << "FlyingCar Destructor Called" << endl;
    }
};
int main() {
    FlyingCar myFlyingCar;
    IDrive* drivePtr = &myFlyingCar;
    drivePtr->drive();
    IFly* flyPtr = &myFlyingCar;
    flyPtr->fly();

    return 0;
}
