//Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the
// marks obtained in two subjects and class result contains the total marks
// obtained in the test. The class result can inherit the details of the marks
// obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    public:
    int getrollno(){
        cout<<"Enter rollno:";
        cin>>rollno;
    }
    int show(){
        cout<<"Rollno="<<rollno<<endl;
    }
};
class Test : public student{
    public:
    int maths,physics,chemistry;
    public:
    int getm(){
        getrollno();
        cout<<"Enter marks=";
        cin>>maths>>physics>>chemistry;
    }
    int showm(){
        show();
        cout<<"Marks="<<maths<<endl<<physics<<endl<<chemistry<<endl;
    }
};
class Result : public Test{
    public:
    int Totalmarks;
    public:
    int totalm(){
        getm();
        showm();
        Totalmarks = maths + physics + chemistry;
        cout<<"Result="<<Totalmarks<<endl;
    }
};
int main(){
    Result r;
    r.totalm();
}