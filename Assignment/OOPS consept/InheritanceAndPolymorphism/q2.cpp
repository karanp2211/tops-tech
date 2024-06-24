//Write a C++ Program to find Area of Rectangle using inheritance.
#include<iostream>
using namespace std;
class shape{        
    protected:
    int width;
    int height;
    public:
    int setwidth(int w){
        width=w;
    }
    int setheight(int h){
        height=h;
    }
};
class Rectangle:public shape{     
    public:
    int area(){
    int a=width*height;
    cout<<"enter area="<<a<<endl;
    }
};
int main(){
    Rectangle rect;
    rect.setwidth(7);
    rect.setheight(8);
    rect.area();
}