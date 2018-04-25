#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include <iostream>
#include <vector>
#include "Player.h"
#include <cstdlib>
using namespace std;
class Board
{
    vector<class Player*> awaits;
    int choose;
    char square[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
public:
    void choosen(int,int);
    void SetInput(char);
    int checkWin();
    void showBoard();
    void attach(Player*);
    void notify(int);
};


#endif // BOARD_H_INCLUDED
