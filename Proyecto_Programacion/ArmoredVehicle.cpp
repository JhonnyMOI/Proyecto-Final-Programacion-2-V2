#include "ArmoredVehicle.h"

ArmoredVehicle::ArmoredVehicle(string name, string origin, string type, int serialNumber)
    : Armament(name, type, "", origin, serialNumber) {}

ArmoredVehicle::~ArmoredVehicle() {}

void ArmoredVehicle::showInfo() {
    Armament::showInfo();
    cout << "Name: " << name << endl;
    cout << "Origin: " << origin << endl;
    cout << "Type: " << type << endl;
    cout << "Serial Number: " << serialNumber << endl;
    cout << endl;
}