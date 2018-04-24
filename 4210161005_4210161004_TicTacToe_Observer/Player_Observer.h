#ifndef PLAYER_OBSERVER_H_INCLUDED
#define PLAYER_OBSERVER_H_INCLUDED

#include <iostream>
#include "Board_Subject.h"
using namespace std;
class Player{
public:
    virtual void update()=0;
};

#endif // PLAYER_OBSERVER_H_INCLUDED
