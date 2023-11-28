#pragma once
#include "Registro.h"

class MilitarTest
{
public:
	//Test 1: Probar que se puede registar a un Oficial
	static void testOfficerCanBeRegistered()
	{
		//setup
		vector<Oficial*> oficiales;
		Oficial* oficial = new Oficial("Pedro", "Garcia", 37, "Trinidad", true, "Coronel");
		//execute
		cout << "1. testOfficerCanBeRegistered: RUNNING\n";
		oficiales.push_back(oficial);
		//assert
		if (!oficiales.empty())
		{
			cout << "1. testOfficerCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "1. testOfficerCanBeRegistered: FAILED\n";
			cout << "1. testOfficerCanBeRegistered: expected: ";
			oficial->showInfo();
			cout << ", but received an empty officers vector: " << endl;
		}
		//teardown
		delete oficial;
		/*for (Oficial* oficial : oficiales)
		{
			delete oficial;
		}*/
		cout << endl;
	}
	//Test 2: Probar que se puede registrar un blindado
	static void testGrenadeLauncherCanBeRegistered()
	{
		//setup
		vector<Lanzagranadas*> lanzagranadas;
		Lanzagranadas* lanzagranada = new Lanzagranadas("M203", "Grenade_launcher_with_a_single_barrel_mounted_on_assault_rifles", "40mm", "United_States", 87429);
		//execute
		cout << "2. testGrenadeLauncherCanBeRegistered: RUNNING\n";
		lanzagranadas.push_back(lanzagranada);
		//assert
		if (!lanzagranadas.empty())
		{
			cout << "2. testGrenadeLauncherCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "2. testOfficerCanBeRegistered: FAILED\n";
			cout << "2. testOfficerCanBeRegistered: expected: ";
			lanzagranada->showInfo();
			cout << ", but received an empty grenade launcher vector: " << endl;
		}
		//teardown
		delete lanzagranada;
		/*for (Lanzagranadas* lanzagranada : lanzagranadas)
		{
			delete lanzagranada;
		}*/
		cout << endl;
	}
	//Test 3: Probar que se puede registrar a un Suboficial
	static void testSubOfficerCanBeRegistered()
	{
		//setup
		vector<Suboficial*> suboficiales;
		Suboficial* suboficial = new Suboficial("Martin", "Porres", 37, "Santa_Cruz", false, "Suboficial_Mayor");
		//execute
		cout << "3. testSubOfficerCanBeRegistered: RUNNING\n";
		suboficiales.push_back(suboficial);
		//assert
		if (!suboficiales.empty())
		{
			cout << "3. testSubOfficerCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "3. testSubOfficerCanBeRegistered: FAILED\n";
			cout << "3. testSubOfficerCanBeRegistered: expected: ";
			suboficial->showInfo();
			cout << ", but received an empty sub officers vector: " << endl;
		}
		//teardown
		delete suboficial;
		/*for (Suboficial* suboficial : suboficiales)
		{
			delete suboficial;
		}*/
		cout << endl;
	}
	//Test 4: Probar que se puede registrar a un Soldado
	static void testSoldierCanBeRegistered()
	{
		//setup
		vector<Soldado*> soldados;
		Soldado* soldado = new Soldado("Jorge", "Perez", 37, "Beni", false, "Dragoneante");
		//execute
		cout << "4. testSoldierCanBeRegistered: RUNNING\n";
		soldados.push_back(soldado);
		//assert
		if (!soldados.empty())
		{
			cout << "4. testSoldierCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "4. testSoldierCanBeRegistered: FAILED\n";
			cout << "4. testSoldierCanBeRegistered: expected: ";
			soldado->showInfo();
			cout << ", but received an empty soldiers vector: " << endl;
		}
		//teardown
		delete soldado;
		/*for (Soldado* soldado : soldados)
		{
			delete soldado;
		}*/
		cout << endl;
	}
	//Test 5: Probar que se puede registrar a un Premilitar
	static void testPreMilitaryCanBeRegistered()
	{
		//setup
		vector<Premilitar*> premilitares;
		Premilitar* premilitar = new Premilitar("Pepe", "Pereira", 18, "Tarija", true, "Sin_Grado");
		//execute
		cout << "5. testSoldierCanBeRegistered: RUNNING\n";
		premilitares.push_back(premilitar);
		//assert
		if (!premilitares.empty())
		{
			cout << "5. testSoldierCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "5. testSoldierCanBeRegistered: FAILED\n";
			cout << "5. testSoldierCanBeRegistered: expected: ";
			premilitar->showInfo();
			cout << ", but received an empty pre military vector: " << endl;
		}
		//teardown
		delete premilitar;
		/*for (Premilitar* premilitar : premilitares)
		{
			delete premilitar;
		}*/
		cout << endl;
	}
	//Test 6: Probar que se puede mostrar un efectivo dado su rango
	static void testShowMilitaryMemberByRank()
	{
		//setup
		string searchedRange = "Sargento";
		vector<Suboficial*> suboficiales;
		Suboficial* suboficial = new Suboficial("Juan", "Perez", 24, "Oruro", true, "Sargento");
		//execute
		cout << "6. testShowMilitaryMemberByRank: RUNNING\n";
		//assert
		if (searchedRange == suboficial->getGrado())
		{
			cout << "6. testShowMilitaryMemberByRank: PASSED\n";
		}
		else
		{
			cout << "6. testShowMilitaryMemberByRank: FAILED\n";
			cout << "6. testShowMilitaryMemberByRank: expected: " << searchedRange << ", but received: " << suboficial->getGrado() << endl;
		}
		//teardown
		delete suboficial;
		cout << endl;
	}
	//Test 7: Probar que un efectivo sea apto o no
	static void testMilitaryMemberIsSuitable()
	{
		//setup
		bool isSuitable = false;
		Soldado* soldado = new Soldado("Jorge", "Perez", 37, "Beni", isSuitable, "Dragoneante");
		//execute
		cout << "7. testMilitaryMemberIsSuitable: RUNNING\n";
		//assert
		if (isSuitable == soldado->getApto())
		{
			cout << "7. testMilitaryMemberIsSuitable: PASSED\n";
		}
		else
		{
			cout << "7. testMilitaryMemberIsSuitable: FAILED\n";
			cout << "7. testMilitaryMemberIsSuitable: expected: IS suitable, but received: is NOT suitalbe" << endl;
		}
		//teardown
		delete soldado;
		cout << endl;
	}
};