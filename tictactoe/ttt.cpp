#include <iostream>

using namespace std;

int main(){

    const char playerX= 'X';
    const char playerO= 'O';
    char currentplayer = playerX;
    char winner = ' ';


    int c=-1;
    int r=-1;

    char board[3][3]{
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };

    cout<<"Welcome to TicTacToe Game"<<endl;

    for (int i = 0; i < 9; i++)
    {
     

        cout << "   |   |   " << endl;
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
        cout << "   |   |   " << endl; 

        
        if (winner!=' ')
        {
            break;
        }

        cout<<"now the move is of: "<<currentplayer<<endl;

        while (true)
        {
        cout<<"put value of r c from 0-2 for row and column"<<endl;
        cin>>r>>c;
        
         if (r<0||r>2||c<0||c>2)
        {
            cout<<"chose between 0-2"<<endl;
        }
        else if (board[r][c]!=' ')
        {
            cout<<"tile is full try again"<<endl;
        }
        else
        {
            break;
        }}


         board[r][c]=currentplayer;
        currentplayer= (currentplayer==playerX) ? playerO : playerX; 


        cin.clear();
        cin.ignore(10000,'\n');


        for (int r = 0; r < 3; r++)
        {
            if (board[r][0]==board[r][1]&&board[r][1]==board[r][2]&&board[r][0]!=' ')
            {
                winner=board[r][0];
                 break;
            }
            
        }

        for (int c = 0; c < 3; c++)
        {
            if (board[0][c]==board[1][c]&&board[1][c]==board[2][c]&&board[0][c]!=' ')
            {
                winner=board[0][c];
                 break;
            }
            
        }
        
        if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ')
        {
            winner=board[0][0];
            
        }
        else if (board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
        {
            winner=board[0][2];
            
        }
    
    
    }


     if (winner!=' ')
        {
            cout<<"the winner is: "<<winner<<endl;
        }
        
        else
        {
            cout<<"the game is tie!!"<<endl;
        }
        

        





    
}