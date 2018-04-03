#include "Stock.h"

Stock::Stock(string name,int quantity){
    this->name = name;
    this->quantity = quantity;
}
void Stock::buy(){
    cout<<"Stock [ Name: "<<name<<", Quantity : "<<quantity<<" ] bought"<<endl;
}
void Stock::sell(){
    cout<<"Stock [ Name: "<<name<<", Quantity : "<<quantity<<" ] sold"<<endl;
}
