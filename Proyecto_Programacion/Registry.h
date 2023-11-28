#pragma once
#include "PreMilitary.h"
#include "Soldier.h"
#include "SubOfficer.h"
#include "Officer.h"
#include "ArmoredVehicle.h"
#include "Armament.h"
#include "GrenadeLauncher.h"
#include "MilitaryBase.h"
#include <vector>
#include "TxtLocalLoader.h"
#include <iostream>
#include <string>
#include "LocalLoader.h"

using namespace std;

class Registry {

private:

    vector<Officer*> officers;
    vector<SubOfficer*> subOfficers;
    vector<Soldier*> soldiers;
    vector<PreMilitary*> preMilitaries;
    LocalLoader* loader;

    vector<Armament*> armaments;

    vector<string> availableOfficerRanks = { "Sublieutenant", "Lieutenant", "Captain", "Major", "Lieutenant_Colonel", "Colonel", "Brigadier_General", "Division_General", "Army_General" };
    vector<string> availableSubOfficerRanks = { "Sergeant", "SubOfficer", "Senior_SubOfficer", "Chief_SubOfficer" };
    vector<string> availableSoldierRanks = { "Private", "Corporal", "Sergeant" };
    vector<string> availableRanks = { "No_Rank", "Private", "Corporal", "Sergeant", "SubOfficer", "Senior_SubOfficer", "Chief_SubOfficer", "Sublieutenant", "Lieutenant", "Captain", "Major", "Lieutenant_Colonel", "Colonel", "Brigadier_General", "Division_General", "Army_General" };

    //void showMenu();
    void registerOfficer();// OPTION 1
    void registerSubOfficer();// OPTION 2
    void registerSoldier();// OPTION 3
    void registerPreMilitary();// OPTION 4
    void showPersonnelByRank();// OPTION 5
    void showSuitablePersonnel();// OPTION 6
    void showNonSuitablePersonnel();// OPTION 7
    void promoteOfficer();// OPTION 8
    void promoteSubOfficer();// OPTION 9
    void promoteSoldier();// OPTION 10
    void showPersonnel();// OPTION 11

    void registerArmoredVehicle();
    void registerWeapon();
    void registerGrenadeLauncher();
    void loadDataFromFile(const std::string& fileName);
    void showRanks();
    bool validateResponse(string response);
    int defineSuitable(string response);
    bool validateRank(string newRank, vector<string> availableRanks);
    MilitaryBase militaryBase;
public:
    ~Registry();
    Registry(LocalLoader* loader);

    void run();
};