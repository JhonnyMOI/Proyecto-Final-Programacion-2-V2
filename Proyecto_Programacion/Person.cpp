#include "Person.h"

Person::~Person()
{
}

bool Person::isSuitable()
{
    return suitable;
}

void Person::setRank(string newRank)
{
    this->rank = newRank;
}

void Person::showInfo()
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

string Person::getRank()
{
    return rank;
}

string Person::getName()
{
    return name;
}