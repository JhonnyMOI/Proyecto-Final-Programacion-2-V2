#include "TxtLocalLoader.h"
#include <fstream>
#include <iostream>

using namespace std;

TxtLocalLoader::TxtLocalLoader() {
}

TxtLocalLoader::~TxtLocalLoader() {
}

vector<Officer*> TxtLocalLoader::loadOfficers() {
    vector<Officer*> officers;
    ifstream officersFile("Officers.txt", ios::in);
    if (officersFile.fail()) {
        cout << "Unable to open Officers file" << endl;
        officersFile.close();
        return officers;
    }

    string name;
    string lastName;
    int age = 0;
    string placeOfResidence;
    bool suitable = false;
    string rank;

    while (officersFile >> name >> lastName >> age >> placeOfResidence >> suitable >> rank) {
        officers.push_back(new Officer(name, lastName, age, placeOfResidence, suitable, rank));
    }

    officersFile.close();
    return officers;
}

vector<SubOfficer*> TxtLocalLoader::loadSubOfficers() {
    vector<SubOfficer*> subOfficers;
    ifstream subOfficersFile("SubOfficers.txt", ios::in);
    if (subOfficersFile.fail()) {
        cout << "Unable to open subOfficers file" << endl;
        subOfficersFile.close();
        return subOfficers;
    }

    string name;
    string lastName;
    int age = 0;
    string placeOfResidence;
    bool suitable = false;
    string grade;

    while (subOfficersFile >> name >> lastName >> age >> placeOfResidence >> suitable >> grade) {
        subOfficers.push_back(new SubOfficer(name, lastName, age, placeOfResidence, suitable, grade));
    }

    subOfficersFile.close();
    return subOfficers;
}

vector<Soldier*> TxtLocalLoader::loadSoldiers() {
    vector<Soldier*> soldiers;
    ifstream soldiersFile("Soldiers.txt", ios::in);
    if (soldiersFile.fail()) {
        cout << "Unable to open Soldiers file" << endl;
        soldiersFile.close();
        return soldiers;
    }

    string name;
    string lastName;
    int age = 0;
    string placeOfResidence;
    bool suitable = false;
    string rank;

    while (soldiersFile >> name >> lastName >> age >> placeOfResidence >> suitable >> rank) {
        soldiers.push_back(new Soldier(name, lastName, age, placeOfResidence, suitable, rank));
    }

    soldiersFile.close();
    return soldiers;
}

vector<PreMilitary*> TxtLocalLoader::loadPreMilitaries() {
    vector<PreMilitary*> premilitaries;
    ifstream premilitariesFile("PreMilitaries.txt", ios::in);
    if (premilitariesFile.fail()) {
        cout << "Unable to open PreMilitaries file" << endl;
        premilitariesFile.close();
        return premilitaries;
    }

    string name;
    string lastName;
    int age = 0;
    string placeOfResidence;
    bool suitable = false;
    string grade;

    while (premilitariesFile >> name >> lastName >> age >> placeOfResidence >> suitable >> grade) {
        premilitaries.push_back(new PreMilitary(name, lastName, age, placeOfResidence, suitable, grade));
    }

    premilitariesFile.close();
    return premilitaries;
}