#include "Lannister.h"
#include <iostream>
using namespace std;

Lannister::Lannister(string name, int power) : House(name, power) {}

void Lannister::printWords() const {
    cout << "Hear Me Roar!" << endl;
}