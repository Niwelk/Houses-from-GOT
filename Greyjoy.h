#ifndef GREYJOY_H
#define GREYJOY_H

#include "House.h"

class Greyjoy : public House {
public:
    Greyjoy(string name, int power);
    void printWords() const override;
};

#endif