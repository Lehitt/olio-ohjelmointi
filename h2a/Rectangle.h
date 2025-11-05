#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:

    Rectangle(){


    }

   double getArea(){

        return width*height;
    }

   double getCircum(){
       return   2*(width+height);

   }

    double getWidth() const;
    void setWidth(double newWidth);
    double getHeight() const;
    void setHeight(double newHeight);
~Rectangle();
};

#endif // RECTANGLE_H

