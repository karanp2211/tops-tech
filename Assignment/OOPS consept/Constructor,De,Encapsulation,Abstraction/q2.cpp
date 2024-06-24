//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class Calculator{
    public:
    int n1,n2;
    public:
    Calculator(int num1,int num2){
        n1=num1;
        n2=num2;
    }
    int add(){
        return n1+n2;
    }
    int sub(){
        return n2-n1;
    }
    int div(){
        return n1/n2;
    }
    int mul(){
        return n1*n2;
    }
    int show(){
        cout<<"Addition="<<add()<<endl;
        cout<<"Substruction="<<sub()<<endl;
        cout<<"Division="<<div()<<endl;
        cout<<"Multiplication="<<mul()<<endl;
    }
};
int main(){
    Calculator c(5,4);
    c.add();
    c.sub();
    c.div();
    c.mul();
    c.show();
}