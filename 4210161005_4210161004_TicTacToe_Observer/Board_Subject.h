#ifndef BOARD_SUBJECT_H_INCLUDED
#define BOARD_SUBJECT_H_INCLUDED

#include <vector>
#include "Player_Observer.h"
using namespace std;

class Board{
    vector<Player*> views;
    char square[10]={'0','1','2','3','4','5','6','7','8','9'};
public:
    void attach(Player*);
    void fillBoard(int,int);
    int checkWin();
    void showGame();
    void notify();
};

#endif // BOARD_SUBJECT_H_INCLUDED
