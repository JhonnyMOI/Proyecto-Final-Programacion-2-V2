#include "Soldier.h"

Soldier::Soldier(string name, string surname, int age, string placeOfResidence,
    bool suitable, string rank)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->placeOfResidence = placeOfResidence;
    this->suitable = suitable;
    this->rank = rank;
}

Soldier::~Soldier()
{
}

void Soldier::showInfo()
{
    cout << "Full Name: " << name << " " << surname << endl;
    cout << "Age: " << age << endl;
    cout << "Place of Residence: " << placeOfResidence << endl;
    if (suitable == 1)
    {
        cout << "Is suitable?: YES" << endl;
    }
    if (suitable == 0)
    {
        cout << "Is suitable?: NO" << endl;
    }
    cout << "Rank: " << rank << endl;
}

string Soldier::getName()
{
    return name;
}

void Soldier::setRank(string newRank)
{
    this->rank = newRank;
}

string Soldier::getRank()
{
    return rank;
}

bool Soldier::isSuitable()
{
    return suitable;
}