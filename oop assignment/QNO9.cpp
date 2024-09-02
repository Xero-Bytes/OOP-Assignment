/*Q9. Design an abstract class `Employee` with pure virtual functions
`calculateSalary()` and `displayDetails()`. Derive two classes 
`FullTimeEmployee` and `PartTimeEmployee`, each implementing the 
`calculateSalary()` function based on different salary structures. 
Write a program to create objects of derived classes and demonstrate
polymorphic behavior through base class pointers.*/
#include<iostream>
using namespace std;
class Employee{
    public:
 void virtual calculateSalary(int,int )=0;
  void virtual displayDetails()=0;
};
class FullTimeEmployee:public Employee{

    int days;
    int salary;
    public:
void calculateSalary(int d,int s){
days=d;
salary=days*s;
}
void displayDetails(){
 cout<<"Part-Time Employee Salary for "<<days<<" days is " <<salary<<" RS/-"<<endl;
}
};
class PartTimeEmployee:public Employee{
    int days;
    int salary;
    public:
void calculateSalary(int d,int s){
days=d;
 salary=s;
salary=days*salary;
}
void displayDetails(){
cout<<"Part-Time Employee Salary for "<<days<<" days is " <<salary<<" RS/-"<<endl;
}
};
int main(){
Employee *e;
FullTimeEmployee fte;
PartTimeEmployee pte;
e=&fte;
e->calculateSalary(20, 500);
e->displayDetails();
e=&pte;
e->calculateSalary(20, 300);
e->displayDetails();
return 0;
}