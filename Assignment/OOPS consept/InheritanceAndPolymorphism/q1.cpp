// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)
#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int age;  
};
class Batsman : public Cricketer{
    public:
    int t_run;
    int a_run;
    int best_p;
    int m_p;
    public:
    int inputdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Total match played:";
        cin>>m_p;
        cout<<"Total runs:";
        cin>>t_run;
        cout<<"Best performance:";
        cin>>best_p;
    }
    int averagerun(){
        a_run=t_run/m_p;
        cout<<"Average Run:"<<a_run<<endl;
    }
    int display(){
        cout<<"Enter name:"<<name<<endl;
        cout<<"Enter age:"<<age<<endl;
        cout<<"Total match played:"<<m_p<<endl;
        cout<<"Total runs:"<<t_run<<endl;
        cout<<"Best performance:"<<best_p<<endl;
    }
};
int main(){
    Batsman b;
    b.inputdata();
    b.averagerun();
    b.display();
}