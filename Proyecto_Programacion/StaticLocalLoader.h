#pragma once
#include "LocalLoader.h"

class StaticLocalLoader : public LocalLoader
{
private:
public:
    StaticLocalLoader();
    ~StaticLocalLoader();

    vector<Officer*> loadOfficers();
    vector<SubOfficer*> loadSubOfficers();
    vector<Soldier*> loadSoldiers();
    vector<PreMilitary*> loadPreMilitaries();
};