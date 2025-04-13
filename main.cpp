#include <iostream>
#include <vector>
#include "Stark.h"
#include "Targaryen.h"
#include "Lannister.h"
#include "Greyjoy.h"
#include "Baratheon.h"

using namespace std;

int main() {
    vector<House*> houses;
    houses.push_back(new Stark("Stark", 85));
    houses.push_back(new Targaryen("Targaryen", 95));
    houses.push_back(new Lannister("Lannister", 90));
    houses.push_back(new Greyjoy("Greyjoy", 70));
    houses.push_back(new Baratheon("Baratheon", 80));

    for (House* house : houses) {
        cout << *house << endl;
        house->printWords();
        cout << endl;
    }

    if (*houses[1] > *houses[0]) {
        cout << houses[1]->getName() << " stronger than " << houses[0]->getName() << endl;
    }

    for (House* house : houses) {
        delete house;
    }

    return 0;
}