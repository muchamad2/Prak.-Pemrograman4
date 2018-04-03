#ifndef BUYSTOCK_H_INCLUDED
#define BUYSTOCK_H_INCLUDED
#include "Order.h"

class BuyStock : public Order{
private:
    Stock *reStock;
    void(Stock::*method)();
public:
    BuyStock(Stock*);
    void execute();
};

#endif // BUYSTOCK_H_INCLUDED
