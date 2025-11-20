#include "car.h"

car::car() {}



Engine car::getObjEngine() const { return objEngine; }

void car::setObjEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

car::car(string b, string m) {
    brand = b;
    model = m;
}

string car::getModel() const
{
    return model;
}

void car::setModel(const string &newModel)
{
    model = newModel;
}

string car::getBrand() const
{
    return brand;
}

void car::setBrand(const string &newBrand)
{
    brand = newBrand;
}
