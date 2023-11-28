#include "Suboficial.h"

Suboficial::Suboficial(string nombre, string apellido, int edad, string lugarVivienda, 
	bool apto, string grado)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->edad = edad;
	this->lugarVivienda = lugarVivienda;
	this->apto = apto;
	this->grado = grado;
}

Suboficial::~Suboficial()
{
}

void Suboficial::showInfo()
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
    cout << "Grado: " << grado << endl;
}

string Suboficial::getGrado()
{
    return grado;
}