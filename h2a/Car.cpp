#include <iostream>
#include"Car.h"
using namespace std;




inline int Car::getYearModel() const
{
    return yearModel;
}

inline void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}


inline string Car::getBrand() const
{
    return brand;
}

inline void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}


inline string Car::getModel() const
{
    return model;
}

inline void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::printData()
{
    cout<<"Merkki:"<<brand<<" Malli:"<<model<<" Vuosimalli:"<<yearModel<<endl;
}

Car::Car(string a, string b, int c){
    brand=a;
    model=b;
    yearModel=c;
}
