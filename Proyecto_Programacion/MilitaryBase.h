#pragma once
#include <vector>
#include "Person.h"

class MilitaryBase
{
private:
    vector<Person*> personnel;

public:
    MilitaryBase();
    ~MilitaryBase();

    void addPerson(Person* person);
    void showPersonnel() const;
    int countAvailablePersonnel() const;
};