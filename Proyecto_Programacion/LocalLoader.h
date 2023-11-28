#pragma once
#include "Officer.h"
#include "SubOfficer.h"
#include "Soldier.h"
#include "PreMilitary.h"
#include <iostream>
#include <vector>

class LocalLoader {
public:
    virtual ~LocalLoader();
    virtual vector<Officer*> loadOfficers() = 0;
    virtual vector<SubOfficer*> loadSubOfficers() = 0;
    virtual vector<Soldier*> loadSoldiers() = 0;
    virtual vector<PreMilitary*> loadPreMilitaries() = 0;
};