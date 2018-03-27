#include "Persegi.h"
Persegi::Persegi(){
    s = 6;
}
Persegi::Persegi(int s)
{
    this->s= s;
}
float Persegi::Luas()
{
    float luas = s*s;
    return luas;
}
float Persegi::Keliling()
{
    float keliling = 4*s;
    return keliling;
}
