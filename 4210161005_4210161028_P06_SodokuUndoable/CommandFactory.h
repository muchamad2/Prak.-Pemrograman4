#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H

#include "Board.h"
#include "FillCommand.h"
class CommandFactory
{
    public:
        static Command* createCommand(Board*,int,int,char);
};
typedef CommandFactory Factory;
#endif // COMMANDFACTORY_H
