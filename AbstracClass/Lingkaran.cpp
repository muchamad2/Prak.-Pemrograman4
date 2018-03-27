#include "Lingkaran.h"
Lingkaran::Lingkaran(){
    r = 12;
}
Lingkaran::Lingkaran(int r){
    this->r = r;
}
float Lingkaran::Luas()
{
    float luas = 3.14*r*r;
    return luas;
}
float Lingkaran::Keliling()
{
    float keliling = 3.14*2*r;
    return keliling;
}
