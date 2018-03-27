#ifndef LINGKARAN_H_INCLUDED
#define LINGKARAN_H_INCLUDED
#include "BangunDatar.h"

class Lingkaran:public BangunDatar
{
private:
    int r;
public:
    Lingkaran();
    Lingkaran(int);
    float Luas();
    float Keliling();
};


#endif // LINGKARAN_H_INCLUDED
