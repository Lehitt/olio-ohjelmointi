#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;

class animal
{

private:
    string color;
public:
    animal();
    string getColor() const;
    void setColor(const string &newColor);
    void virtual sound()=0;
};

#endif // ANIMAL_H
