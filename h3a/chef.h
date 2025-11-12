#ifndef CHEF_H
#define CHEF_H
#include <string>
#include <iostream>
using namespace std;

class chef{
protected:
    string name;
public:
    chef(string Cname);
    ~chef();
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
