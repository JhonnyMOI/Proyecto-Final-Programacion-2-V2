#pragma once
#include "LocalLoader.h"
#include <fstream>

class TxtLocalLoader : public LocalLoader {
public:
    TxtLocalLoader();
    ~TxtLocalLoader();

    vector<Officer*> loadOfficers();
    vector<SubOfficer*> loadSubOfficers();
    vector<Soldier*> loadSoldiers();
    vector<PreMilitary*> loadPremilitaries();
};