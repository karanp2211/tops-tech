//Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading.
#include<iostream>
using namespace std;
class mathoperation{
    public:
    int addfun(int a,int b){
        cout<<"Maths Operation 1:"<<endl;
        cout<<"Addition="<<a+b<<endl;
        cout<<"Substraction="<<a-b<<endl;
        cout<<"Multiplication="<<a*b<<endl;
        cout<<"Division="<<a/b<<endl;
    }
    double addfun(double a,double b){
        cout<<"\n Maths Operation 2:"<<endl;
        cout<<"Addition="<<a+b<<endl;
        cout<<"Substraction="<<a-b<<endl;
        cout<<"Multiplication="<<a*b<<endl;
        cout<<"Division="<<a/b<<endl;
    }
};
int main(){
    mathoperation mp;
    mp.addfun(8,4);
    mp.addfun(30.0,20.0);
}