//Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation.
#include<iostream>
using namespace std;
class student{
    public:
    string name,Class;
    int number;
    float marks;
    public:
    student(string name,string Class,int number,float marks){
        this->name=name;
        this->Class=Class;
        this->number=number;
        this->marks=marks;
    }
};
class Marks{
    private:
    char grade;
    public:
    student *stu;
    public:
    Marks(char grade,student *stu){
        this->grade=grade;
        this->stu=stu;
    }
    int display(){
        cout<<"Name="<<stu->name<<endl<<"Class="<<stu->Class<<endl<<"Roll Number="<<stu->number<<endl<<"Marks="<<stu->marks<<endl<<"Grade="<<grade<<endl;
    }
};
int main(){
    student st("Karan","A",9,75);
    Marks mk('A',&st);
    mk.display();
}