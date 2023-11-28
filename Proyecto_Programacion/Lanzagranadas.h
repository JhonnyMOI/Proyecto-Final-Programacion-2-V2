#pragma once
#include <iostream>
#include <string>
#include "Armamento.h"
using namespace std;
class Lanzagranadas : public Armamento {
private:
    string tipo;
    string calibre;
public:
    Lanzagranadas(string nombre, string tipo, string calibre, string origen, int numeroSerie);
    ~Lanzagranadas();
    void showInfo() override;
};
