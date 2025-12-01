#include "cat.h"

string cat::getName() const
{
    return name;
}

void cat::setName(const string &newName)
{
    name = newName;
}

cat::cat() {}

void cat::sound()
{
    cout<<"miauu"<<endl;
}
