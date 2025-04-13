#ifndef BARATHEON_H
#define BARATHEON_H

#include "House.h"

class Baratheon : public House {
public:
    Baratheon(string name, int power);
    void printWords() const override;
};

#endif
