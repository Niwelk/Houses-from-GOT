#include "Targaryen.h"
#include <iostream>
using namespace std;

Targaryen::Targaryen(string name, int power) : House(name, power) {}

void Targaryen::printWords() const {
    cout << "Fire and Blood" << endl;
}