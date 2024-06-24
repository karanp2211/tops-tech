// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    int getdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }  
    int showdata(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
    }
};
class Student : public Person{
    protected:
    double percentage;
    public:
    int getp(){
     getdata();
     cout<<"Percentage:";
     cin>>percentage;
    }
    int showp(){
        showdata();
        cout<<"Percentage="<<percentage<<endl;
    }
};
class Teacher : public Student{
    protected:
    int salary;
    public:
    int gets(){
        getp();
        cout<<"Enter Salary:";
        cin>>salary;
    }
    int showS(){
        showp();
        cout<<"Salary="<<salary<<endl;
    }
};
int main(){
    Teacher t;
    t.gets();
    t.showS();
}