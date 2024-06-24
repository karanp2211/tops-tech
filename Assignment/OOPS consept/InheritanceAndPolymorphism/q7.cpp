//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance.
#include<iostream>
using namespace std;
class Person{
    public:
    int pid;
    string name;
    public:
    int getdata(){
        cout<<"Enter id:";
        cin>>pid;
        cout<<"Enter name:";
        cin>>name;
    }
    int show(){
        cout<<"Enter id="<<pid<<endl<<name<<endl;
    }
};
class task : public Person{
    public:
    int task1,task2;
    public:
    int add_task(){
        getdata();
        show();
        cout<<"Enter tasks:"<<endl;
        cin>>task1>>task2;
    }
};
class approval : public task{
    public:
    int res;
    public:
    int appr(){
        add_task();
        res=task1+task2;
    }
    int display(){
        cout<<"Enter result:"<<res<<endl;
    }
};
int main(){
    approval ar;
    ar.appr();
    ar.display();
}