#pragma once
#include "Militar.h"
#include "Premilitar.h"
#include "Soldado.h"
#include "Suboficial.h"
#include "Oficial.h"
#include "Blindados.h"
#include "Armamento.h"
#include "Lanzagranadas.h"
#include "BaseMilitar.h"
#include <vector>
#include "TxtLocalLoader.h"
#include <iostream>
#include <string>
#include "LocalLoader.h"

using namespace std;

class Registro {

private:

    vector<Oficial *> oficiales;
    vector<Suboficial *> suboficiales;
    vector<Soldado *> soldados;
    vector<Premilitar *> premilitares;
    LocalLoader* loader;
    
    vector<Armamento*> armamentos;
    
    vector<string> gradosOficialesDisponibles = { "Subteniente", "Teniente", "Capitan", "Mayor", "Teniente_Coronel", "Coronel", "General_de_Brigada", "General_de_Division", "General_de_Ejercito" };
    vector<string> gradosSuboficialesDisponibles = { "Sargento", "Suboficial", "Suboficial_Mayor", "Suboficial_Maestre" };
    vector<string> gradosSoldadoDisponibles = { "Raso", "Dragoneante", "Cabo" };
    vector<string> gradosDisponibles = { "Sin_Grado", "Raso", "Dragoneante", "Cabo", "Sargento", "Suboficial", "Suboficial_Mayor", "Suboficial_Maestre", "Subteniente", "Teniente", "Capitan", "Mayor", "Teniente_Coronel", "Coronel", "General_de_Brigada", "General_de_Division", "General_de_Ejercito" };

    //void showMenu();
    void registrarOficial();// OPCION 1
    void registrarSuboficial();// OPCION 2
    void registrarSoldado();// OPCION 3
    void registrarPremilitar();// OPCION 4
    void mostrarEfectivosPorGrado();// OPCION 5
    void mostrarEfectivosAptos();// OPCION 6
    void mostrarEfectivosNoAptos();// OPCION 7
    void ascenderOficial();// OPCION 8
    void ascenderSuboficial();// OPCION 9
    void ascenderSoldado();// OPCION 10
    void mostrarEfectivos();// OPCION 11
 
    void registrarBlindado();
    void registrarArma();
    void registrarLanzagranadas();
    void cargarDatosDesdeArchivo(const std::string& nombreArchivo);
    void mostrarGrados();
    bool validarRespuesta(string respuesta);
    int defineApto(string respuesta);
    bool validaGrado(string nuevoGrado, vector<string> gradosDisponibles);
    BaseMilitar baseMilitar;
public:
    ~Registro();
    Registro(LocalLoader *loader);
   
    void run();
};