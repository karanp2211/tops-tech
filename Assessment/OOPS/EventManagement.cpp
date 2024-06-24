// Event Management System.

#include<iostream>
using namespace std;
class Eventmanage{
  
  public:
  string FirstAndLastname,eventname;
  int nog,nom;
  public:
  int getinfo(){
  cout<<"************** Event Management System ************** "<<endl;
  cout<<"Enter the name of the event :"<<endl;
  cin>>eventname;
  cin.ignore();
  cout<<"Enter the customer's First name & Last name : "<<endl;
  getline(cin,FirstAndLastname);
  cout<<"Enter the NO. of Guests :"<<endl;
  cin>>nog;
  cout<<"Enter the No. Minutes in the event :"<<endl;
  cin>>nom;
  cout<<"************** Event Estimate for :"<<FirstAndLastname<<" **************"<<endl;
  }
};

    class eventestimate : public Eventmanage{
    public:
    double costperhour = 18.50;
    double costperminute = .40;
    double costofdinner = 20.70;

    int nos;
    int cost1,cost2,costforoneserver,totalfoodcost,averagecost,totalcost,depositamount;

  public:
    int ceil(){
    getinfo();
    nos=nog/20;
    cout<<"Number Of Server: "<<nos<<endl;

    cost1 = (nom / 60) * costperhour;
    cost2 = (nom % 60) * costperminute;
    costforoneserver = cost1 + cost2;
    cout<<"The Cost Of Servers: "<<costforoneserver<<endl;

    totalfoodcost = nog * costofdinner;
    cout<<"The Cost For Food is: "<<totalfoodcost<<endl;

    averagecost = totalfoodcost / nog;
    cout<<"Average Cost Per Person: "<<averagecost<<endl;
    cout<<""<<endl;

    totalcost = totalfoodcost + (costforoneserver * nos);
    cout<<"Total Cost is: "<<totalcost<<endl;

    depositamount = totalcost * .25;
    cout<<"The Deposit needed is: "<<depositamount<<endl;

    }
};
int main(){
eventestimate em;
  em.ceil();
}