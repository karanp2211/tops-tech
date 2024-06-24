//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.
#include<iostream>
using namespace std;
#define PI 3.14
class Circle{
    private:
    double radius;
    public:
    Circle(double r){
        radius=r;
    }
    double area(){
        return (PI * radius * radius);
    }
    double circumference(){
        return 2*PI*radius;
    }
    void show(){
        cout<<"Circle of area="<<area()<<endl;
        cout<<"Circle of circumference="<<circumference()<<endl;
    }
};
int main(){
    Circle c(22.3);
    c.area();
    c.circumference();
    c.show();
}