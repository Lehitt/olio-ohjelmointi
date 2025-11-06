#include <iostream>
#include"Car.h"
using namespace std;




void Car::printData()
{
    cout<<"Merkki:"<<brand<<" Malli:"<<model<<" Vuosimalli:"<<yearModel<<endl;
}

Car::Car(string a, string b, int c){
    brand=a;
    model=b;
    yearModel=c;
}
