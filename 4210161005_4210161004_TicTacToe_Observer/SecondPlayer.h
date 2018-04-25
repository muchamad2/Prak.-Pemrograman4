#ifndef SECONDPLAYER_H_INCLUDED
#define SECONDPLAYER_H_INCLUDED
#include "Player.h"
#include "Board.h"

class SecondPlayer:public Player{
    Board *model;
    char turn;
public:
    SecondPlayer(char,Board*);
    void update(int player);
};


#endif // SECONDPLAYER_H_INCLUDED
