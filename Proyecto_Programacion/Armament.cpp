#include "Armament.h"

Armament::Armament(string name, string type, string caliber, string origin, int serialNumber)
    : name(name), type(type), caliber(caliber), origin(origin), serialNumber(serialNumber) {}

Armament::~Armament() {}

void Armament::showInfo() {
    cout << "Name: " << name << endl;
    cout << "Type: " << type << endl;
    cout << "Caliber: " << caliber << endl;
    cout << "Origin: " << origin << endl;
    cout << "Serial Number: " << serialNumber << endl;
}

string Armament::getType() const {
    return type;
}