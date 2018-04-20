#ifndef COMMAND_H_INCLUDED
#define COMMAND_H_INCLUDED
#include <iostream>
#include "Board.h"
using namespace std;
class Command
{
public:
    virtual void execute()=0;
    virtual void unExecute()=0;
};

#endif // COMMAND_H_INCLUDED
