//Crosses are zeros.

#include <iostream>

using namespace std;

const int SIZE = 3;
const char Player_1 = 'X';
const char Player_2 = 'O';

void printBoard(char board[SIZE][SIZE]);
int Check_Player_1(char board[SIZE][SIZE], int& check);
int Check_Player_2(char board[SIZE][SIZE], int &check);

int main()
{
    char board[SIZE][SIZE];
    for (int i = 0; i < SIZE; ++i) 
    {
        for (int j = 0; j < SIZE; ++j) 
        {
            board[i][j] << ' ';
        }
    }
    int check = 1;
    char Player = 'X';
    unsigned int row, col;
    while (check == 1)
    {
        printBoard(board);
        Check_Player_1(board, check);
        Check_Player_2(board, check); 
        if (check == 0)
        {
            return 0;
        }

        cout << "Player " << Player << " Enter a row ";
        cin >> row;
        cout << "Player " << Player << " Enter a column ";
        cin >> col;

        if (row <= 3 && col <= 3)
        {
            board[row - 1][col - 1] = Player;
            if (Player == 'X')
            {
                Player = 'O';
            }
            else
            {
                Player = 'X';
            }
        }
    }
}

int Check_Player_2(char board[SIZE][SIZE], int &check)//check for Player2
{
    //check verikal
    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }
    if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }
    if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }

    //check horizontal
    if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }
    if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }
    if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }

    //check diagonal
    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }
    if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
    {
        cout << endl << "Player 2 win!" << endl;
        return check = 0;
    }
}

int Check_Player_1(char board[SIZE][SIZE], int& check)//check for Player1
{
    //check vetikal
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
    {
        cout << endl << "Player 1 win!" << endl;
        return check = 0;
    }
    if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
    {
        cout << endl << "Player 1 win!" << endl;
        return check = 0;
    }
    if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
    {
        cout << endl << "Player 1 win!" << endl;
        return check = 0;
    }

    //check horizontal
    if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
    {
        cout << endl << "Player 1 win!" << endl;
        return check = 0;
    }
    if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
    {
        cout << endl << "Player 1 win!" << endl;
        return check = 0;
    }
    if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
    {
        cout << endl << "Player 1 win!" << endl;
        return check = 0;
    }

    //check diagonal
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        cout << endl << "Player 1 win!" << endl;
        return check = 0;
        if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
        {
            cout << endl << "Player 1 win!" << endl;
            return check = 0;
        }
    }
}

void printBoard(char board[SIZE][SIZE])//Show Board
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}