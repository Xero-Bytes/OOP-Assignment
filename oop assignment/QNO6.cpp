/*Q6. Implement a class `Book` with attributes like `title`, `author`, and 
`price`. Write a copy constructor and overload the assignment operator to 
perform deep copies of `Book` objects. Demonstrate the functionality by 
copying and assigning `Book` objects.*/
#include<iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int price;

public:
    Book() {
        cout << "Default constructor" <<endl;
    }

    Book(string T, string A, int P) : title(T), author(A), price(P) {}

    Book(Book &obj) {
        title = obj.title;
        author = obj.author;
        price = obj.price;
        cout << "Copy constructor Deep Copy!!!" <<endl;
    }
    Book& operator=(const Book &obj) {
        if (this != &obj) { // Self-assignment check
            title = obj.title;
            author = obj.author;
            price = obj.price;
        }
        cout << "Assignment Operator (Deep Copy)!!!" << endl;
        return *this;
    }
    void show() const {
        cout << "Book Title: " << title << endl;
        cout << "Book Author: " << author << endl;
        cout << "Book Price: " << price << endl;
    }
};
int main() {
    Book B1("Object Oriented Programming", "Taqdees", 1000);
    B1.show();

    Book B2(B1);
    B2.show();

    Book B3;
    B3 = B2;
    B3.show();

    return 0;
}
