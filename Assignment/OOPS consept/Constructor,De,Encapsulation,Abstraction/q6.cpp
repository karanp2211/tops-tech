// Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor.
#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int emp_id;
    float salary;
    public:
    Employee(string n,int id,float s){
        name=n;
        emp_id=id;
        salary=s;
    }
    int setname(string n){
        name=n;
    }
    string getname(){
        return name;
    }
    int setid(int id){
        emp_id=id;
    }
    int getid(){
        return emp_id;
    }
    int setsalary(float s){
        salary=s;
    }
    float getsalary(){
        return salary;
    }
    int calculate(int amount){
        salary+=amount;
    }
    int show(){
        cout<<"Name="<<getname()<<endl;
        cout<<"ID="<<getid()<<endl;
        cout<<"Salary="<<getsalary()<<endl;
    }
};
int main(){
    Employee e("karan",4324,2000);
    e.getname();
    e.getid();
    e.getsalary();
    e.show();
    int am;
    cout<<"Enter Performance based salary :";
    cin>>am;
    e.calculate(am);
    cout<<"The employee salary is="<<e.getsalary()<<endl;
}