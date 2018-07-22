#ifndef PLAYERFACTORY_H
#define PLAYERFACTORY_H

#include "Player.h"
#include "Board.h"
#include "FirstPlayer.h"
#include "SecondPlayer.h"
class PlayerFactory
{
    public:
        static Player *createPlayer(char,Board*);
};
typedef PlayerFactory Factory;
#endif // PLAYERFACTORY_H
