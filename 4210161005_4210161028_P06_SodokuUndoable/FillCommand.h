#ifndef FILLCOMMAND_H_INCLUDED
#define FILLCOMMAND_H_INCLUDED
#include "Command.h"

class FillCommad : public Command
{
public:
    FillCommad(Board *board,int x,int y,char num);
    void execute();
    void unExecute();
private:
    int x;
    int y;
    char num;
    Board *receiver;
};


#endif // FILLCOMMAND_H_INCLUDED
