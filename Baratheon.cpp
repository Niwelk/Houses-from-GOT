#include "Baratheon.h"
#include <iostream>
using namespace std;

Baratheon::Baratheon(string name, int power) : House(name, power) {}

void Baratheon::printWords() const {
    cout << "Ours is the Fury" << endl;
}