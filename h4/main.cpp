#include <iostream>
#include"wheel.h"
#include"car.h"
#include"engine.h"

using namespace std;

int main()
{
    car car1("Toyota", "Corolla");

    car1.setObjEngine();
    car1.setwheels();
    car1.printDetails();

    return 0;
}
