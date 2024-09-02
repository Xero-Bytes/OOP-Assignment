/*Q13. Create a base class `Instrument` with a virtual function
`play()`. Derive three classes `Piano`, `Violin`, and `Drum`,
each overriding the `play()` function. Use an array of base 
class pointers to store objects of derived classes and iterate 
through the array to call the `play()` function polymorphically.*/
#include<iostream>
using namespace std;
class  Instrument
{
public:
virtual void play(){}
~Instrument(){}
};
class Piano:public Instrument{
public:
void play(){
    cout<<"You can play Piano!"<<endl;
}
~Piano(){
}
};
class Violin:public Instrument{
public:
void play(){
    cout<<"You can play Violin!"<<endl;
}
~Violin(){
}
};
class Drum:public Instrument{
public:
void play(){
    cout<<"You can play Drum!"<<endl;
}
~Drum(){
}
};

int main(){
Instrument *Inst[3];
Inst[0]=new Piano;
Inst[1]=new Violin;
Inst[2]=new Drum;
for(int i=0; i<3; i++){
    Inst[i]->play();
}
for(int i=0; i<3; i++){
    delete Inst[i];
}
return 0;
}