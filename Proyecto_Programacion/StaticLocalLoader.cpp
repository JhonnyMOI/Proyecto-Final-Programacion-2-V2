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
    subOfficers.push_back(new SubOfficer("Jose", "Perez", 35, "La Paz", 1, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Marta", "Gomez", 28, "Cochabamba", 0, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Luisa", "Rodriguez", 42, "Santa Cruz", 1, "Senior_Sergeant"));
    subOfficers.push_back(new SubOfficer("Anabel", "Lopez", 31, "Sucre", 1, "Master_Sergeant"));
    subOfficers.push_back(new SubOfficer("Pedrito", "Garcia", 39, "Oruro", 0, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Carlota", "Flores", 26, "Potosi", 1, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Mariano", "Chavez", 33, "Tarija", 0, "Senior_Sergeant"));
    subOfficers.push_back(new SubOfficer("Soila", "Mendoza", 37, "Beni", 1, "Master_Sergeant"));
    subOfficers.push_back(new SubOfficer("Pepe", "Vargas", 29, "Pando", 0, "Sergeant"));
    subOfficers.push_back(new SubOfficer("Nabil", "Castro", 34, "Trinidad", 1, "Sergeant"));
    return subOfficers;
}

vector<Soldier*> StaticLocalLoader::loadSoldiers()
{
    vector<Soldier*> soldiers;
    soldiers.push_back(new Soldier("Teseo", "Perez", 25, "La_Paz", 1, "Private"));
    soldiers.push_back(new Soldier("Jorge", "Gonzalez", 28, "Cochabamba", 0, "Corporal"));
    soldiers.push_back(new Soldier("George", "Lopez", 30, "Santa_Cruz", 1, "Private"));
    soldiers.push_back(new Soldier("Anastacia", "Rodriguez", 23, "Sucre", 0, "Private"));
    soldiers.push_back(new Soldier("Pelvin", "Chavez", 26, "Oruro", 1, "Corporal"));
    return soldiers;
}

vector<PreMilitary*> StaticLocalLoader::loadPreMilitaries()
{
    vector<PreMilitary*> premilitaries;
    premilitaries.push_back(new PreMilitary("Antony", "Perez", 25, "La_Paz", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Mery", "Gonzalez", 22, "Cochabamba", 0, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Saul", "Lopez", 28, "Santa_Cruz", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Brenda", "Rodriguez", 20, "Sucre", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Erick", "Chavez", 24, "Oruro", 0, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Justin", "Flores", 26, "Potosi", 1, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Chris", "Mendoza", 23, "Tarija", 0, "No_Rank"));
    premilitaries.push_back(new PreMilitary("Scarlett", "Vargas", 21, "Beni", 1, "No_Rank"));
    return premilitaries;
}