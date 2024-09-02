/* Q 1. Write a C++ program to create a class named `Rectangle` 
with private data members for length and breadth. Include public
methods to initialize, calculate the area, and display the dimensions
and area of the rectangle. Create multiple objects of the class and
demonstrate the functionality.?*/

#include<iostream>
using namespace std;
class Rectangle{
private:
int length;
int breadth;

public:
void getdata(){
    cout<<"enter length: ";
    cin>>length;
    cout<<"enter breadth: ";
    cin>>breadth;
}
void showData(){
    float area;
    area=length*breadth;
    cout<<"Length = "<<length<<endl;
    cout<<"Breadth = "<<breadth<<endl;
    cout<<"Area of rectangle is "<<area<<endl;  
}
};
int main(){
    Rectangle r1,r2,r3;
    r1.getdata();
    r1.showData();
    r2.getdata();
    r2.showData();
    r3.getdata();
    r3.showData();
}
