#ifndef WHEEL_H
#define WHEEL_H
#include <string>
#include <iostream>
using namespace std;

class wheel
{
public:
    wheel();
    wheel(int, string);


    int getSize() const;
    void setSize(int newSize);

    string getType() const;
    void setType(const string &newType);

private:
    int size;
    string type;
};

#endif // WHEEL_H
