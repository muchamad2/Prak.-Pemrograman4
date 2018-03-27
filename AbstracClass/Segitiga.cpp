#include "Segitiga.h"
Segitiga::Segitiga(){
    s = 6;
    a=4;
    t=5;
}
Segitiga::Segitiga(int a,int s,int t){
    this->s=s;
    this->a = a;
    this->t = t;
}
float Segitiga::Keliling()
{
    float kel = 3*s;
    return kel;
}
float Segitiga::Luas()
{
    float luas = 0.5 * a*t;
    return luas;
}
