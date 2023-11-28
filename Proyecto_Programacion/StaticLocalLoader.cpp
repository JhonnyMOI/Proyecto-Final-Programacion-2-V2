#include "StaticLocalLoader.h"

StaticLocalLoader::StaticLocalLoader(){}

StaticLocalLoader::~StaticLocalLoader(){}

vector<Officer*> StaticLocalLoader::loadOfficers()
{
    vector<Officer*> officers;
    officers.push_back(new Officer("Juan", "Perez", 35, "La_Paz", 1, "Lieutenant"));
    officers.push_back(new Officer("Maria", "Gomez", 28, "Cochabamba", 0, "Lieutenant_Colonel"));
    officers.push_back(new Officer("Luis", "Rodriguez", 42, "Santa_Cruz", 1, "Major"));
    officers.push_back(new Officer("Ana", "Lopez", 31, "Sucre", 1, "Lieutenant"));
    officers.push_back(new Officer("Carlos", "Garcia", 39, "Oruro", 0, "Brigadier_General"));
    officers.push_back(new Officer("Laura", "Flores", 26, "Potosi", 1, "Second_Lieutenant"));
    officers.push_back(new Officer("Pedro", "Chavez", 37, "Tarija", 0, "Sergeant"));
    officers.push_back(new Officer("Isabel", "Mendoza", 33, "Beni", 1, "Lieutenant"));
    officers.push_back(new Officer("Jorge", "Torres", 29, "Pando", 0, "Second_Lieutenant"));
    officers.push_back(new Officer("Fernanda", "Vargas", 36, "Trinidad", 1, "Captain"));
    return officers;
}

vector<SubOfficer*> StaticLocalLoader::loadSubOfficers()
{
    vector<SubOfficer*> subOfficers;
    subOfficers.push_back(new SubOfficer("Juan", "Perez", 35, "La Paz", 1, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Maria", "Gomez", 28, "Cochabamba", 0, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Luis", "Rodriguez", 42, "Santa Cruz", 1, "Senior_Sergeant"));
    subOfficers.push_back(new SubOfficer("Ana", "Lopez", 31, "Sucre", 1, "Master_Sergeant"));
    subOfficers.push_back(new SubOfficer("Pedro", "Garcia", 39, "Oruro", 0, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Carla", "Flores", 26, "Potosi", 1, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Mario", "Chavez", 33, "Tarija", 0, "Senior_Sergeant"));
    subOfficers.push_back(new SubOfficer("Sofia", "Mendoza", 37, "Beni", 1, "Master_Sergeant"));
    subOfficers.push_back(new SubOfficer("Hugo", "Vargas", 29, "Pando", 0, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Laura", "Castro", 34, "Trinidad", 1, "Sergeant"));
    return subOfficers;
}

vector<Soldier*> StaticLocalLoader::loadSoldiers()
{
    vector<Soldier*> soldiers;
    soldiers.push_back(new Soldier("Juan", "Perez", 25, "La_Paz", 1, "Private"));
    soldiers.push_back(new Soldier("Maria", "Gonzalez", 28, "Cochabamba", 0, "Corporal"));
    soldiers.push_back(new Soldier("Luis", "Lopez", 30, "Santa_Cruz", 1, "Private"));
    soldiers.push_back(new Soldier("Ana", "Rodriguez", 23, "Sucre", 0, "Private"));
    soldiers.push_back(new Soldier("Pedro", "Chavez", 26, "Oruro", 1, "Corporal"));
    return soldiers;
}

vector<PreMilitary*> StaticLocalLoader::loadPreMilitaries()
{
    vector<PreMilitary*> premilitaries;
    premilitaries.push_back(new PreMilitary("Juan", "Perez", 25, "La_Paz", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Maria", "Gonzalez", 22, "Cochabamba", 0, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Carlos", "Lopez", 28, "Santa_Cruz", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Ana", "Rodriguez", 20, "Sucre", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Luis", "Chavez", 24, "Oruro", 0, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Laura", "Flores", 26, "Potosi", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Pedro", "Mendoza", 23, "Tarija", 0, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Sofia", "Vargas", 21, "Beni", 1, "No_Rank"));
    return premilitaries;
}