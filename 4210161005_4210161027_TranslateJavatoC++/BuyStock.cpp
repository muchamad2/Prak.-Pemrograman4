#include "BuyStock.h"

BuyStock::BuyStock(Stock *reStock){
    this->reStock = reStock;
}
void BuyStock::execute(){
    reStock->buy();
}
