//Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string country;

    public:
    int setname(string n){
    name=n;
    }
    int setage(int a){
    age=a;
    }
    int setcountry(string c){
    country=c;
    }

    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getcountry(){
        return country;
    }
    int show(){
        cout<<"Name="<<getname()<<endl;
        cout<<"Age="<<getage()<<endl;
        cout<<"Country="<<getcountry()<<endl;
    }
};
int main(){
    Person p;
    p.setname("Karan");
    p.setage(22);
    p.setcountry("India");
    p.show();
}