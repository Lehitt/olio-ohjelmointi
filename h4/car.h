#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include"wheel.h"
#include"engine.h"
using namespace std;

class car
{
public:
    car();
    car(string b, string m);



    Engine getObjEngine() const;
    void setObjEngine();

    void setwheels(){
        objwheel1.setSize(17);
        objwheel1.setType("kesarengas");
        objwheel2.setSize(17);
        objwheel2.setType("kesarengas");
        objwheel3.setSize(17);
        objwheel3.setType("kesarengas");
        objwheel4.setSize(17);
        objwheel4.setType("kesarengas");
    }

    string getModel() const;
    void setModel(const string &newModel);

    string getBrand() const;
    void setBrand(const string &newBrand);

    void printDetails(){
        cout<<"Auto: "<<getBrand()<<" "<<getModel()<<endl;
        cout<<"Moottori: "<<objEngine.getHorsepower()<<","<<objEngine.getDisplacement()<<endl;
        cout<<"Rengas 1: "<<objwheel1.getSize()<<","<<objwheel1.getType()<<endl;
        cout<<"Rengas 2: "<<objwheel2.getSize()<<","<<objwheel2.getType()<<endl;
        cout<<"Rengas 3: "<<objwheel3.getSize()<<","<<objwheel3.getType()<<endl;
        cout<<"Rengas 4: "<<objwheel4.getSize()<<","<<objwheel4.getType()<<endl;
    }

private:
    Engine objEngine;
    wheel objwheel1;
    wheel objwheel2;
    wheel objwheel3;
    wheel objwheel4;
    string model;
    string brand;
};

#endif // CAR_H
