#ifndef LANNISTER_H
#define LANNISTER_H

#include "House.h"

class Lannister : public House {
public:
    Lannister(string name, int power);
    void printWords() const override;
};

#endif
