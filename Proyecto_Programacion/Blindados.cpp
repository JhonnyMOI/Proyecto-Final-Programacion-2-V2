#include "Blindados.h"

Blindados::Blindados(string nombre, string origen, string tipo, int numeroSerie)
    : Armamento(nombre, tipo, "", origen, numeroSerie) {}

Blindados::~Blindados() {}

void Blindados::showInfo() {
    Armamento::showInfo();
    cout << "Nombre: " << nombre << endl;
    cout << "Origen: " << origen << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Número de Serie: " << numeroSerie << endl;
    cout << endl;

}
