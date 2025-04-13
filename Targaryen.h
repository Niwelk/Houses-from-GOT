#ifndef TARGARYEN_H
#define TARGARYEN_H

#include "House.h"

class Targaryen : public House {
public:
    Targaryen(string name, int power);
    void printWords() const override;
};

#endif