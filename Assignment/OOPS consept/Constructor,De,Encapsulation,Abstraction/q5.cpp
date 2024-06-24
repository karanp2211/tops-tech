// Write a C++ program to create a class called Triangle that has private
// member variables for the lengths of its three sides. Implement member
// functions to determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
class Triangle{
    private:
    int side1,side2,side3;
    public:
    Triangle(int s1,int s2,int s3){
        side1=s1;
        side2=s2;
        side3=s3;
    } 
    int equilateral(){
        return (side1 == side2 && side2 == side3);
    }
    int isosceles(){
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }
    int scalene(){
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }
    int show(){
        cout<<"Equals of lenght="<<equilateral()<<endl;
        cout<<"Isosceles="<<isosceles()<<endl;
        cout<<"Scalene="<<scalene()<<endl;
    }
};
int main(){
    Triangle t(3,3,3);
    t.equilateral();
    t.isosceles();
    t.scalene();
    t.show();
}