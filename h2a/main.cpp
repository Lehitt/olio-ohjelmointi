#include <iostream>
#include <memory>
#include"Car.h"
#include"Rectangle.h"
#include"Student.h"
using namespace std;


int main()
{
    Car Car1("Subaru","Impreza",2007);
    Car1.printData();


    Rectangle *objectRectangle2;
    objectRectangle2=new Rectangle;
    objectRectangle2->setWidth(2);
    objectRectangle2->setHeight(2);
    cout<<"pinta-ala:"<<objectRectangle2->getArea()<<endl;
    cout<<"Ympatysmitta:"<<objectRectangle2->getCircum()<<endl;
    delete objectRectangle2;


    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Korhonen");
    objectStudent->setStudentNumber(23);
    objectStudent->setAverage(8.4);

    cout<<"Opiskelijan nimi:"<<objectStudent->getName()<<endl;
    cout<<"Opiskelijan numero:"<<objectStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<objectStudent->getAverage()<<endl;





}
