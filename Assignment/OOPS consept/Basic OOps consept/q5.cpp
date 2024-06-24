//Define a class to represent a bank account.
#include<iostream>
using namespace std;
class Bankaccount{
    public:
    string depo_name;
    int num;
    string current;
    int balance;
    public:
    int assignval(){
        cout<<"Enter depositer name:"<<endl;
        cin>>depo_name;
        cout<<"Enter Account number:"<<endl;
        cin>>num;
        cout<<"Type of account:"<<endl;
        cin>>current;
        cout<<"Balance:"<<endl;
        cin>>balance;
    }
    int depositedamount(){
        int amount;
        cout<<"Enter amount:";
        cin>>amount;
        balance+=amount;
    }
    int withdraw(){
        int wdraw;
        cout<<"Enter Withdrawal amount:";
        cin>>wdraw;
        balance-=wdraw;
    }
    void display(){
    cout<<"Enter depositer name:"<<depo_name<<endl;
    cout<<"Balance:"<<balance<<endl;
    }
};
int main(){
    Bankaccount ba;
    ba.assignval();
    ba.depositedamount();
    ba.withdraw();
    ba.display();
}