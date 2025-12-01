#ifndef CAT_H
#define CAT_H

#include "animal.h"

class cat : public animal
{
private:
    string name;

public:
    cat();
    void sound() override;
    string getName() const;
    void setName(const string &newName);
};

#endif // CAT_H
