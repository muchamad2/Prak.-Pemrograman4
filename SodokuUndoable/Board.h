#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include <iostream>
using namespace std;
#define N 9
#define UNASSIGNED 0

class Board
{
public:
    Board();
    void FillBoard(int x,int y,char num);
    bool checkBoard(int x,int y,char num);
    void removeCell(int x,int y);
    void restart(Board*);
    void showOpenNumber();
private:
    bool UnassignedLocation(int x,int y,char num);
    bool UsedInRow(int X,char num);
    bool UsedInCol(int Y,char num);
    bool UsedInBox(int boxStartX,int boxStartY,char num);
    char grid[N][N];
};


#endif // BOARD_H_INCLUDED
