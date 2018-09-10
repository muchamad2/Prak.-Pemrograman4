#include "Broker.h"

void Broker::takeOrder(Order *order){
    orderList.push_back(order);
}
void Broker::placeOrders(){
    for(int i=0;i<orderList.size();i++){
            orderList[i]->execute();
    }
}
