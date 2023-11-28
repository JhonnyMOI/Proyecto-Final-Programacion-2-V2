#include "Persona.h"//Esta clase puede llamarse Militar en lugar de Persona

/*Persona::Persona(string nombre, string apellido, int edad, string lugarVivienda,
    bool apto)//, string grado)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->lugarVivienda = lugarVivienda;
    this->apto = apto;
    //this->grado = grado;
}*/

/*Persona::Persona(string nombre, string apellido, int edad, string lugarVivienda, bool apto, string rango)
{

}
*/

Persona::~Persona()
{
}

bool Persona::esApto()
{
    return apto;
}

void Persona::setGrado(string nuevoGrado)
{
    this->grado = nuevoGrado;
}

void Persona::showInfo()
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

string Persona::getGrado()
{
    return grado;
}

string Persona::getNombre()
{
    return nombre;
}
