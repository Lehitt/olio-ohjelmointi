#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
using namespace std;

class Car
{
private:
    int yearModel;
    string brand;
    string model;

public:

    Car(string a, string b, int c);

    void printData();
};

#endif // CAR_H
