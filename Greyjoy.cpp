#include "Greyjoy.h"
#include <iostream>
using namespace std;

Greyjoy::Greyjoy(string name, int power) : House(name, power) {}

void Greyjoy::printWords() const {
    cout << "We Do Not Sow" << endl;
}