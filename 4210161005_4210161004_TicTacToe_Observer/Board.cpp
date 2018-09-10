#include "Board.h"

void Board::choosen(int chose,int turn){
    choose = chose;
    notify(turn);
}
void Board::SetInput(char mark)
{
    if(choose == 1)
        square[0][0] = mark;
    else if(choose == 2)
        square[0][1] = mark;
    else if(choose == 3)
        square[0][2] = mark;
    else if(choose == 4)
        square[1][0] = mark;
    else if(choose == 5)
        square[1][1] = mark;
    else if(choose == 6)
        square[1][2] = mark;
    else if(choose == 7)
        square[2][0] = mark;
    else if(choose == 8)
        square[2][1] = mark;
    else if(choose == 9)
        square[2][2] = mark;
}
int Board::checkWin()
{
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j<1){
                if(square[i][j] == square[i][j+1] && square[i][j+1] == square[i][j+2])
                    return 1;
            }
            if(i < 1 && j<1){
                if(square[i][j] == square[i+1][j+1] && square[i+1][j+1] == square[i+2][j+2])
                    return 1;
                else if(square[i+2][j] == square[i+1][i+1] && square[i+1][j+1] == square[i][j+2])
                    return 1;
            }
            if(i<1){
                if(square[i][j] == square[i+1][j] && square[i+1][j] == square[i+2][j])
                    return 1;
            }
        }
    }
    return -1;
}
void Board::showBoard()
{
    system("CLS");
    cout<<"\n\tTic Tac Toe\n\n";
    cout<<"Player 1 (X) - Player 2 (O)\n";
    cout<<"     |       |       \n";
    cout<<"  "<<square[0][0]<<"  |   "<<square[0][1]<<"   |   "<<square[0][2]<<"\n";
    cout<<"_____|_______|_______\n";
    cout<<"     |       |       \n";
    cout<<"  "<<square[1][0]<<"  |   "<<square[1][1]<<"   |   "<<square[1][2]<<"\n";
    cout<<"_____|_______|_______\n";
    cout<<"     |       |       \n";
    cout<<"  "<<square[2][0]<<"  |   "<<square[2][1]<<"   |   "<<square[2][2]<<"\n";
    cout<<"     |       |       \n";
}
void Board::attach(Player *obs)
{
    awaits.push_back(obs);
}
void Board::notify(int curPlayer)
{
    for(int i=0; i<awaits.size(); i++)
    {
        awaits[i]->update(curPlayer);
    }
}
