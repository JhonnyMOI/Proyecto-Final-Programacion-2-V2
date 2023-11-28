#pragma once
#include <iostream>
using namespace std;

class Persona
{

public:
	string nombre, apellido, lugarVivienda, grado;
	int edad;
	bool apto;
	//Persona(string nombre, string apellido, int edad, string lugarVivienda, bool apto, string rango);
	~Persona();
	bool esApto();
	string getGrado();
	void setGrado(string nuevoGrado);
	string getNombre();
	void showInfo();

};