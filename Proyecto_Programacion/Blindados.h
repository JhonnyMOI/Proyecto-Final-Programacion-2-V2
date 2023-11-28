
#pragma once
#include "Armamento.h"

class Blindados : public Armamento {
public:
//protected:
    Blindados(string nombre, string origen, string tipo, int numeroSerie);
    ~Blindados();
    void showInfo() override;
};
