#include <iostream>
#include"Rectangle.h"
using namespace std;

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

Rectangle::~Rectangle(){
    cout<<"tuhottu"<<endl;
}
