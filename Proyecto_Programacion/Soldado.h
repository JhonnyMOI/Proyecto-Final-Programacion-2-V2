#pragma once
#include "Persona.h"
#include <vector>
class Soldado : public Persona
{
private:
	string rango;
public:
	Soldado(string nombre, string apellido, int edad, string lugarVivienda, 
		bool apto, string rango);
	~Soldado();
	void showInfo();
	string getNombre();
	void setRangoSoldado(string nuevoRango);
	string getGrado();
	bool getApto();
};