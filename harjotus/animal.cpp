#include "animal.h"

string animal::getColor() const
{
    return color;
}

void animal::setColor(const string &newColor)
{
    color = newColor;
}

void animal::sound()
{

}

animal::animal() {}
