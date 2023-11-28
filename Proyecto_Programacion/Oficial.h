#pragma once
#include "Persona.h"
class Oficial : public Persona
{
private:
	string grado;
public:
	Oficial(string nombre, string apellido, int edad, string lugarVivienda,
		bool apto, string grado);
	~Oficial();
	void showInfo();
	string getGrado();
};