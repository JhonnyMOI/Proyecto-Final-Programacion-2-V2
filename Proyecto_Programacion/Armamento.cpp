#include "Armamento.h"

Armamento::Armamento(string nombre, string tipo, string calibre, string origen, int numeroSerie)
    : nombre(nombre), tipo(tipo), calibre(calibre), origen(origen), numeroSerie(numeroSerie) {}

Armamento::~Armamento() {}

void Armamento::showInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Calibre: " << calibre << endl;
    cout << "Origen: " << origen << endl;
    cout << "Número de Serie: " << numeroSerie << endl;
}

string Armamento::getTipo() const {
    return tipo;
}
