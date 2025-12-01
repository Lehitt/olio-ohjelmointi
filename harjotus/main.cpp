#include "animal.h"
#include "cat.h"

#include <iostream>

using namespace std;

int main()
{
    //animal objanimal;
    cat objectcat;
    objectcat.setName("karvinen");
    cout<<objectcat.getName()<<" sanoo ";
    objectcat.sound();
    return 0;
}
