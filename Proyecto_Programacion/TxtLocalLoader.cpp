#include "TxtLocalLoader.h"
#include <fstream>
#include <iostream>

using namespace std;

TxtLocalLoader::TxtLocalLoader() {
}

TxtLocalLoader::~TxtLocalLoader() {
}

vector<Soldado*> TxtLocalLoader::loadSoldados() {
    vector<Soldado*> soldados;
    ifstream archivoSoldados("Soldados.txt", ios::in);
    if (archivoSoldados.fail()) {
        cout << "No se pudo abrir el archivo de Soldados" << endl;
        archivoSoldados.close();
        return soldados;
    }

    string nombre;
    string apellido;
    int edad=0;
    string lugarVivienda;
    bool apto = false;
    string rango;

    while (archivoSoldados >> nombre >> apellido >>edad>>  lugarVivienda >> apto >> rango) {
        soldados.push_back(new Soldado( nombre, apellido, edad, lugarVivienda, apto, rango));
    }

    archivoSoldados.close();
    return soldados;
}

vector<Oficial*> TxtLocalLoader::loadOficiales() {
    vector<Oficial*> oficiales;
    ifstream archivoOficiales("Oficiales.txt", ios::in);
    if (archivoOficiales.fail()) {
        cout<< "No se pudo abrir el archivo de Oficiales" << endl;
        archivoOficiales.close();
        return oficiales;
    }

    string nombre;
    string apellido;
    int edad = 0;
    string lugarVivienda;
    bool apto = false;
    string rango;

    while (archivoOficiales >> nombre >> apellido >> edad >> lugarVivienda >> apto >> rango) {
        oficiales.push_back(new Oficial(nombre, apellido, edad, lugarVivienda, apto, rango));
    }

    archivoOficiales.close();
    return oficiales;
}

vector<Premilitar*> TxtLocalLoader::loadPremilitares() {
    vector<Premilitar*> preMilitares;
    ifstream archivoPreMilitares("PreMilitares.txt", ios::in);
    if (archivoPreMilitares.fail()) {
        cout<< "No se pudo abrir el archivo de PreMilitares" << endl;
        archivoPreMilitares.close();
        return preMilitares;
    }

    string nombre;
    string apellido;
    int edad = 0;
    string lugarVivienda;
    bool apto = false;
    string grado;

    while (archivoPreMilitares >> nombre >> apellido >> edad >> lugarVivienda >> apto >> grado) {
        preMilitares.push_back(new Premilitar(nombre, apellido, edad, lugarVivienda, apto, grado));
    }

    archivoPreMilitares.close();
    return preMilitares;
}


vector<Suboficial*> TxtLocalLoader::loadSuboficiales() {
    vector<Suboficial*> suboficiales;
    ifstream archivosuboficiales("Suboficiales.txt", ios::in);
    if (archivosuboficiales.fail()) {
        cout << "No se pudo abrir el archivo de Oficiales" << endl;
        archivosuboficiales.close();
        return suboficiales;
    }

    string nombre;
    string apellido;
    int edad = 0;
    string lugarVivienda;
    bool apto = false;
    string grado;

    while (archivosuboficiales >> nombre >> apellido >> edad >> lugarVivienda >> apto >> grado) {
        suboficiales.push_back(new Suboficial(nombre, apellido, edad, lugarVivienda, apto, grado));
    }

    archivosuboficiales.close();
    return suboficiales;
}