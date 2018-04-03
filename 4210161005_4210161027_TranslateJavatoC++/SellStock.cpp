#include "SellStock.h"

SellStock::SellStock(Stock *reStock){
    this->reStock = reStock;
}
void SellStock::execute(){
    reStock->sell();
}
