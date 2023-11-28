#include "PreMilitary.h"

PreMilitary::PreMilitary(string name, string surname, int age, string placeOfResidence,
    bool suitable, string rank)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->placeOfResidence = placeOfResidence;
    this->suitable = suitable;
    this->rank = rank;
}

PreMilitary::~PreMilitary()
{
}

void PreMilitary::showInfo()
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

string PreMilitary::getRank()
{
    return rank;
}