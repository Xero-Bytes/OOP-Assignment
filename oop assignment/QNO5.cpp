/*Q5. Implement a class `ComplexNumber` to represent complex numbers.
 Write a friend function to add two complex numbers and return the result.
  Create and display the result of adding two complex number objects.*/
#include<iostream>
using namespace std;
class ComplexNumber{
double real;
double imaginary;
public:
ComplexNumber(double r=0,double i=0):real(r),imaginary(i){};
friend ComplexNumber add(ComplexNumber &c1,ComplexNumber &c2);
void display(){
cout << real << " + " << imaginary << "i" <<endl;
}
};
ComplexNumber add(ComplexNumber &c1,ComplexNumber &c2){
double realSum=c1.real+c2.real;
double imaginarySum=c1.imaginary+c2.imaginary;
return ComplexNumber(realSum,imaginarySum);
}
int main(){
ComplexNumber c1(3.5,2.5);
ComplexNumber c2(1.5,2.3);
ComplexNumber result=add(c1,c2);
result.display();
return 0;
}