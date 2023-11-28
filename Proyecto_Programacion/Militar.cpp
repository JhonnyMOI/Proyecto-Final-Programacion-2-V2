#include "Militar.h"
#include <iostream>

using namespace std;

/*vector<string> Militar::gradosValidos = {
    "Soldado", "Marinero", "Cabo", "Sargento", "Suboficial",
    "Teniente", "Capitan", "Mayor", "Teniente Coronel", "Coronel",
    "General de Brigada", "General de Divisi?n", "General de Ejercito", "Mariscal"
};
Militar::Militar(string nombre, string apellido, int edad, string lugarVivienda, bool apto) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->lugarVivienda = lugarVivienda;
    this->apto = apto;
}

Militar::Militar() {
    nombre = "";
    apellido = "";
    edad = 0;
    lugarVivienda = "";
    apto = false;
    grado = "Soldado";

    rango = "";

    tipoSoldado = "";
    batallon = "";
    observacionesSalud = "";

    tipoPreMilitar = "";
    observacionesSaludPreMilitar = "";
}

Militar::Militar(string nombre, string apellido, int edad, string lugarVivienda, bool apto, string grado)
    : nombre(nombre), apellido(apellido), edad(edad), lugarVivienda(lugarVivienda), apto(apto) {
    if (esGradoValido(grado)) {
        this->grado = grado;
    }
    else {
        cout << "Grado no valido. Se establecera como Soldado por defecto." << endl;
        this->grado = "Soldado";
    }

    rango = "";

    tipoSoldado = "";
    batallon = "";
    observacionesSalud = "";

    tipoPreMilitar = "";
    observacionesSaludPreMilitar = "";
}

/*void Militar::mostrarGrado() {
    cout << "Nombre: " << nombre << " " << apellido << endl;
    cout << "Edad: " << edad << " a?os" << endl;
    cout << "Lugar de Vivienda: " << lugarVivienda << endl;
    cout << "Apto? " << (apto ? "S?" : "No") << endl;
    cout << "Grado: " << grado << endl;
    cout << "Rango: " << rango << endl;
    cout << "Tipo de Soldado: " << tipoSoldado << endl;
    cout << "Batallon: " << batallon << endl;
    cout << "Observaciones de Salud: " << observacionesSalud << endl;
    cout << "Tipo de Pre Militar: " << tipoPreMilitar << endl;
    cout << "Observaciones de Salud (Pre Militar): " << observacionesSaludPreMilitar << endl;
}


void Militar::setRango(string nuevoRango) {
    rango = nuevoRango;
}

string Militar::getRango() {
    return rango;
}

void Militar::setTipoSoldado(string nuevoTipo) {
    tipoSoldado = nuevoTipo;
}

string Militar::getTipoSoldado() {
    return tipoSoldado;
}

void Militar::setBatallon(string nuevoBatallon) {
    batallon = nuevoBatallon;
}

string Militar::getBatallon() {
    return batallon;
}

void Militar::setObservacionesSalud(string nuevasObservaciones) {
    observacionesSalud = nuevasObservaciones;
}

string Militar::getObservacionesSalud() {
    return observacionesSalud;
}

void Militar::setTipoPreMilitar(string nuevoTipoPreMilitar) {
    tipoPreMilitar = nuevoTipoPreMilitar;
}

string Militar::getTipoPreMilitar() {
    return tipoPreMilitar;
}

void Militar::setObservacionesSaludPreMilitar(string nuevasObservacionesPreMilitar) {
    observacionesSaludPreMilitar = nuevasObservacionesPreMilitar;
}

string Militar::getObservacionesSaludPreMilitar() {
    return observacionesSaludPreMilitar;
}

void Militar::setNombre(string nuevoNombre) {
    nombre = nuevoNombre;
}

string Militar::getNombre() {
    return nombre;
}

void Militar::setApellido(string nuevoApellido) {
    apellido = nuevoApellido;
}

string Militar::getApellido() {
    return apellido;
}

void Militar::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

int Militar::getEdad() {
    return edad;
}

void Militar::setLugarVivienda(string nuevoLugarVivienda) {
    lugarVivienda = nuevoLugarVivienda;
}

string Militar::getLugarVivienda() {
    return lugarVivienda;
}

void Militar::setApto(bool nuevoApto) {
    apto = nuevoApto;
}

//bool Militar::isApto() {
//    return apto;
//}

void Militar::setGrado(string nuevoGrado) {
    if (esGradoValido(nuevoGrado)) {
        grado = nuevoGrado;
    }
    else {
        cout << "Grado no valido. No se realizara ningan cambio." << endl;
    }
}

string Militar::getGrado() {
    return grado;
}



bool Militar::esGradoValido(string grado) {
    for (const string& gradoValido : gradosValidos) {
        if (grado == gradoValido) {
            return true;
        }
    }
    return false;
}

bool Militar::esAptoSoldado() {
    return (edad >= 18 && tipoSoldado == "Soldado" && apto);
}

bool Militar::esAptoPreMilitar() {
    return (edad >= 18 && tipoPreMilitar == "Soldado" && apto);
}
*/