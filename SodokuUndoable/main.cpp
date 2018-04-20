#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "FillCommand.h"
#include "DoCommand.h"
using namespace std;

int main()
{
    int x,y,answer;
    char number;
    Board sudoku;
    FillCommad *cmd;
    DoCommad save;
    do
    {

        system("CLS");
        cout<<"This is a Undoable Sudoku Game\n X = row , Y = coloum\nfirst X = 0, first Y = 0\n";
        sudoku.showOpenNumber();
        cout<<"\nWhat you want?\n";
        cout<<"1. Enter Number\n2. Undo\n3. Restart Game\n4. Quit\n";
        cin>>answer;
        if(answer == 1)
        {
            cout<<"\nMasukkan posisi baris dan kolom ";
            cout<<"\nX = ";
            cin>>x;
            cout<<"Y = ";
            cin>>y;
            cout<<"Masukkan nomer yang anda inginkan : ";
            cin>>number;
            cmd = new FillCommad(&sudoku,x,y,number);
            save.add(cmd);
            save.execute();
        }
        else if(answer == 2)
        {
            save.unExecute();
        }
        else if(answer == 3)
        {
            sudoku.restart(&sudoku);
            save.resetExecute();
        }
    }
    while(answer != 4);
    return 0;
}
