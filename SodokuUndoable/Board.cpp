#include "Board.h"

Board::Board()
{
    char newgrid[N][N] =
    {
        {'x','x','6','x','5','4','9','x','x'},
        {'1','x','x','x','6','x','x','4','2'},
        {'7','x','x','x','8','9','x','x','x'},
        {'x','7','x','x','x','5','x','8','1'},
        {'x','5','x','3','4','x','6','x','x'},
        {'4','x','2','x','x','x','x','x','x'},
        {'x','3','4','x','x','x','1','x','x'},
        {'9','x','x','8','x','x','x','5','x'},
        {'x','x','x','4','x','x','3','x','7'}
    };
    for(int x=0; x<N; x++)
    {
        for(int y=0; y<N; y++)
        {
            grid[x][y] = newgrid[x][y];
        }
    }
}
void Board::FillBoard(int x,int y,char num)
{
    if(checkBoard(x,y,num)){
        grid[x][y] = num;
    }
}
bool Board::checkBoard(int x,int y,char num)
{
    return !UsedInCol(y,num)&&!UsedInBox(x-x%3,y-y%3,num)&&!UsedInRow(x,num)&&UnassignedLocation(x,y,num);
}
void Board::removeCell(int x,int y)
{
    grid[x][y] = 'x';
}
void Board::restart(Board*before)
{
    Board newBoard;
    before = &newBoard;
}
void Board::showOpenNumber()
{
    for(int i = 0; i<N; i++)
    {
        if(i==3 || i==6 || i==9)
            cout<<"-----------------------\n";
        for(int j=0; j<N; j++)
        {
            cout<<grid[i][j]<<" ";
            if(j==2 || j==5 || j==8)
                cout<<"| ";
        }
        cout<<endl;
    }
}
bool Board::UsedInBox(int boxStartX,int boxStartY,char num)
{
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<0; y++)
        {
            if(grid[x+boxStartX][y+boxStartY] == num)
                return true;
        }
    }
    return false;
}
bool Board::UsedInCol(int y,char num)
{
    for(int x = 0; x < N; x++)
    {
        if(grid[x][y] == num)
            return true;
    }
    return false;
}
bool Board::UsedInRow(int x,char num)
{
    for(int y=0; y < N; y++)
    {
        if(grid[x][y] == num)
            return true;
    }
    return false;
}
bool Board::UnassignedLocation(int x,int y,char num)
{
    if(grid[x][y] != num)
        return true;
    return false;
}
