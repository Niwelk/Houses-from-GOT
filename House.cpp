#include "House.h"

House::House(string name, int power) : name(name), power(power) {}

string House::getName() const {
    return name;
}

int House::getPower() const {
    return power;
}

bool House::operator==(const House& other) const {
    return name == other.name;
}

bool House::operator!=(const House& other) const {
    return !(*this == other);
}

bool House::operator>(const House& other) const {
    return power > other.power;
}

ostream& operator<<(ostream& out, const House& house) {
    out << "House: " << house.name << ", Power: " << house.power;
    return out;
}