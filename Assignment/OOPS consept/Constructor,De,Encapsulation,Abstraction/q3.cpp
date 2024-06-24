//Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member
//functions to get and set these variables.
#include<iostream>
using namespace std;
class Car{
    private:
    string C_name;
    int m_num;
    int year;
    public:
    int setcompany(string c){
        C_name=c;
    }
    int setmodel(int m){
        m_num=m;
    }
    int setyear(int y){
        year=y;
    }
    string getcompany(){
        return C_name;
    }
    int getmodel(){
        return m_num;
    }
    int getyear(){
        return year;
    }
    int show(){
        cout<<"Company name="<<getcompany()<<endl;
        cout<<"Model="<<getmodel()<<endl;
        cout<<"Year="<<getyear()<<endl;
    }
};
int main(){
    Car c;
    c.setcompany("honda");
    c.setmodel(3);
    c.setyear(2024);
    c.show();
}