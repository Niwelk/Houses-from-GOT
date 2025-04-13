#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
protected:
    string name;
    int power;
public:
    House(string name, int power);
    virtual ~House() {}

    string getName() const;
    int getPower() const;

    virtual void printWords() const = 0;

    bool operator==(const House& other) const;
    bool operator!=(const House& other) const;
    bool operator>(const House& other) const;

    friend ostream& operator<<(ostream& out, const House& house);
};
#endif