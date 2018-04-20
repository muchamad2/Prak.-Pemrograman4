#include "DoCommand.h"

void DoCommad::add(Command *cmd)
{
    lister.push(cmd);
}
void DoCommad::execute()
{
    if(!lister.empty())
    {
        lister.front()->execute();
        done.push(lister.front());
        lister.pop();
    }
}
void DoCommad::unExecute()
{
    if(!done.empty())
    {
        done.top()->unExecute();
        done.pop();
    }
}
void DoCommad::resetExecute(){
    while(!done.empty()){
        done.top()->unExecute();
        done.pop();
    }
}
