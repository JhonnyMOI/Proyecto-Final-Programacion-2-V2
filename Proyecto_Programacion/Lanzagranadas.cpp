#include "Lanzagranadas.h"
#include <iostream>

Lanzagranadas::Lanzagranadas(std::string nombre, std::string tipo, std::string calibre, std::string origen, int numeroSerie)
    : Armamento(nombre, tipo, "", origen, numeroSerie) {}

Lanzagranadas::~Lanzagranadas() {
   
}

void Lanzagranadas::showInfo() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Calibre: " << calibre << std::endl;
    std::cout << "Origen: " << origen << std::endl;
    std::cout << "Número de Serie: " << numeroSerie << std::endl;
}
