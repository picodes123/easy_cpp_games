#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    int randomnum = (rand()%10)+1;
    int guess;
 
    cout<<"THE NO. GUESSING GAME!!" <<endl;
    cout<<"GUESS A NO. BETWEEN 1-10:" <<endl;

    for (int i = 0; i < 3; i++)
    {
       cin >> guess;
      
       if (randomnum==guess)
       {
        cout<<"you win congrats!!"<<endl;
        return 0;
       }

       else
    {
        cout<<"try again: ";
    }
    }

    cout<<"you lose the correct guess was: "<<randomnum;

    return 0;
}