#include "FillCommand.h"


FillCommad::FillCommad(Board *board,int x,int y,char num)
{
    this->receiver = board;
    this->x = x;
    this->y = y;
    this->num = num;
}
void FillCommad::execute()
{
    receiver->FillBoard(x,y,num);
}
void FillCommad::unExecute()
{
    receiver->removeCell(x,y);
}
