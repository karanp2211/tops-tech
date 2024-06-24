//Write a C++ Program to show access to Private Public and Protected using Inheritance.
#include<iostream>
using namespace std;
class Base{
    private:
    int pri=1;
    protected:
    int protec=2;
    public:
    int pub=2;
    int getprivate(){
        return pri;
    }
};
class child : public Base{
    public:
    int getprotected(){
        return protec;
    }
    int getpublic(){
        return pub;
    }
};
int main(){
    child c;
    cout<<"Private member="<<c.getprivate()<<endl;
    cout<<"Protected member="<<c.getprotected()<<endl;
    cout<<"Public member="<<c.getpublic()<<endl;
}