#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "animal.h"

using namespace std;
class dog : public animal
{
public:
    virtual~dog()override {

    }
    virtual void callout() override{
        cout<<"Koira haukkuu"<<endl;
    }
     dog();
};

#endif // DOG_H
