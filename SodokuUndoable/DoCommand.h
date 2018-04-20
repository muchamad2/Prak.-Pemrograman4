#ifndef DOCOMMAND_H_INCLUDED
#define DOCOMMAND_H_INCLUDED
#include <stack>
#include "Command.h"
#include <queue>

class DoCommad:public Command
{
    queue <Command*> lister;
    stack <Command*> done;
public:
    void add(Command *cmd);
    void execute();
    void unExecute();
    void resetExecute();
};


#endif // DOCOMMAND_H_INCLUDED
