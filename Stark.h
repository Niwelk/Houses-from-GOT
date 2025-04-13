#ifndef STARK_H
#define STARK_H

#include "House.h"

class Stark : public House {
public:
    Stark(string name, int power);
    void printWords() const override;
};

#endif