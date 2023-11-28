#pragma once
#include "Persona.h"
#include "Militar.h"
class Premilitar : public Persona
{
private:
	string grado;
public:
	Premilitar(string nombre, string apellido, int edad, string lugarVivienda, 
		bool apto, string grado);
	~Premilitar();
	void showInfo();
	string getGrado();
};