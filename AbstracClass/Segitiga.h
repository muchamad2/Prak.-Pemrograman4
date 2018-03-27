#ifndef SEGITIGA_H_INCLUDED
#define SEGITIGA_H_INCLUDED
#include "BangunDatar.h"

class Segitiga:public BangunDatar
{
public:
    Segitiga();
    Segitiga(int,int,int);
    float Luas();
    float Keliling();
private:
    int a;
    int t;
    int s;
};


#endif // SEGITIGA_H_INCLUDED
