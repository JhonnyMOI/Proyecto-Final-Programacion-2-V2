#include "StaticLocalLoader.h"
#include "Registro.h"
#include <iostream>
#include "MilitarTest.h"

using namespace std;

void executeTests()
{
    MilitarTest::testOfficerCanBeRegistered();
    MilitarTest::testSubOfficerCanBeRegistered();
    MilitarTest::testSoldierCanBeRegistered();
    MilitarTest::testPreMilitaryCanBeRegistered();
    MilitarTest::testGrenadeLauncherCanBeRegistered();
    MilitarTest::testShowMilitaryMemberByRank();
    MilitarTest::testMilitaryMemberIsSuitable();
}

int main()
{
    LocalLoader* loader = new StaticLocalLoader();

    Registro registro(loader);
    registro.run();

    //Descomentar la siguiente linea de codigo para correr todos los tests
    executeTests();

    return 0;
}