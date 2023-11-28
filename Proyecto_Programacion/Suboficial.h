#pragma once
#include "Persona.h"
class Suboficial : public Persona
{
private:
	string grado;
public:
	Suboficial(string nombre, string apellido, int edad, string lugarVivienda, 
		bool apto, string grado);
	~Suboficial();
	void showInfo();
	string getGrado();
};