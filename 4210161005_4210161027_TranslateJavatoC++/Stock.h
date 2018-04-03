#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED
#include <iostream>
using namespace std;
class Stock{
private:
    string name;
    int quantity;
public:
    Stock(string,int);
    void buy();
    void sell();
};

#endif // STOCK_H_INCLUDED
