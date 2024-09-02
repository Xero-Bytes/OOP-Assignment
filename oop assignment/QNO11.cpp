/*Question 11. Implement a scenario where a class `Person` is inherited
by two classes `Employee` and `Student`, both of which are inherited by
a class `ResearchAssistant`. Use virtual base classes to avoid the 
diamond problem. Write a C++ program to demonstrate the proper construction
of `ResearchAssistant`objects and the resolution of ambiguity in multiple 
inheritance.*/
#include<iostream>
using namespace std;
class Person{
public:
Person(){
    cout<<"Person Constructor is Called!"<<endl;
}
~Person(){
    cout<<"Person Destructor is Called!"<<endl;
}
};
class Employee:virtual public Person{
    public:
Employee(){
    cout<<"Employee Constructor is Called!"<<endl;
}
~Employee(){
    cout<<"Employee Destructor is Called!"<<endl;
}
} ;
class Student:virtual public Person{
    public:
Student(){
    cout<<"Student Constructor is Called!"<<endl;
}
~Student(){
    cout<<"Student Destructor is Called!"<<endl;
}
} ;
class ResearchAssistant:public Employee,public Student{
   public:
ResearchAssistant(){
    cout<<"ResearchAssistant Constructor is Called!"<<endl;
}
~ResearchAssistant(){
    cout<<"ResearchAssistant Destructor is Called!"<<endl;
}
};
int main(){
ResearchAssistant r;
return 0;
}