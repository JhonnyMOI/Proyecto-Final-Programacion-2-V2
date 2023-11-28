#pragma once
#include <iostream>
using namespace std;

class Person {
public:
    string name, surname, placeOfResidence, rank;
    int age;
    bool suitable;

    ~Person();
    bool isSuitable();
    string getRank();
    void setRank(string newRank);
    string getName();
    void showInfo();
};