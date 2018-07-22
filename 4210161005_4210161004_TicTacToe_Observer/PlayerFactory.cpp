#include "PlayerFactory.h"

Player* PlayerFactory::createPlayer(char turn,Board *boardgame){
    if(turn == 'X')
        return new FirstPlayer(turn,boardgame);
    else if(turn == 'O')
        return new SecondPlayer(turn,boardgame);
}
