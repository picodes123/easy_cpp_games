#include <iostream>

using namespace std;

int main(){

    const char playerX= 'X';        //player 1
    const char playerO= 'O';        //player 2
    char currentplayer = playerX;   //initial move player X
    char winner = ' ';              //initialize winner with empty space


    int c=-1;
    int r=-1;

    char board[3][3]{   //initialize array for board
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };

    cout<<"Welcome to TicTacToe Game"<<endl;

    for (int i = 0; i < 9; i++)
    {
     

        cout << "   |   |   " << endl;
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;   //grid of board
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
        cout << "   |   |   " << endl; 

        
        if (winner!=' ')  //break if winner found
        {
            break;
        }

        cout<<"now the move is of: "<<currentplayer<<endl; //tells whos move

        while (true) //used to take valid input
        {
        cout<<"put value of r c from 0-2 for row and column"<<endl;
        cin>>r>>c;

        if (cin.fail()) //check input failure
        {
             cin.clear();
             cin.ignore(10000,'\n');
             cout<<"Choose valid input"<<endl;
        }
        
        else if (r<0||r>2||c<0||c>2) //failure when btw 0-2
        {
            cout<<"chose between 0-2"<<endl;
        }

        else if (board[r][c]!=' ') //check when tile already have value
        {
            cout<<"tile is full try again"<<endl;
        }

        else
        {
            break;
        }}


        board[r][c]=currentplayer; //put XorO on board
        currentplayer= (currentplayer==playerX) ? playerO : playerX; //change player


       


        for (int r = 0; r < 3; r++)  //win condition for rows
        {
            if (board[r][0]==board[r][1]&&board[r][1]==board[r][2]&&board[r][0]!=' ')
            {
                winner=board[r][0];
                 break;
            }
            
        }

        for (int c = 0; c < 3; c++) //win condition for columns 
        {
            if (board[0][c]==board[1][c]&&board[1][c]==board[2][c]&&board[0][c]!=' ')
            {
                winner=board[0][c];
                 break;
            }
            
        }
        
        if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ')  //win condi for left diago
        {
            winner=board[0][0];
            
        }
        else if (board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')  //win condi for right diago
        {
            winner=board[0][2];
            
        }
    
    
    }


     if (winner!=' ') //tells the winner or tells if its a tie 
        {
            cout<<"the winner is: "<<winner<<endl;
        }
        
        else
        {
            cout<<"the game is tie!!"<<endl;
        }
        
}