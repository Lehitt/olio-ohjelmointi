#include "wheel.h"

wheel::wheel() {}

int wheel::getSize() const
{
    return size;
}

void wheel::setSize(int newSize)
{
    size = newSize;
}

string wheel::getType() const
{
    return type;
}

void wheel::setType(const string &newType)
{
    type = newType;
}
