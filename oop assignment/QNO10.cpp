/*Q10. Create a base class `Media` with attributes like `title` and 
`price`, and a virtual destructor. Derive two classes `Book` and `Video`,
each with additional attributes and their own implementation of a 
`display()` function. Demonstrate runtime polymorphism by creating 
objects of `Book` and `Video`, and managing them through base class
pointers.Explain the importance of virtual destructors in this context.*/
#include<iostream>
using namespace std;
class Media{
    protected:
string title;
int price;
public:
Media(string t,int P):title(t),price(P){}
virtual ~Media(){}
virtual void display() = 0;
};
class Book:public Media{
string Author;
public:
Book(string t,int P,string A): Media(t,P),Author(A){}
    void display(){
        cout<<"Book Title = "<<title<<endl;
        cout << "Price: " << price << " RS/-" << endl;
        cout << "Author: " << Author << endl;
    }
     ~Book() {
        cout << "Book Destructor Called" << endl;
    }
};
class Video:public Media{
private:
 int duration;
public:
    Video(string t, int p, int d) : Media(t, p), duration(d) {}
    void display(){
        cout << "Video Title: "<<title<<endl;
        cout << "Price: "<<price << " RS/-"<<endl;
        cout << "Duration: "<<duration<<" minutes"<<endl;
    }
    ~Video() {
        cout << "Video Destructor Called" << endl;
    }
};
int main(){
 Media *m = new Book("C++ Programming", 500, "Bjarne Stroustrup");
 m->display();
 delete m;
 m=new Video("C++ Tutorial", 300, 120);
 m->display();
 delete m;
return 0;
}