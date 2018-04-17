#include "Command.h"

Command::Command(Operator *opr,char oper,double operand){
    this->myOperator = opr;
    this->oper = oper;
    this->operand = operand;
}
void Command::execute(){
    this->myOperator->Action(this->oper,this->operand);
}
void Command::unExecute(){
    this->myOperator->Action(this->Undo(this->oper),this->operand);
}
char Command::Undo(char oper){
    switch(oper){
        case '+':return '-';
        case '-':return '+';
        case '/':return '*';
        case '*':return '/';
    }
}
