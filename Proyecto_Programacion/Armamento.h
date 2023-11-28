
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Armamento {
protected:
    string nombre;
    string tipo;
    string calibre;
    string origen;
    int numeroSerie;

public:
    Armamento(string nombre, string tipo, string calibre, string origen, int numeroSerie);
    virtual ~Armamento();
    virtual void showInfo();
    string getTipo() const;
};

