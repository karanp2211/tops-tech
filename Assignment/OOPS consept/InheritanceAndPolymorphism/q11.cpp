//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
// Rectangle: Area * breadth 
// Triangle: ½ * Area * breadth
// Circle: Pi * Area *Area
#include<iostream>
#define pi 3.14
using namespace std;
class Area{
    public:
    int area(int area){
        int Circle = pi * area * area;
        cout<<"Area of Circle="<<Circle<<endl;
    }
    int area(int area,int breadth){
        int Triangle = 0.5 * area * breadth;
        cout<<"Area of Triangle="<<Triangle<<endl;
    }
    double area(double area,double breadth){
        double Rectangle = area * breadth;
        cout<<"Area of Rectangle="<<Rectangle<<endl;
    }
};
int main(){
    Area a;
    a.area(5);
    a.area(2,3);
    a.area(5.5,8.5);
}