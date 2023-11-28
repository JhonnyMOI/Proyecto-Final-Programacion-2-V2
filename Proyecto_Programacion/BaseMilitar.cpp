#include "BaseMilitar.h"
#include <iostream>

BaseMilitar::BaseMilitar() {}

BaseMilitar::~BaseMilitar()
{
    /*for (auto& persona : personal)
    {
        delete persona;
    }*/
    for (Persona* persona : personal)
    {
        delete persona;
    }
}

void BaseMilitar::agregarPersona(Persona* persona)
{
    personal.push_back(persona);
}

void BaseMilitar::mostrarPersonal() const
{
    for (const auto& persona : personal)
    {
        persona->showInfo();
        std::cout << "-------------------------" << std::endl;
    }
}

int BaseMilitar::contarEfectivosDisponibles() const
{
    int contador = 0;
    for (const auto& persona : personal)
    {
        // Verificar si es apto
        if (persona->esApto())
        {
            contador++;
        }
    }
    return contador;
}
