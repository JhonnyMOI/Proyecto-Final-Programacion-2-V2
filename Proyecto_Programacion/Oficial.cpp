#include "Oficial.h"

Oficial::Oficial(string nombre, string apellido, int edad, string lugarVivienda,
	bool apto, string grado)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->edad = edad;
	this->lugarVivienda = lugarVivienda;
	this->apto = apto;
	this->grado = grado;
}

Oficial::~Oficial()
{
}

void Oficial::showInfo()
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

string Oficial::getGrado()
{
    return grado;
}