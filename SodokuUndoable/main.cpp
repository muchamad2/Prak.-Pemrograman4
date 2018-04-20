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
    bool status = true;
    Board sudoku;
    FillCommad *cmd;
    DoCommad save;
    kembali:
    do
    {

        system("CLS");
        cout<<"This is a Undoable Sudoku Game\n X = row , Y = coloum\nfirst X = 0, first Y = 0\n";
        sudoku.showOpenNumber();
        if(!status)
            cout<<"You have input wrong answer and won't be execute\n";
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
            if(sudoku.checkBoard(x,y,number)){
                save.add(cmd);
                save.execute();
                status = true;
            }
            else
                status = false;
        }
        else if(answer == 2)
        {
            status = true;
            save.unExecute();
        }
        else if(answer == 3)
        {
            sudoku.restart(&sudoku);
            status = true;
            save.resetExecute();
        }
    }
    while(answer != 4 || !sudoku.finishCheck());
    cout<<"\n Game has been finished \n 1. Quit \n 2. Restart";
    cin>>answer;
    if(answer == 1)
        goto kembali;
    return 0;
}
