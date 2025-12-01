#include "classa1.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{

    int a = 5;
    int b = 6;
    cout << "a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;

    int*pointerA=&a;
    cout << "a:n muistipaikan arvo on: "<<*pointerA<<" ja osoite on: "<<pointerA<<endl;

    int &refA = a;
    cout << "refA:n osoittama muistipaikan arvo on: "<<refA<<" ja osoite on: "<<&refA<<endl;

    //refA = &b;
    // referensin osotetta ei voi muuttaa

    pointerA =&b; // pointterin voi vaihtaa osottamaan toista muistipaikkaa

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;


    return 0;
}
