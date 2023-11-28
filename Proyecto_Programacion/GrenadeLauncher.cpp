#include "GrenadeLauncher.h"
#include <iostream>

GrenadeLauncher::GrenadeLauncher(std::string name, std::string type, std::string caliber, std::string origin, int serialNumber)
    : Armament(name, type, "", origin, serialNumber) {}

GrenadeLauncher::~GrenadeLauncher() {

}

void GrenadeLauncher::showInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Caliber: " << caliber << std::endl;
    std::cout << "Origin: " << origin << std::endl;
    std::cout << "Serial Number: " << serialNumber << std::endl;
}