#ifndef PERSEGIPANJANG_H_INCLUDED
#define PERSEGIPANJANG_H_INCLUDED
#include "BangunDatar.h"

class PersegiPanjang:public BangunDatar
{
public:
    PersegiPanjang();
    PersegiPanjang(int,int);
    float Luas();
    float Keliling();
private:
    int p;
    int l;
};



#endif // PERSEGIPANJANG_H_INCLUDED
