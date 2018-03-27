#ifndef PERSEGI_H_INCLUDED
#define PERSEGI_H_INCLUDED
#include "BangunDatar.h"
class Persegi:public BangunDatar
{
private:
    int s;
public:
    Persegi();
    Persegi(int);
    float Luas();
    float Keliling();
};


#endif // PERSEGI_H_INCLUDED
