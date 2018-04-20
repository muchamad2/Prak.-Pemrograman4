#ifndef OPERATOR_H_INCLUDED
#define OPERATOR_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class Operator{
public:
    Operator();
    void Action(char,double);
    double getCurrent();
private:
    double current;
};


#endif // OPERATOR_H_INCLUDED
