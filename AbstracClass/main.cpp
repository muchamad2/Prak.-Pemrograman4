#include <iostream>
#include <vector>
#include "BangunDatar.h"
#include "Lingkaran.h"
#include "Persegi.h"
#include "PersegiPanjang.h"
#include "Segitiga.h"
using namespace std;

int main()
{
    Lingkaran ling(10);
    cout<<"\nLingkaran\n";
    cout<<"Luas : "<<ling.Luas();
    cout<<"\nKeliling : "<<ling.Keliling();
    Persegi pers(12);
    cout<<"\nPersegi\n";
    cout<<"Luas : "<<pers.Luas();
    cout<<"\nKeliling : "<<pers.Keliling();
    PersegiPanjang panjang;
    cout<<"\nPersegi Panjang\n";
    cout<<"Luas : "<<panjang.Luas();
    cout<<"\nKeliling : "<<panjang.Keliling();
    Segitiga segitiga(2,10,6);
    cout<<"\nSegitiga\n";
    cout<<"Luas : "<<segitiga.Luas();
    cout<<"\nKeliling : "<<segitiga.Keliling();
}
