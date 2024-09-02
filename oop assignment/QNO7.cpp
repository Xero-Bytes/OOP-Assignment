/*Q7. Create a class `BankAccount` that encapsulates the details of a bank
account, including `accountNumber`, `accountHolderName`, and `balance`.
Provide public methods to deposit and withdraw money, and to check the 
balance.Ensure that balance cannot be accessed directly outside the class.*/
#include<iostream>
using namespace std;
class BankAccount{
private:
int AccountNumber;
string AccountHolderName;
double Balance;
public:
BankAccount(int A_N ,string A_H_N,double Bal){
    AccountNumber=A_N;
    AccountHolderName=A_H_N;
    Balance=Bal;
}
void Deposit(double amount){
    if(amount>0){
        Balance=Balance+amount;
        cout<<"You Deposited "<<amount<<" Successfully!"<<endl;
    }
    else{
        cout<<"Invalid deposit amount!"<<endl;
    }
}
void WithDraw(double amount){
    if(amount>0&&amount<=Balance){
    Balance=Balance-amount;
    cout<<"You WithDraw "<<amount<<" Successfully!"<<endl;
}
   else{
    cout << "Invalid withdrawal amount or insufficient balance!" << endl;
}
}
double CheckBalance()const{
    return Balance;
}
    void displayAccountDetails() const {
        cout <<"Account Number: " << AccountNumber<<endl;
        cout<<"AccountHolderName: " <<AccountHolderName<< endl;
        cout <<"Balance: " << Balance << endl;
    }

};
int main(){
BankAccount account(123456, "Taqdees Bukhari", 5000.00);
account.displayAccountDetails();
account.Deposit(1000);
account.WithDraw(2000);
account.WithDraw(10000);
cout<<"Your balance is "<<account.CheckBalance();
return 0;
}
