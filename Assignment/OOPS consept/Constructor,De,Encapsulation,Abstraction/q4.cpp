//Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class Bankaccount{
    private:
    int num;
    int balance;
    public:
    int getdata(){
        cout<<"Enter account number:";
        cin>>num;
        cout<<"Enter balance:";
        cin>>balance;
    }
    int deposite(){
        int amount;
        cout<<"Enter amount:";
        cin>>amount;
        balance+=amount;
    }
    int withdrawmoney(){
        int wdraw;
        cout<<"Enter Withdrawal money:";
        cin>>wdraw;
        balance-=wdraw;
    }
    void display(){
    cout<<"Balance:"<<balance<<endl;
    }
};
int main(){
    Bankaccount ba;
    ba.getdata();
    ba.deposite();
    ba.withdrawmoney();
    ba.display();
}