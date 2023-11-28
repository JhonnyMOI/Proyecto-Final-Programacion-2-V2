#pragma once
#include "Person.h"

class SubOfficer : public Person
{
private:
    string rank;

public:
    SubOfficer(string name, string surname, int age, string placeOfResidence,
        bool suitable, string rank);
    ~SubOfficer();

    void showInfo();
    string getRank();
    void setRank(string newRank);
};