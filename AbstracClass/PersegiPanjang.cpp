#include "PersegiPanjang.h"
PersegiPanjang::PersegiPanjang(){
    p=4;
    l=2;
}
PersegiPanjang::PersegiPanjang(int p,int l){
    this->p = p;
    this->l =l;
}
float PersegiPanjang::Luas()
{
    float luas = p*l;
    return luas;
}
float PersegiPanjang::Keliling()
{
    float kel = 2*p+2*l;
    return kel;
}
