#pragma once
#include <vector>
#include "Persona.h"

class BaseMilitar
{
private:
    vector<Persona*> personal;

public:
    BaseMilitar();
    ~BaseMilitar();

    void agregarPersona(Persona* persona);
    void mostrarPersonal() const;
    int contarEfectivosDisponibles() const;
};
