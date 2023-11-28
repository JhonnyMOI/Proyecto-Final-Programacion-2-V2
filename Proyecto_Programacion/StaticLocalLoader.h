#pragma once
#include "LocalLoader.h"

class StaticLocalLoader : public LocalLoader
{
private:
public:
	StaticLocalLoader();
	~StaticLocalLoader();
	vector<Oficial* > loadOficiales();
	vector<Suboficial* > loadSuboficiales();
	vector<Soldado* > loadSoldados();
	vector<Premilitar* > loadPremilitares();
};