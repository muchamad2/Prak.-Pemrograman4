#ifndef SELLSTOCK_H_INCLUDED
#define SELLSTOCK_H_INCLUDED
#include "Order.h"
class SellStock:public Order{
private:
    Stock *reStock;
public:
    SellStock(Stock*);
    void execute();
};

#endif // SELLSTOCK_H_INCLUDED
