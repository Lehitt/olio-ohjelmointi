#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class animal
{
public:
    virtual ~animal(){
    cout<<"olio tuhottu"<<endl;
    }
    virtual void callout(){
        cout<<"Elain aantelee"<<endl;
    }
    animal();
};

#endif // ANIMAL_H
