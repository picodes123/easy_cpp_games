#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){

    int User=0;
    

    cout<<"---Rock, Papper, Scissor Game---"<<endl;
    cout<<"Your Options: "<<endl;
    cout<<"1: Rock"<<endl;
    cout<<"2: Papper"<<endl;
    cout<<"3: Scissors"<<endl;
    cin>>User;

    if (User==1)
    {
        cout<<"User chose: Rock"<<endl;
    }
    if (User==2)
    {
        cout<<"User chose: Papper"<<endl;
    }
    if (User==3)
    {
        cout<<"User chose: Scissors"<<endl;
    }
    

    srand(time(0));
    int randrps = (rand()%3)+1;


    switch (randrps)
    {case 1: cout<<"computer chose: rock"<<endl;;
        break;

    case 2: cout<<"computer chose: paper"<<endl;;
        break;

    case 3: cout<<"computer chose: scissors"<<endl;;
        break;}

    if (User==randrps)
    {
        cout<<"its a tie"<<endl;
    }
    else if ((User==1 && randrps==3)||(User==2&&randrps==1)||(User==3&&randrps==2))
    {
        cout<<"You win congrats"<<endl;
    }
    else {
        cout<<"you lose"<<endl;
    }
    
    
    
    


    return 0;
}