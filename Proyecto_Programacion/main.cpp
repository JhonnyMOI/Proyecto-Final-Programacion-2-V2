#include "StaticLocalLoader.h"
#include "Registry.h"
#include <iostream>
#include "MilitaryTest.h"

using namespace std;

void executeTests()
{
    MilitaryTest::testOfficerCanBeRegistered();
    MilitaryTest::testSubOfficerCanBeRegistered();
    MilitaryTest::testSoldierCanBeRegistered();
    MilitaryTest::testPreMilitaryCanBeRegistered();
    MilitaryTest::testGrenadeLauncherCanBeRegistered();
    MilitaryTest::testShowMilitaryMemberByRank();
    MilitaryTest::testMilitaryMemberIsSuitable();
}

int main()
{
    LocalLoader* loader = new StaticLocalLoader();

    Registry registry(loader);
    registry.run();

    // Descomentar la siguiente linea de codigo para correr todos los tests
    executeTests();

    return 0;
}