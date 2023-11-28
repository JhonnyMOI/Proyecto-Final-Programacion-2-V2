#pragma once
#include "Registry.h"

class MilitaryTest
{
public:
	// Test 1: Check that an Officer can be registered
	static void testOfficerCanBeRegistered()
	{
		// Setup
		vector<Officer*> officers;
		Officer* officer = new Officer("Pedro", "Garcia", 37, "Trinidad", true, "Colonel");
		// Execute
		cout << "1. testOfficerCanBeRegistered: RUNNING\n";
		officers.push_back(officer);
		// Assert
		if (!officers.empty())
		{
			cout << "1. testOfficerCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "1. testOfficerCanBeRegistered: FAILED\n";
			cout << "1. testOfficerCanBeRegistered: expected: ";
			officer->showInfo();
			cout << ", but received an empty officers vector: " << endl;
		}
		// Teardown
		delete officer;
		/*for (Officer* officer : officers)
		{
			delete officer;
		}*/
		cout << endl;
	}
	// Test 2: Check that a Grenade Launcher can be registered
	static void testGrenadeLauncherCanBeRegistered()
	{
		// Setup
		vector<GrenadeLauncher*> grenadeLaunchers;
		GrenadeLauncher* grenadeLauncher = new GrenadeLauncher("M203", "Grenade_launcher_with_a_single_barrel_mounted_on_assault_rifles", "40mm", "United_States", 87429);
		// Execute
		cout << "2. testGrenadeLauncherCanBeRegistered: RUNNING\n";
		grenadeLaunchers.push_back(grenadeLauncher);
		// Assert
		if (!grenadeLaunchers.empty())
		{
			cout << "2. testGrenadeLauncherCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "2. testOfficerCanBeRegistered: FAILED\n";
			cout << "2. testOfficerCanBeRegistered: expected: ";
			grenadeLauncher->showInfo();
			cout << ", but received an empty grenade launcher vector: " << endl;
		}
		// Teardown
		delete grenadeLauncher;
		/*for (GrenadeLauncher* grenadeLauncher : grenadeLaunchers)
		{
			delete grenadeLauncher;
		}*/
		cout << endl;
	}
	// Test 3: Check that a Sub Officer can be registered
	static void testSubOfficerCanBeRegistered()
	{
		// Setup
		vector<SubOfficer*> subOfficers;
		SubOfficer* subOfficer = new SubOfficer("Martin", "Porres", 37, "Santa_Cruz", false, "Master_Sergeant");
		// Execute
		cout << "3. testSubOfficerCanBeRegistered: RUNNING\n";
		subOfficers.push_back(subOfficer);
		// Assert
		if (!subOfficers.empty())
		{
			cout << "3. testSubOfficerCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "3. testSubOfficerCanBeRegistered: FAILED\n";
			cout << "3. testSubOfficerCanBeRegistered: expected: ";
			subOfficer->showInfo();
			cout << ", but received an empty sub officers vector: " << endl;
		}
		// Teardown
		delete subOfficer;
		/*for (SubOfficer* subOfficer : subOfficers)
		{
			delete subOfficer;
		}*/
		cout << endl;
	}
	// Test 4: Check that a Soldier can be registered
	static void testSoldierCanBeRegistered()
	{
		// Setup
		vector<Soldier*> soldiers;
		Soldier* soldier = new Soldier("Jorge", "Perez", 37, "Beni", false, "Corporal");
		// Execute
		cout << "4. testSoldierCanBeRegistered: RUNNING\n";
		soldiers.push_back(soldier);
		// Assert
		if (!soldiers.empty())
		{
			cout << "4. testSoldierCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "4. testSoldierCanBeRegistered: FAILED\n";
			cout << "4. testSoldierCanBeRegistered: expected: ";
			soldier->showInfo();
			cout << ", but received an empty soldiers vector: " << endl;
		}
		// Teardown
		delete soldier;
		/*for (Soldier* soldier : soldiers)
		{
			delete soldier;
		}*/
		cout << endl;
	}
	// Test 5: Check that a Pre-Military can be registered
	static void testPreMilitaryCanBeRegistered()
	{
		// Setup
		vector<PreMilitary*> preMilitaries;
		PreMilitary* preMilitary = new PreMilitary("Pepe", "Pereira", 18, "Tarija", true, "No_Rank");
		// Execute
		cout << "5. testSoldierCanBeRegistered: RUNNING\n";
		preMilitaries.push_back(preMilitary);
		// Assert
		if (!preMilitaries.empty())
		{
			cout << "5. testSoldierCanBeRegistered: PASSED\n";
		}
		else
		{
			cout << "5. testSoldierCanBeRegistered: FAILED\n";
			cout << "5. testSoldierCanBeRegistered: expected: ";
			preMilitary->showInfo();
			cout << ", but received an empty pre-military vector: " << endl;
		}
		// Teardown
		delete preMilitary;
		/*for (PreMilitary* preMilitary : preMilitaries)
		{
			delete preMilitary;
		}*/
		cout << endl;
	}
	// Test 6: Check that a military member can be shown by rank
	static void testShowMilitaryMemberByRank()
	{
		// Setup
		string searchedRank = "Sergeant";
		vector<SubOfficer*> subOfficers;
		SubOfficer* subOfficer = new SubOfficer("Juan", "Perez", 24, "Oruro", true, "Sergeant");
		// Execute
		cout << "6. testShowMilitaryMemberByRank: RUNNING\n";
		// Assert
		if (searchedRank == subOfficer->getRank())
		{
			cout << "6. testShowMilitaryMemberByRank: PASSED\n";
		}
		else
		{
			cout << "6. testShowMilitaryMemberByRank: FAILED\n";
			cout << "6. testShowMilitaryMemberByRank: expected: " << searchedRank << ", but received: " << subOfficer->getRank() << endl;
		}
		// Teardown
		delete subOfficer;
		cout << endl;
	}
	// Test 7: Check if a military member is suitable or not
	static void testMilitaryMemberIsSuitable()
	{
		// Setup
		bool isSuitable = false;
		Soldier* soldier = new Soldier("Jorge", "Perez", 37, "Beni", isSuitable, "Corporal");
		// Execute
		cout << "7. testMilitaryMemberIsSuitable: RUNNING\n";
		// Assert
		if (isSuitable == soldier->isSuitable())
		{
			cout << "7. testMilitaryMemberIsSuitable: PASSED\n";
		}
		else
		{
			cout << "7. testMilitaryMemberIsSuitable: FAILED\n";
			cout << "7. testMilitaryMemberIsSuitable: expected: IS suitable, but received: is NOT suitable" << endl;
		}
		// Teardown
		delete soldier;
		cout << endl;
	}
};