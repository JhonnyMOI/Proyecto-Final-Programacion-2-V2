#pragma once
#include "Person.h"

class Officer : public Person {
private:
    string rank;

public:
    Officer(string name, string surname, int age, string placeOfResidence,
        bool suitable, string rank);
    ~Officer();
    void showInfo();
    string getRank();
};