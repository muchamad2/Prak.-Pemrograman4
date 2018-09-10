#ifndef FIRSTPLAYER_H_INCLUDED
#define FIRSTPLAYER_H_INCLUDED
#include "Player.h"
#include "Board.h"

class FirstPlayer: public Player{
char turn;
Board *model;
public:
    FirstPlayer(char,Board*);
    void update(int player);
};


#endif // FIRSTPLAYER_H_INCLUDED
