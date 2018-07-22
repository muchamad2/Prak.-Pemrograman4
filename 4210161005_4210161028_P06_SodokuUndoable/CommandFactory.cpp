#include "CommandFactory.h"

Command* CommandFactory::createCommand(Board* bord,int x,int y,char number){
    return new FillCommad(bord,x,y,number);
}
