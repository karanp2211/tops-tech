//Write a program of to swap the two values using template.
#include<iostream>
using namespace std;
template<typename t>
t swap(t a,t b){
    t temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"A:"<<a<<endl<<"B:"<<b<<endl;
}
int main(){
    cout<<swap<int>(30,20)<<endl;
}