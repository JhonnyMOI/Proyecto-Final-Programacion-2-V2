#pragma once
#include "Person.h"

class PreMilitary : public Person
{
private:
    string rank;

public:
    PreMilitary(string name, string surname, int age, string placeOfResidence,
        bool suitable, string rank);
    ~PreMilitary();
    void showInfo();
    string getRank();
};