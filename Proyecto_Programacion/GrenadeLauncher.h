#pragma once
#include <iostream>
#include <string>
#include "Armament.h"
using namespace std;

class GrenadeLauncher : public Armament {
private:
    string type;
    string caliber;

public:
    GrenadeLauncher(string name, string type, string caliber, string origin, int serialNumber);
    ~GrenadeLauncher();
    void showInfo() override;
};