//Write a program to find the max number from given two numbers using friend function.
#include <iostream>
using namespace std;
class Max{
    public:
    int n1,n2;
    public:
    Max(int a,int b){
        n1=a;
        n2=b;
    }
    friend int findmax(Max num1,Max num2);
};
int findmax(Max num1,Max num2){
    if(num1.n1 > num2.n2){
        return num1.n1;
    }
    else{
        return num2.n2;
    }
}
int main(){
    Max num1(4,5);
    Max num2(6,7);

    int maxnumber= findmax(num1,num2);
    cout<<"The maximum number ="<<maxnumber<<endl;
}