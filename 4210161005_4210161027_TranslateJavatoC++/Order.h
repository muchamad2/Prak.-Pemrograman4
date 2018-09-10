#ifndef ORDER_H_INCLUDED
#define ORDER_H_INCLUDED
#include <iostream>
#include "Stock.h"
using namespace std;

class Order{
public:
    virtual void execute()=0;
};

#endif // ORDER_H_INCLUDED
