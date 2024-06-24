//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
inline int cube(int side){return side*side*side;}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"num="<<cube(num)<<endl;
}