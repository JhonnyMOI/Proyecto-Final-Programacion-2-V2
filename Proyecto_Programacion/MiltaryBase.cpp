#include "MilitaryBase.h"
#include <iostream>

MilitaryBase::MilitaryBase() {}

MilitaryBase::~MilitaryBase()
{
    /*for (auto& person : personnel)
    {
        delete person;
    }*/
    for (Person* person : personnel)
    {
        delete person;
    }
}

void MilitaryBase::addPerson(Person* person)
{
    personnel.push_back(person);
}

void MilitaryBase::showPersonnel() const
{
    for (const auto& person : personnel)
    {
        //person->showInfo();
        std::cout << "-------------------------" << std::endl;
    }
}

int MilitaryBase::countAvailablePersonnel() const
{
    int counter = 0;
    for (const auto& person : personnel)
    {
        // Check if they are suitable
        if (person->isSuitable())
        {
            counter++;
        }
    }
    return counter;
}