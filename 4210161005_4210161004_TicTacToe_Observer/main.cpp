#include <iostream>
#include "Board.h"
//#include "SecondPlayer.h"
//#include "FirstPlayer.h"
#include "PlayerFactory.h"
using namespace std;

int main()
{
    int chosen,turn=1;
    Board boardGame;
    boardGame.attach(Factory::createPlayer('X',&boardGame));
    boardGame.attach(Factory::createPlayer('O',&boardGame));
    boardGame.showBoard();
    do{
        turn = (turn%2)?1:2;
        cout<<"\nPilih number board\n";
        cin>>chosen;
        boardGame.choosen(chosen,turn);
        turn++;
        boardGame.showBoard();
    }while(boardGame.checkWin() == -1);
    turn = (turn%2)?2:1;
    if(turn == 1)
        cout<<"Game Finish\nWinner is Player 1";
    else
        cout<<"Game Finish\nWinner is Player 2";

    return 0;
}
