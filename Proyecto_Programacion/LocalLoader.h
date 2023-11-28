#pragma once
#include "Oficial.h"
#include "Suboficial.h"
#include "Soldado.h"
#include "Premilitar.h"
#include <iostream>

class LocalLoader
{
private:
public:
	  LocalLoader();
	 ~LocalLoader();
	virtual vector<Oficial*> loadOficiales() = 0;
	virtual vector<Suboficial*> loadSuboficiales() = 0;
	virtual vector<Soldado*> loadSoldados() = 0;
	virtual vector<Premilitar*> loadPremilitares() = 0;
};

