#include "Stark.h"
#include <iostream>
using namespace std;

Stark::Stark(string name, int power) : House(name, power) {}

void Stark::printWords() const {
    cout << "Winter is Coming" << endl;
}