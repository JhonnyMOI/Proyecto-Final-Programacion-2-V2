#include "Officer.h"

Officer::Officer(string name, string surname, int age, string placeOfResidence,
    bool suitable, string rank)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->placeOfResidence = placeOfResidence;
    this->suitable = suitable;
    this->rank = rank;
}

Officer::~Officer()
{
}

void Officer::showInfo()
{
    cout << "Full Name: " << name << " " << surname << endl;
    cout << "Age: " << age << endl;
    cout << "Place of Residence: " << placeOfResidence << endl;
    if (suitable)
    {
        cout << "Is suitable: YES" << endl;
    }
    else
    {
        cout << "Is suitable: NO" << endl;
    }
    cout << "Rank: " << rank << endl;
}

string Officer::getRank()
{
    return rank;
}

void Officer::setRank(string newRank)
{
    this->rank = newRank;
}