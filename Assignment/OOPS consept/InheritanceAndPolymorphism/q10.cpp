//Write a program to concatenate the two strings using Operator Overloading.
#include<iostream>
using namespace std;
class Concat{
    public:
    string str1,str2;
    public:
    int getdata(){
        cout<<"Enter string 1:";
        cin>>str1;
        cout<<"Enter string 2:";
        cin>>str2;
    }
    int show(){
        cout<<"String 1="<<str1<<endl;
        cout<<"String 2="<<str2<<endl;
    }
    int operator +(Concat c){
        string res;
        res=str1 + c.str2;
        cout<<"Concatenate of two string ="<<res<<endl;
    }
};
int main(){
    Concat c1;
    c1.getdata();
    c1.show();
    c1.operator+(c1);
}