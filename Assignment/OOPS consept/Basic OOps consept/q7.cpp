// Write a C++ program to create a class called Rectangle that has private
// member variables for length and width. Implement member functions to
// calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int lenght;
    int width;
    public:
    Rectangle(int l,int w){
        lenght=l;
        width=w;
    }
    int area(){
        return lenght*width;
    }
    int perimeter(){
        return 2*(lenght+width);
    }
    int show(){
        cout<<"Rectangle of area="<<area()<<endl;
        cout<<"Rectangle of Perimeter="<<perimeter()<<endl;
    }    
};
int main(){
    Rectangle r(4,5);
    r.area();
    r.perimeter();
    r.show();
}