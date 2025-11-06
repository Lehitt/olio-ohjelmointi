#include <iostream>
#include <memory>
#include <vector>
#include"Car.h"
using namespace std;

int main()
{    //Car Car1("Subaru","Impreza",2007);
    //Car1.printData();


    vector<Car>Carlist;{

    Carlist.emplace_back("Volvo","XC70",2023);
    Carlist.emplace_back("Mitsubishi","Galant",2004);
    Carlist.emplace_back("Ford","Focus",2017);

    Carlist[1].printData();

    for (int x=0; x<=2; x++){
        Carlist[x].printData();
    }
    return 0;
    }
}
