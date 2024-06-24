//Write a program to demonstrate a rock paper scissor game.
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int userscore = 0;
int computerscore = 0;

void gamestart(int totalround, const string& name){
    cout<<endl<<"Welcome to Rock Paper Scissor game.\n";

    for(int round=0;round < totalround; round++){

        cout<<"\n Round: "<<round + 1<<" / "<<totalround<<endl;
        cout<<endl<<" * "<<name<<" 's Score "<< userscore<<endl;
        cout<<" * Computer Score = "<<computerscore<<endl;

        int userChoice,computerChoice;
        cout<<endl<<" 1) Rock\n 2) Paper\n 3) Scissor "<<endl;
        cout<<endl<<" -> Select Your Choice: ";
        cin>>userChoice;

        computerChoice = rand() % 3 + 1;
        cout<<endl<<name<<" 's Choice is: "<<userChoice<<endl;
        cout<<" Computer's Choice is: "<<computerChoice<<endl;

        if(userChoice == computerChoice){
            cout<<" \nDraw\n ";
        }
        else if((userChoice == 1 && computerChoice == 3) || 
                (userChoice == 2 && computerChoice == 1) || 
                (userChoice == 3 && computerChoice == 2)) {

                cout<<" \nCongratulations! "<<name<<" Wins this round.\n "<<endl;
                }
        else{
             cout<<" \nOh! Computer won the round.\n "<<endl;
          }
    }
}
int main(){
    srand(time(nullptr));
    string name;
    int totalround;
    cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
    
    cout<<"                           NAME                          "<<endl;

    cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
    cout<<"Enter your name:";
    cin>>name;

    cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
    
    cout<<"                           ROUNDS                          "<<endl;

    cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
    cout<<endl<<name<<", How many rounds do you want to play:";
    cin>>totalround;

    cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
    
    cout<<"                           GAME                          "<<endl;

    cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
    gamestart(totalround,name);

    cout<<"\nGame is drawn.\n";
    return 0;
}