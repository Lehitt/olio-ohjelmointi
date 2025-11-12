#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{


    chef objectChef("Cordon Ramsay");
    objectChef.makeSalad();
    objectChef.makeSoup();


    italianchef objectitalianchef("Anthony Bourdain");
    objectitalianchef.makePasta();
    objectitalianchef.makeSalad();
    objectitalianchef.makeSoup();
    objectitalianchef.getName();

    return 0;
}
