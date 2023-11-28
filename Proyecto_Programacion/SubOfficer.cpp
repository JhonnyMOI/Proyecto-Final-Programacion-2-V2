#include "SubOfficer.h"

SubOfficer::SubOfficer(string name, string surname, int age, string placeOfResidence,
    bool suitable, string rank)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->placeOfResidence = placeOfResidence;
    this->suitable = suitable;
    this->rank = rank;
}

SubOfficer::~SubOfficer()
{
}

void SubOfficer::showInfo()
{
    cout << "Full Name: " << name << " " << surname << endl;
    cout << "Age: " << age << endl;
    cout << "Place of Residence: " << placeOfResidence << endl;
    if (suitable == 1)
    {
        cout << "Fit: YES" << endl;
    }
    if (suitable == 0)
    {
        cout << "Fit: NO" << endl;
    }
    cout << "Rank: " << rank << endl;
}

string SubOfficer::getRank()
{
    return rank;
}