#include "Operator.h"

Operator::Operator(){
    this->current = 0;
}
void Operator::Action(char oper,double operand){
    switch(oper){
    case '+':
        this->current += operand;
        break;
    case '-':
        this->current -= operand;
        break;
    case '/':
        this->current /= operand;
        break;
    case '*':
        this->current *= operand;
        break;
    }
}
double Operator::getCurrent(){
    return this->current;
}
