#include <iostream>
#include "Stock.h"
#include "Order.h"
#include "BuyStock.h"
#include "SellStock.h"
#include "Broker.h"
using namespace std;

int main()
{
    Stock reStock("ABC",10);
    BuyStock buyStockOrder(&reStock);
    SellStock SellStockOreder(&reStock);

    Broker *broker = new Broker();
    broker->takeOrder(&buyStockOrder);
    broker->takeOrder(&SellStockOreder);

    broker->placeOrders();
    return 0;
}
