#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "Board.h"
#include <cstring>
#include <iostream>

class Player
{

public:
    virtual void update(int player) = 0;
};


#endif // PLAYER_H_INCLUDED
