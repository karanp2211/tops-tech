//1. WAP to create simple calculator using class.
#include<iostream>
using namespace std;
class calc{
    public:
    int n1,n2;
    public:
    int get(){
        cout<<"enter Number:";
        cin>>n1>>n2;
    }
    int sum(){
        return n1+n2;
    }
    int mul(){
       return n1*n2;
    }
    int div(){
       return n1/n2;
    }
    int sub(){
        return n2-n1;
    }
    int show(){
        cout<<"Summation="<<sum()<<endl;
        cout<<"multiplication="<<mul()<<endl;
        cout<<"division="<<div()<<endl;
        cout<<"Substraction="<<sub()<<endl;
    }    

};
int main(){
    calc c;
    c.get();
    c.show();
}