/*Q2. Implement a C++ program that defines a class `Student`
 with attributes like `name`, `age`, and `grade`. Use a constructor
  to initialize these attributes. Also, implement a destructor to 
  display a message when an object is destroyed. Test the class by 
  creating and destroying objects.*/

#include<iostream>
using namespace std;
class Student{
private:
string name;
int age;
char grade;
public:
Student(){
    cout<<"enter name : ";
    cin>>name;
    cout<<"enter age : ";
    cin>>age;
    cout<<"enter grade : ";
    cin>>grade;
} 
~Student(){
    cout<<"Class is destroyed";
}
void show(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"grade : "<<grade<<endl;
}

};
int main(){
   
    Student s1;
    s1.show();

}