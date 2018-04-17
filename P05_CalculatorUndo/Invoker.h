#ifndef INVOKER_H_INCLUDED
#define INVOKER_H_INCLUDED
#include "Command.h"
#include <iostream>
#include <vector>
using namespace std;

class Invoker{
private:
    int current;
    vector<Command*> commands;
public:
    Invoker();
    void Compute(Command*);
    void Undo();
};


#endif // INVOKER_H_INCLUDED
