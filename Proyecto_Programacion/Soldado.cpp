#include "Soldado.h"

Soldado::Soldado(string nombre, string apellido, int edad, string lugarVivienda, 
    bool apto, string rango)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->edad = edad;
	this->lugarVivienda = lugarVivienda;
	this->apto = apto;
	this->rango = rango;
}

Soldado::~Soldado()
{
}

void Soldado::showInfo()
{
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Lugar de Vivienda: " << lugarVivienda << endl;
    if (apto == 1)
    {
        cout << "SI es apto" << endl;
    }
    if (apto == 0)
    {
        cout << "NO es apto" << endl;
    }
    cout << "Rango: " << rango << endl;
}

string Soldado::getNombre()
{
    return nombre;
}

void Soldado::setRangoSoldado(string nuevoRango)
{
    this->rango = nuevoRango;
}

string Soldado::getGrado()
{
    return rango;
}

bool Soldado::getApto()
{
    return apto;
}
