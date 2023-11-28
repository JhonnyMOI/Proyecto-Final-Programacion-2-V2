#pragma once
#include "Person.h"
#include <vector>

class Soldier : public Person
{
private:
    string rank;

public:
    Soldier(string name, string surname, int age, string placeOfResidence,
        bool suitable, string rank);
    ~Soldier();

    void showInfo();
    string getName();
    void setSoldierRank(string newRank);
    string getRank();
    bool isSuitable();
};