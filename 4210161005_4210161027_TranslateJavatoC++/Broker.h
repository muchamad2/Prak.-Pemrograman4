#ifndef BROKER_H_INCLUDED
#define BROKER_H_INCLUDED
#include <iostream>
#include <vector>
#include "Order.h"
using namespace std;

class Broker{
private:
    vector<Order*> orderList;

public:
    void takeOrder(Order* order);
    void placeOrders();
};


#endif // BROKER_H_INCLUDED
