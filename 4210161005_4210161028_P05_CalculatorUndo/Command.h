#ifndef COMMAND_H_INCLUDED
#define COMMAND_H_INCLUDED
#include <iostream>
#include "Operator.h"
using namespace std;

class Command{
public:
    //typedef void(Operator::*Action)();
    Command(Operator *opr,char oper,double operand);
    void execute();
    void unExecute();
private:
    Operator *myOperator;
    char oper;
    double operand;
    //Action method;
    char Undo(char);
};


#endif // COMMAND_H_INCLUDED
