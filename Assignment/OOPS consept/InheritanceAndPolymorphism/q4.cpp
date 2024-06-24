//Write a C++ Program display Student Mark sheet using Multiple inheritance.
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    public:
    int inputdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"enter Rollno:";
        cin>>rollno;
    }
    int show(){
        cout<<"Name="<<name<<endl;
        cout<<"Rollno="<<rollno<<endl;
    }
};
class Marks{
    public:
    int maths,physics,chemistry;
    public:
    int getm(){
        cout<<"Enter marks=";
        cin>>maths>>physics>>chemistry;
    }
    int showm(){
        cout<<"Marks="<<maths<<endl<<physics<<endl<<chemistry<<endl;
    }
};
class Marksheet : public Student,public Marks{
    public:
    int Totalmarks;
    public:
    int totalm(){
        inputdata();
        getm();
        show();
        showm();
        Totalmarks = maths + physics + chemistry;
        cout<<"Result="<<Totalmarks<<endl;
    }
};
int main(){
    Marksheet ms;
    ms.totalm();
}