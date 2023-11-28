#include "Registro.h"
#include <fstream>
#include <conio.h>
    
using namespace std;

Registro::Registro(LocalLoader *loader)
{
    this->loader = loader;
    this->oficiales = this->loader->loadOficiales();
    this->suboficiales = this->loader->loadSuboficiales();
    this->soldados = this->loader->loadSoldados();
    this->premilitares = this->loader->loadPremilitares();
}

Registro::~Registro()
{
    for (Oficial* oficial : oficiales)
    {
        delete oficial;
    }
    for (Suboficial* suboficial : suboficiales)
    {
        delete suboficial;
    }
    for (Soldado* soldado : soldados)
    {
        delete soldado;
    }
    for (Premilitar* preMilitar : premilitares)
    {
        delete preMilitar;
    }
    /*for (Persona* persona : personal)
    {
        delete persona;
    }*/
}

void Registro::run() {
    LocalLoader *loader = new TxtLocalLoader();
    Registro *registro = new Registro(loader);

    int opcion;
    do {
        system("cls");
        cout << "************* REGISTRO DE MILITARES Y ARMAMENTO ***************************" << endl;
        cout << "* 1. Registrar Oficial                                                    *" << endl;
        cout << "* 2. Registrar Suboficial                                                 *" << endl;
        cout << "* 3. Registrar Soldado                                                    *" << endl;
        cout << "* 4. Registrar Premilitar                                                 *" << endl;
         cout << "* 5. Mostrar efectivos por grado                                          *" << endl;
        cout << "* 6. Mostrar efectivos aptos                                              *" << endl;
        cout << "* 7. Mostrar efectivos no aptos                                           *" << endl;
         cout << "* 8. Ascender Oficial                                                     *" << endl;
        cout << "* 9. Ascender Suboficial                                                  *" << endl;
        cout << "* 10. Ascender Soldado                                                    *" << endl;
        cout << "* 11. Mostrar a todos los efectivos                                       *" << endl;
        cout << "* 12. Registrar Arma                                                      *" << endl;
        cout << "* 13. Registrar Lanzagranadas                                             *" << endl;
        cout << "* 14. Cargar y mostrar datos del archivo de los soldados                  *" << endl;
        cout << "* 15. Cargar y mostrar datos del archivo de los Oficiales                 *" << endl;
        cout << "* 16. Cargar y mostrar datos del archivo de los suboficiales              *" << endl;
        cout << "* 17. Cargar y mostrar datos del archivo de los Premilitares              *" << endl;
        cout << "* 18. Mostrar efectivo de soldados(polimorfismo)                           *" << endl;
        cout << "* 0. Salir                                                                *" << endl;
        cout << "***************************************************************************" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("cls");
            registrarOficial();
            system("pause");
            break;
        case 2:
            system("cls");
            registrarSuboficial();
            system("pause");
            break;
        case 3:
            system("cls");
            registrarSoldado();
            system("pause");
            break;
        case 4:
            system("cls");
            registrarPremilitar();
            system("pause");
            break;
        case 5:
            system("cls");
            mostrarEfectivosPorGrado();
            system("pause");
            break;
        case 6:
            system("cls");
            mostrarEfectivosAptos();
            system("pause");
            break;
            case 7:
            system("cls");
            mostrarEfectivosNoAptos();
            system("pause");
            break;
        case 8:
            system("cls");
            ascenderOficial();
            system("pause");
            break;
        case 9:
            system("cls");
            ascenderSuboficial();
            system("pause");
            break;
        case 10:
            system("cls");
            ascenderSoldado();
            system("pause");
            break;
        case 11:
            system("cls");
            mostrarEfectivos();
            system("pause");
            break;
        case 12:
            system("cls");
            registrarArma();
            system("pause");
            break;
        case 13:
            system("cls");
            registrarLanzagranadas();
            system("pause");
            break;
        case 14:
            system("cls");
            cout << "*********SOLDADOS**************" << endl;
            cargarDatosDesdeArchivo("Soldados.txt");
              
            system("pause");
            break;
        case 15:
            system("cls");
            cout << "*********OFICIALES**************" << endl;
            cargarDatosDesdeArchivo("Oficiales.txt");
               
            system("pause");
            break;
        case 16:
            system("cls");
            cout << "*********SUBOFICIALES**************" << endl;
            cargarDatosDesdeArchivo("Suboficiales.txt");
               
            system("pause");
                break;
        case 17:
            system("cls");
            cout << "*********PREMILITAR**************" << endl;
            cargarDatosDesdeArchivo("PreMilitares.txt");
                
            system("pause");
            break;
        case 18:
           system("cls");
           cout << "*********Efectivo**************" << endl;
            //   cout << "Cantidad de efectivos disponibles: " << baseMilitar.contarEfectivosDisponibles() << endl;
            system("pause");
            break;
        case 0:
           system("cls");
            cout << "Saliendo del programa." << endl;
            break;
        default:
            system("cls");
            cout << "Opcion no valida. Por favor, selecciona una opcion valida." << endl;
        system("pause");
        }
    } while (opcion != 0);
}

    // Modifica el código en el archivo Registro
    void Registro::cargarDatosDesdeArchivo(const string& nombreArchivo) {
        ifstream archivo(nombreArchivo);

        if (!archivo.is_open()) {
            cout << "Error al abrir el archivo: " << nombreArchivo << endl;
            return;
        }

        string tipo;
        while (archivo >> tipo) {
            if (tipo == "Oficial") {
                string nombre, apellido, lugarVivienda, gradoOficial;
                int edad, apto;

                archivo >> nombre >> apellido >> edad >> lugarVivienda >> apto >> gradoOficial;
                Oficial* oficial = new Oficial(nombre, apellido, edad, lugarVivienda, apto, gradoOficial);
                oficiales.push_back(oficial);
            }       
            else if (tipo == "Suboficial") {
                string nombre, apellido, lugarVivienda, gradoSuboficial;
                int edad, apto;

                archivo >> nombre >> apellido >> edad >> lugarVivienda >> apto >> gradoSuboficial;
                Suboficial* suboficial = new Suboficial(nombre, apellido, edad, lugarVivienda, apto, gradoSuboficial);
                suboficiales.push_back(suboficial);
            }
            
            else if (tipo == "Soldado") {
                string nombre, apellido, lugarVivienda, rangoSoldado;
                int edad, apto;
               
                archivo >> nombre >> apellido >> edad >> lugarVivienda >> apto >> rangoSoldado;
                Soldado* soldado = new Soldado(nombre, apellido, edad, lugarVivienda, apto, rangoSoldado);
                soldados.push_back(soldado);
            }
            else if (tipo == "Premilitar") {
                string nombre, apellido, lugarVivienda;
                int edad, apto;

                archivo >> nombre >> apellido >> edad >> lugarVivienda >> apto;
                Premilitar* premilitar = new Premilitar(nombre, apellido, edad, lugarVivienda, apto, "Sin_Rango");
                premilitares.push_back(premilitar);
            }
            else {
                cout << tipo << endl;
            }
        }
        archivo.close();
    }


    void Registro::registrarOficial()// INCISO 1
    {
        string nombre, apellido, lugarVivienda, gradoOficial, resp;
        int edad;
        bool apto;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Apellido: ";
        cin >> apellido;
        cout << "Edad: ";
        cin >> edad;
        cout << "Lugar de Vivienda: ";
        cin >> lugarVivienda;

        do
        {
            cout << "Es apto? (s/n): ";
            cin >> resp;
        } while (validarRespuesta(resp) == false);
        apto = defineApto(resp);

        do
        {
            cout << "Grado (Subteniente, Teniente, Capitan, Mayor, Teniente_Coronel, Coronel, General_de_Brigada, General_de_Division, General_de_Ejercito): ";
            cin >> gradoOficial;
        } while (validaGrado(gradoOficial, gradosOficialesDisponibles) == false);
        Oficial* oficial = new Oficial(nombre, apellido, edad, lugarVivienda, apto, gradoOficial);
        oficiales.push_back(oficial);
    }

    void Registro::registrarSuboficial()// INCISO 2
    {
        string nombre, apellido, lugarVivienda, gradoSuboficial, resp;
        int edad;
        bool apto;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Apellido: ";
        cin >> apellido;
        cout << "Edad: ";
        cin >> edad;
        cout << "Lugar de Vivienda: ";
        cin >> lugarVivienda;

        do
        {
            cout << "Es apto? (s/n): ";
            cin >> resp;
        } while (validarRespuesta(resp) == false);
        apto = defineApto(resp);

        do
        {
            cout << "Grado (Sargento, Suboficial, Suboficial_Mayor, Suboficial_Maestre): ";
            cin >> gradoSuboficial;
        } while (validaGrado(gradoSuboficial, gradosSuboficialesDisponibles) == false);
        Suboficial* suboficial = new Suboficial(nombre, apellido, edad, lugarVivienda, apto, gradoSuboficial);
        suboficiales.push_back(suboficial);
    }

    void Registro::registrarSoldado()// INCISO 3
    {
        string nombre, apellido, lugarVivienda, rangoSoldado, resp;
        int edad;
        int apto;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Apellido: ";
        cin >> apellido;
        cout << "Edad: ";
        cin >> edad;
        cout << "Lugar de Vivienda: ";
        cin >> lugarVivienda;

        do
        {
            cout << "Es apto? (s/n): ";
            cin >> resp;
        } while (validarRespuesta(resp) == false);
        apto = defineApto(resp);

        do
        {
            cout << "Tipo de Soldado (Cabo, Dragoneante, Raso): ";
            cin >> rangoSoldado;
        } while (validaGrado(rangoSoldado, gradosSoldadoDisponibles) == false);
        Soldado* soldado = new Soldado(nombre, apellido, edad, lugarVivienda, apto, rangoSoldado);
        soldados.push_back(soldado);
    }

    void Registro::registrarPremilitar()// INCISO 4
    {
        string nombre, apellido, lugarVivienda, resp;
        int edad;
        int apto;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Apellido: ";
        cin >> apellido;
        cout << "Edad: ";
        cin >> edad;
        cout << "Lugar de Vivienda: ";
        cin >> lugarVivienda;

        do
        {
            cout << "Es apto? (s/n): ";
            cin >> resp;
        } while (validarRespuesta(resp) == false);
        apto = defineApto(resp);

        Premilitar* premilitar = new Premilitar(nombre, apellido, edad, lugarVivienda, apto, "Sin_Rango");
        premilitares.push_back(premilitar);
    }

    void Registro::mostrarEfectivosPorGrado()// INCISO 5
    {
        string gradoBuscado;
        mostrarGrados();
        do
        {
            cout << "Ingrese el grado que quiera buscar: ";
            cin >> gradoBuscado;
        } while (validaGrado(gradoBuscado, gradosDisponibles) == false);

        if (oficiales.empty())
        {
            cout << "No hay oficiales registrados" << endl;
        }
        else
        {
            cout << endl;
            for (Oficial* oficial : oficiales)
            {
                if (oficial->getGrado() == gradoBuscado)
                {
                    oficial->showInfo();
                    cout << endl;
                }
            }
        }
        if (suboficiales.empty())
        {
            cout << "No hay suboficiales registrados" << endl;
        }
        else
        {
            cout << endl;
            for (Suboficial* suboficial : suboficiales)
            {
                if (suboficial->getGrado() == gradoBuscado)
                {
                    suboficial->showInfo();
                    cout << endl;
                }
            }
        }
        if (soldados.empty())
        {
            cout << "No hay soldados registrados" << endl;
        }
        else
        {
            cout << endl;
            for (Soldado* soldado : soldados)
            {
                if (soldado->getGrado() == gradoBuscado)
                {
                    soldado->showInfo();
                    cout << endl;
                }
            }
        }
        if (premilitares.empty())
        {
            cout << "No hay premilitares registrados" << endl;
        }
        else
        {
            cout << endl;
            for (Premilitar* premilitar : premilitares)
            {
                if (premilitar->getGrado() == gradoBuscado)
                {
                    premilitar->showInfo();
                    cout << endl;
                }
            }
        }
    }

    void Registro::mostrarEfectivosAptos()// INCISO 6
    {
        cout << "************* OFICIALES **************" << endl;
        for (Oficial* oficial : oficiales)
        {
            if (oficial->esApto() == 1)
            {
                oficial->showInfo();
                cout << endl;
            }

        }
        cout << "************* SUBOFICIALES **************" << endl;
        for (Suboficial* suboficial : suboficiales)
        {
            if (suboficial->esApto() == 1)
            {
                suboficial->showInfo();
                cout << endl;
            }

        }
        cout << "************* SOLDADOS **************" << endl;
        for (Soldado* soldado : soldados)
        {
            if (soldado->esApto() == 1)
            {
                soldado->showInfo();
                cout << endl;
            }

        }
        cout << "************* PREMILITARES **************" << endl;
        for (Premilitar* premilitar : premilitares)
        {
            if (premilitar->esApto() == 1)
            {
                premilitar->showInfo();
                cout << endl;
            }

        }
    }

    void Registro::mostrarEfectivosNoAptos()// INCISO 7
    {
        cout << "************* OFICIALES **************" << endl;
        for (Oficial* oficial : oficiales)
        {
            if (oficial->esApto() == 0)
            {
                oficial->showInfo();
                cout << endl;
            }

        }
        cout << "************* SUBOFICIALES **************" << endl;
        for (Suboficial* suboficial : suboficiales)
        {
            if (suboficial->esApto() == 0)
            {
                suboficial->showInfo();
                cout << endl;
            }

        }
        cout << "************* SOLDADOS **************" << endl;
        for (Soldado* soldado : soldados)
        {
            if (soldado->esApto() == 0)
            {
                soldado->showInfo();
                cout << endl;
            }

        }
        cout << "************* PREMILITARES **************" << endl;
        for (Premilitar* premilitar : premilitares)
        {
            if (premilitar->esApto() == 0)
            {
                premilitar->showInfo();
                cout << endl;
            }
        }
    }

    void Registro::ascenderOficial()// INCISO 8
    {
        string nuevoGrado, nombre;
        if (!oficiales.empty())
        {
            for (Oficial* oficial : oficiales)
            {
                oficial->showInfo();
            }
            cout << "Ingrese el nombre del oficial a ascender: ";
            cin >> nombre;
            for (Oficial* oficial : oficiales)
            {
                if (oficial->getNombre() == nombre)
                {
                    mostrarGrados();
                    cout << "Ingrese el nuevo grado: ";
                    cin >> nuevoGrado;
                    validaGrado(nuevoGrado, gradosOficialesDisponibles);
                    oficial->setGrado(nuevoGrado);
                    cout << oficial->getNombre() << " fue ascendido correctamente" << endl;
                    continue;
                }
            }
        }
        else
        {
            cout << "Aun no hay oficiales registrados" << endl;
        }
    }

    void Registro::ascenderSuboficial()// INCISO 9
    {
        string nuevoGrado, nombre;
        if (!suboficiales.empty())
        {
            for (Suboficial* suboficial : suboficiales)
            {
                suboficial->showInfo();
            }
            cout << "Ingrese el nombre del suboficial a ascender: ";
            cin >> nombre;
            for (Suboficial* suboficial : suboficiales)
            {
                if (suboficial->getNombre() == nombre)
                {
                    mostrarGrados();
                    cout << "Ingrese el nuevo grado: ";
                    cin >> nuevoGrado;
                    validaGrado(nuevoGrado, gradosSuboficialesDisponibles);
                    suboficial->setGrado(nuevoGrado);
                    cout << suboficial->getNombre() << " fue ascendido correctamente" << endl;
                    continue;
                }
            }
        }
        else
        {
            cout << "Aun no hay suboficiales registrados" << endl;
        }
    }

    void Registro::ascenderSoldado()// INCISO 10
    {
        string nuevoGrado, nombre;
        if (!soldados.empty())
        {
            for (Soldado* soldado : soldados)
            {
                soldado->showInfo();
            }
            cout << "Ingrese el nombre del soldado a ascender: ";
            cin >> nombre;
            for (Soldado* soldado : soldados)
            {
                if (soldado->getNombre() == nombre)
                {
                    mostrarGrados();
                    cout << "Ingrese el nuevo grado: ";
                    cin >> nuevoGrado;
                    validaGrado(nuevoGrado, gradosSoldadoDisponibles);
                    soldado->setGrado(nuevoGrado);
                    cout << soldado->getNombre() << " fue ascendido correctamente" << endl;
                    continue;
                }
            }
        }
        else
        {
            cout << "Aun no hay soldados registrados" << endl;
        }
    }

    void Registro::mostrarEfectivos()// INCISO 11
    {
        cout << "************* OFICIALES **************" << endl;
        for (Oficial* oficial : oficiales)
        {
            oficial->showInfo();
            cout << endl;
        }
        cout << "************* SUBOFICIALES **************" << endl;
        for (Suboficial* suboficial : suboficiales)
        {
            suboficial->showInfo();
            cout << endl;
        }
        cout << "************* SOLDADOS **************" << endl;
        for (Soldado* soldado : soldados)
        {
            soldado->showInfo();
            cout << endl;
        }
        cout << "************* PREMILITARES **************" << endl;
        for (Premilitar* premilitar : premilitares)
        {
            premilitar->showInfo();
            cout << endl;
        }
    }

    bool Registro::validarRespuesta(string resp)
    {
        bool aux = false;

        vector<string> resDisponibles = { "S", "s", "Si", "si", "SI", "N", "n", "No", "no", "NO" };
        for (string res : resDisponibles)
        {
            if (resp == res)
            {
                aux = true;
                continue;
            }
            if (resp == res)
            {
                aux = true;
                continue;
            }
        }
        if (aux == true)
        {
            cout << "Opcion correcta" << endl;
        }
        else
        {
            cout << "Opcion incorrecta, pruebe de nuevo" << endl;
        }
        return aux;
    }

    int Registro::defineApto(string resp)
    {
        if (resp == "S" || resp == "s" || resp == "Si" || resp == "si")
        {
            return 1;
        }
        if (resp == "N" || resp == "n" || resp == "No" || resp == "no")
        {
            return 0;
        }
    }

    bool Registro::validaGrado(string rangoB, vector<string> gradosB)
    {
        bool aux = false;
        for (string rango : gradosB)
        {
            if (rangoB == rango)
            {
                aux = true;
                continue;
            }
        }
        if (aux == true)
        {
            cout << "Opcion correcta" << endl;
        }
        else
        {
            cout << "Opcion incorrecta, pruebe de nuevo" << endl;
        }
        return aux;
    }

    void Registro::mostrarGrados()
    {
        cout << endl << "       Grados militares ordenados de mayor a menor jerarquia:" << endl
            << "********** RANGOS DISPONIBLES **********" << endl
            << endl << "OFICIALES:" << endl
            << "- General_de_Ejercito" << endl
            << "- General_de_Brigada" << endl
            << "- General_de_Division" << endl
            << "- Coronel" << endl
            << "- Teniente_Coronel" << endl
            << "- Mayor" << endl
            << "- Capitan" << endl
            << "- Teniente" << endl
            << "- Subteniente" << endl
            << endl << "SUBOFICIALES:" << endl
            << "- Suboficial_Maestre" << endl
            << "- Suboficial_Mayor" << endl
            << "- Suboficial" << endl
            << "- Sargento" << endl
            << endl << "SOLDADOS:" << endl
            << "- Cabo" << endl
            << "- Dragoneante" << endl
            << "- Raso" << endl
            << endl << "PREMILITARES" << endl
            << "- Sin_grado" << endl << endl;
    }

    void Registro::registrarBlindado() {
        string nombre, origen, tipo;
        int numeroSerie;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Origen: ";
        cin >> origen;
        cout << "Tipo: ";
        cin >> tipo;
        cout << "Numero de Serie: ";
        cin >> numeroSerie;

        Blindados* blindado = new Blindados(nombre, origen, tipo, numeroSerie);
        armamentos.push_back(blindado);
    }

    void Registro::registrarArma() {
        string nombre, tipo, calibre, origen;
        int numeroSerie;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Tipo: ";
        cin >> tipo;
        cout << "Calibre: ";
        cin >> calibre;
        cout << "Origen: ";
        cin >> origen;
        cout << "Numero de Serie: ";
        cin >> numeroSerie;

        Armamento* arma = new Armamento(nombre, tipo, calibre, origen, numeroSerie);
        armamentos.push_back(arma);
    }

    void Registro::registrarLanzagranadas() {
        string nombre, tipo, calibre, origen;
        int numeroSerie;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Tipo: ";
        cin >> tipo;
        cout << "Calibre: ";
        cin >> calibre;
        cout << "Origen: ";
        cin >> origen;
        cout << "Número de Serie: ";
        cin >> numeroSerie;

        Lanzagranadas* lanzagranada = new Lanzagranadas(nombre, tipo, calibre, origen, numeroSerie);
        armamentos.push_back(lanzagranada);
    }
    /*
    void Registro::registrarCoheteMisil() {
        string nombre, tipo, calibre, origen;
        int numeroSerie, cantidad;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Tipo: ";
        cin >> tipo;
        cout << "Calibre: ";
        cin >> calibre;
        cout << "Origen: ";
        cin >> origen;
        cout << "Número de Serie: ";
        cin >> numeroSerie;
        cout << "Cantidad: ";
        cin >> cantidad;

        CohetesMisiles* coheteMisil = new CohetesMisiles(nombre, tipo, calibre, origen, numeroSerie, cantidad);
        armamentos.push_back(coheteMisil);
    }   
    */

