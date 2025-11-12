#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
#include <string>

using namespace std;

class italianchef : public chef {
public:
    italianchef(string Iname);
    ~italianchef();
    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
