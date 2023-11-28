#include "StaticLocalLoader.h"

StaticLocalLoader::StaticLocalLoader()
{

}

StaticLocalLoader::~StaticLocalLoader()
{

}

vector<Oficial* > StaticLocalLoader::loadOficiales()
{

	vector<Oficial* > oficiales;	
	oficiales.push_back(new Oficial("Juan", "Perez", 35, "La_Paz", 1, "Teniente"));
	oficiales.push_back(new Oficial("Maria", "Gomez", 28, "Cochabamba", 0, "Teniente_Coronel"));
	oficiales.push_back(new Oficial("Luis", "Rodriguez", 42, "Santa_Cruz", 1, "Mayor"));
	oficiales.push_back(new Oficial("Ana", "Lopez", 31, "Sucre", 1, "Teniente"));
	oficiales.push_back(new Oficial("Carlos", "Garcia", 39, "Oruro", 0, "General_de_Brigada"));
	oficiales.push_back(new Oficial("Laura", "Flores", 26, "Potosi", 1, "Subteniente"));
	oficiales.push_back(new Oficial("Pedro", "Chavez", 37, "Tarija", 0, "Sargento"));
	oficiales.push_back(new Oficial("Isabel", "Mendoza", 33, "Beni", 1, "Teniente"));
	oficiales.push_back(new Oficial("Jorge", "Torres", 29, "Pando", 0, "Subteniente"));
	oficiales.push_back(new Oficial("Fernanda", "Vargas", 36, "Trinidad", 1, "Capitan"));
	return oficiales;

}

vector<Suboficial* > StaticLocalLoader::loadSuboficiales()
{
	vector<Suboficial* > suboficiales;
	suboficiales.push_back(new Suboficial("Juan", "Perez", 35, "La Paz", 1, "Sargento"));
	suboficiales.push_back(new Suboficial("Maria", "Gomez", 28, "Cochabamba", 0, "Suboficial"));
	suboficiales.push_back(new Suboficial("Luis", "Rodriguez", 42, "Santa Cruz", 1, "Suboficial_Mayor"));
	suboficiales.push_back(new Suboficial("Ana", "Lopez", 31, "Sucre", 1, "Suboficial_Maestre"));
	suboficiales.push_back(new Suboficial("Pedro", "Garcia", 39, "Oruro", 0, "Sargento"));
	suboficiales.push_back(new Suboficial("Carla", "Flores", 26, "Potosi", 1, "Suboficial"));
	suboficiales.push_back(new Suboficial("Mario", "Chavez", 33, "Tarija", 0, "Suboficial_Mayor"));
	suboficiales.push_back(new Suboficial("Sofia", "Mendoza", 37, "Beni", 1, "Suboficial_Maestre"));
	suboficiales.push_back(new Suboficial("Hugo", "Vargas", 29, "Pando", 0, "Sargento"));
	suboficiales.push_back(new Suboficial("Laura", "Castro", 34, "Trinidad", 1, "Suboficial"));
	return suboficiales;
}

vector<Soldado* > StaticLocalLoader::loadSoldados()
{
	vector<Soldado* > soldados;
	soldados.push_back(new Soldado("Juan", "Perez", 25, "La Paz", 1, "Dragoneante"));
	soldados.push_back(new Soldado("Maria", "Gonzalez", 28, "Cochabamba", 0, "Cabo"));
	soldados.push_back(new Soldado("Luis", "Lopez", 30, "Santa Cruz", 1, "Raso"));
	soldados.push_back(new Soldado("Ana", "Rodriguez", 23, "Sucre", 0, "Dragoneante"));
	soldados.push_back(new Soldado("Pedro", "Chavez", 26, "Oruro", 1, "Cabo"));
	return soldados;
}

vector<Premilitar* > StaticLocalLoader::loadPremilitares()
{
	vector<Premilitar* > premilitares;
	premilitares.push_back(new Premilitar("Juan", "Perez", 25, "La_Paz", 1, "Sin_Grado"));
	premilitares.push_back(new Premilitar("Maria", "Gonzalez", 22, "Cochabamba", 0, "Sin_Grado"));
	premilitares.push_back(new Premilitar("Carlos", "Lopez", 28, "Santa_Cruz", 1, "Sin_Grado"));
	premilitares.push_back(new Premilitar("Ana", "Rodriguez", 20, "Sucre", 1, "Sin_Grado"));
	premilitares.push_back(new Premilitar("Luis", "Chavez", 24, "Oruro", 0, "Sin_Grado"));
	premilitares.push_back(new Premilitar("Laura", "Flores", 26, "Potosi", 1, "Sin_Grado"));
	premilitares.push_back(new Premilitar("Pedro", "Mendoza", 23, "Tarija", 0, "Sin_Grado"));
	premilitares.push_back(new Premilitar("Sofia", "Vargas", 21, "Beni", 1, "Sin_Grado"));
	return premilitares;
}