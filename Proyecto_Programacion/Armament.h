#pragma once
#include <iostream>
#include <string>

using namespace std;

class Armament {
protected:
    string name;
    string type;
    string caliber;
    string origin;
    int serialNumber;

public:
    Armament(string name, string type, string caliber, string origin, int serialNumber);
    virtual ~Armament();
    virtual void showInfo();
    string getType() const;
};