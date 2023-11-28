#pragma once
#include "Armament.h"

class ArmoredVehicle : public Armament {
public:
    ArmoredVehicle(string name, string origin, string type, int serialNumber);
    ~ArmoredVehicle();
    void showInfo() override;
};