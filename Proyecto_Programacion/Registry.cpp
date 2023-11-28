#include "Registry.h"
#include <fstream>
#include <conio.h>

using namespace std;

Registry::Registry(LocalLoader* loader)
{
    this->loader = loader;
    this->officers = this->loader->loadOfficers();
    this->subOfficers = this->loader->loadSubOfficers();
    this->soldiers = this->loader->loadSoldiers();
    this->preMilitaries = this->loader->loadPreMilitaries();
}

Registry::~Registry()
{
    for (Officer* officer : officers)
    {
        delete officer;
    }
    for (SubOfficer* subOfficer : subOfficers)
    {
        delete subOfficer;
    }
    for (Soldier* soldier : soldiers)
    {
        delete soldier;
    }
    for (PreMilitary* preMilitary : preMilitaries)
    {
        delete preMilitary;
    }
}

void Registry::run()
{
    LocalLoader* loader = new TxtLocalLoader();
    Registry* registry = new Registry(loader);

    int option;
    do
    {
        system("cls");
        cout << "************* MILITARY AND ARMAMENT RECORD ***************************" << endl;
        cout << "* 1. Register Officer                                                  *" << endl;
        cout << "* 2. Register Subfficer                                                *" << endl;
        cout << "* 3. Register Soldier                                                  *" << endl;
        cout << "* 4. Register Premilitary                                              *" << endl;
        cout << "* 5. Show personnel by rank                                            *" << endl;
        cout << "* 6. Show fit personnel                                                *" << endl;
        cout << "* 7. Show unfit personnel                                              *" << endl;
        cout << "* 8. Promote Officer                                                   *" << endl;
        cout << "* 9. Promote Subfficer                                                 *" << endl;
        cout << "* 10. Promote Soldier                                                  *" << endl;
        cout << "* 11. Show all personnel                                               *" << endl;
        cout << "* 12. Register Weapon                                                  *" << endl;
        cout << "* 13. Register Grenade Launcher                                        *" << endl;
        cout << "* 14. Load and display data from the soldiers file                     *" << endl;
        cout << "* 15. Load and display data from the officers file                     *" << endl;
        cout << "* 16. Load and display data from the subofficers file                  *" << endl;
        cout << "* 17. Load and display data from the premilitaries file                *" << endl;
        cout << "* 18. Show soldier's data (polymorphism)                               *" << endl;
        cout << "* 0. Exit                                                              *" << endl;
        cout << "************************************************************************" << endl;
        cout << "Select an option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            system("cls");
            registerOfficer();
            system("pause");
            break;
        case 2:
            system("cls");
            registerSubOfficer();
            system("pause");
            break;
        case 3:
            system("cls");
            registerSoldier();
            system("pause");
            break;
        case 4:
            system("cls");
            registerPreMilitary();
            system("pause");
            break;
        case 5:
            system("cls");
            showPersonnelByRank();
            system("pause");
            break;
        case 6:
            system("cls");
            showSuitablePersonnel();
            system("pause");
            break;
        case 7:
            system("cls");
            showNonSuitablePersonnel();
            system("pause");
            break;
        case 8:
            system("cls");
            promoteOfficer();
            system("pause");
            break;
        case 9:
            system("cls");
            promoteSubOfficer();
            system("pause");
            break;
        case 10:
            system("cls");
            promoteSoldier();
            system("pause");
            break;
        case 11:
            system("cls");
            showPersonnel();
            system("pause");
            break;
        case 12:
            system("cls");
            registerWeapon();
            system("pause");
            break;
        case 13:
            system("cls");
            registerGrenadeLauncher();
            system("pause");
            break;
        case 14:
            system("cls");
            cout << "*********SOLDIERS**************" << endl;
            loadDataFromFile("Soldiers.txt");

            system("pause");
            break;
        case 15:
            system("cls");
            cout << "*********OFFICERS**************" << endl;
            loadDataFromFile("Officers.txt");

            system("pause");
            break;
        case 16:
            system("cls");
            cout << "*********SUBOFFICERS**************" << endl;
            loadDataFromFile("SubOfficers.txt");

            system("pause");
            break;
        case 17:
            system("cls");
            cout << "*********PREMILITARIES**************" << endl;
            loadDataFromFile("PreMilitaries.txt");

            system("pause");
            break;
        case 18:
            system("cls");
            cout << "*********Personnel**************" << endl;
            //   cout << "Number of available personnel: " << militaryBase.countAvailablePersonnel() << endl;
            system("pause");
            break;
        case 0:
            system("cls");
            cout << "Exiting the program." << endl;
            break;
        default:
            system("cls");
            cout << "Invalid option. Please select a valid option." << endl;
            system("pause");
        }
    } while (option != 0);
}

void Registry::loadDataFromFile(const string& fileName)
{
    ifstream file(fileName);

    if (!file.is_open())
    {
        cout << "Error opening file: " << fileName << endl;
        return;
    }

    string type;
    while (file >> type)
    {
        if (type == "Officer")
        {
            string name, surname, placeOfResidence, officerRank;
            int age, suitable;

            file >> name >> surname >> age >> placeOfResidence >> suitable >> officerRank;
            Officer* officer = new Officer(name, surname, age, placeOfResidence, suitable, officerRank);
            officers.push_back(officer);
        }
        else if (type == "NoncommissionedOfficer")
        {
            string name, surname, placeOfResidence, subOfficerRank;
            int age, suitable;

            file >> name >> surname >> age >> placeOfResidence >> suitable >> subOfficerRank;
            SubOfficer*subOfficer = new SubOfficer(name, surname, age, placeOfResidence, suitable, subOfficerRank);
            subOfficers.push_back(subOfficer);
        }
        else if (type == "Soldier")
        {
            string name, surname, placeOfResidence, soldierRank;
            int age, suitable;

            file >> name >> surname >> age >> placeOfResidence >> suitable >> soldierRank;
            Soldier* soldier = new Soldier(name, surname, age, placeOfResidence, suitable, soldierRank);
            soldiers.push_back(soldier);
        }
        else if (type == "Premilitary")
        {
            string name, surname, placeOfResidence;
            int age, suitable;

            file >> name >> surname >> age >> placeOfResidence >> suitable;
            PreMilitary* premilitary = new PreMilitary(name, surname, age, placeOfResidence, suitable, "Without_Rank");
            preMilitaries.push_back(premilitary);
        }
        else
        {
            cout << type << endl;
        }
    }
    file.close();
}

void Registry::registerOfficer() // SECTION 1
{
    string name, surname, placeOfResidence, officerRank, resp;
    int age;
    bool suitable;

    cout << "Name: ";
    cin >> name;
    cout << "Surname: ";
    cin >> surname;
    cout << "Age: ";
    cin >> age;
    cout << "Place of Residence: ";
    cin >> placeOfResidence;

    do
    {
        cout << "Is fit? (y/n): ";
        cin >> resp;
    } while (validateResponse(resp) == false);
    suitable = defineSuitable(resp);

    do
    {
        cout << "Rank (Sublieutenant, Lieutenant, Captain, Major, Lieutenant_Colonel, Colonel, Brigadier_General, Divisional_General, Army_General): ";
        cin >> officerRank;
    } while (validateRank(officerRank, availableOfficerRanks) == false);
    Officer* officer = new Officer(name, surname, age, placeOfResidence, suitable, officerRank);
    officers.push_back(officer);
}

void Registry::registerSubOfficer() // SECTION 2
{
    string name, surname, placeOfResidence, subOfficerRank, resp;
    int age;
    bool suitable;

    cout << "Name: ";
    cin >> name;
    cout << "Surname: ";
    cin >> surname;
    cout << "Age: ";
    cin >> age;
    cout << "Place of Residence: ";
    cin >> placeOfResidence;

    do
    {
        cout << "Is fit? (y/n): ";
        cin >> resp;
    } while (validateResponse(resp) == false);
    suitable = defineSuitable(resp);

    do
    {
        cout << "Rank (Sergeant, Noncommissioned_Officer, Senior_Noncommissioned_Officer, Master_Noncommissioned_Officer): ";
        cin >> subOfficerRank;
    } while (validateRank(subOfficerRank, availableSubOfficerRanks) == false);
    SubOfficer* subOfficer = new SubOfficer(name, surname, age, placeOfResidence, suitable, subOfficerRank);
    subOfficers.push_back(subOfficer);
}


void Registry::registerSoldier()// SECTION 3
{
    string name, lastName, residence, soldierRank, response;
    int age;
    int suitable;

    cout << "Name: ";
    cin >> name;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Age: ";
    cin >> age;
    cout << "Residence: ";
    cin >> residence;

    do
    {
        cout << "Is eligible? (y/n): ";
        cin >> response;
    } while (validateResponse(response) == false);
    suitable = defineSuitable(response);

    do
    {
        cout << "Soldier Type (Corporal, Sergeant, Private): ";
        cin >> soldierRank;
    } while (validateRank(soldierRank, availableSoldierRanks) == false);
    Soldier* soldier = new Soldier(name, lastName, age, residence, suitable, soldierRank);
    soldiers.push_back(soldier);
}

void Registry::registerPreMilitary()// SECTION 4
{
    string name, lastName, residence, response;
    int age;
    int suitable;

    cout << "Name: ";
    cin >> name;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Age: ";
    cin >> age;
    cout << "Residence: ";
    cin >> residence;

    do
    {
        cout << "Is eligible? (y/n): ";
        cin >> response;
    } while (validateResponse(response) == false);
    suitable = defineSuitable(response);

    PreMilitary* preMilitary = new PreMilitary(name, lastName, age, residence, suitable, "No_Rank");
    preMilitaries.push_back(preMilitary);
}

void Registry::showPersonnelByRank()// SECTION 5
{
    string rankToFind;
    showRanks();
    do
    {
        cout << "Enter the rank you want to search: ";
        cin >> rankToFind;
    } while (validateRank(rankToFind, availableRanks) == false);

    if (officers.empty())
    {
        cout << "No officers registered" << endl;
    }
    else
    {
        cout << endl;
        for (Officer* officer : officers)
        {
            if (officer->getRank() == rankToFind)
            {
                officer->showInfo();
                cout << endl;
            }
        }
    }
    if (subOfficers.empty())
    {
        cout << "No subOfficers registered" << endl;
    }
    else
    {
        cout << endl;
        for (SubOfficer* subOfficer : subOfficers)
        {
            if (subOfficer->getRank() == rankToFind)
            {
                subOfficer->showInfo();
                cout << endl;
            }
        }
    }
    if (soldiers.empty())
    {
        cout << "No soldiers registered" << endl;
    }
    else
    {
        cout << endl;
        for (Soldier* soldier : soldiers)
        {
            if (soldier->getRank() == rankToFind)
            {
                soldier->showInfo();
                cout << endl;
            }
        }
    }
    if (preMilitaries.empty())
    {
        cout << "No preMilitaries registered" << endl;
    }
    else
    {
        cout << endl;
        for (PreMilitary* preMilitary : preMilitaries)
        {
            if (preMilitary->getRank() == rankToFind)
            {
                preMilitary->showInfo();
                cout << endl;
            }
        }
    }
}

void Registry::showSuitablePersonnel()// SECTION 6
{
    cout << "************* OFFICERS **************" << endl;
    for (Officer* officer : officers)
    {
        if (officer->isSuitable() == 1)
        {
            officer->showInfo();
            cout << endl;
        }

    }
    cout << "************* SUBOFFICERS **************" << endl;
    for (SubOfficer* subOfficer : subOfficers)
    {
        if (subOfficer->isSuitable() == 1)
        {
            subOfficer->showInfo();
            cout << endl;
        }

    }
    cout << "************* SOLDIERS **************" << endl;
    for (Soldier* soldier : soldiers)
    {
        if (soldier->isSuitable() == 1)
        {
            soldier->showInfo();
            cout << endl;
        }

    }
    cout << "************* PREMILITARIES **************" << endl;
    for (PreMilitary* preMilitary : preMilitaries)
    {
        if (preMilitary->isSuitable() == 1)
        {
            preMilitary->showInfo();
            cout << endl;
        }

    }
}

void Registry::showNonSuitablePersonnel()// SECTION 7
{
    cout << "************* OFFICERS **************" << endl;
    for (Officer* officer : officers)
    {
        if (officer->isSuitable() == 0)
        {
            officer->showInfo();
            cout << endl;
        }

    }
    cout << "************* SUBOFFICERS **************" << endl;
    for (SubOfficer* subOfficer : subOfficers)
    {
        if (subOfficer->isSuitable() == 0)
        {
            subOfficer->showInfo();
            cout << endl;
        }

    }
    cout << "************* SOLDIERS **************" << endl;
    for (Soldier* soldier : soldiers)
    {
        if (soldier->isSuitable() == 0)
        {
            soldier->showInfo();
            cout << endl;
        }

    }
    cout << "************* PREMILITARIES **************" << endl;
    for (PreMilitary* preMilitary : preMilitaries)
    {
        if (preMilitary->isSuitable() == 0)
        {
            preMilitary->showInfo();
            cout << endl;
        }
    }
}

void Registry::promoteOfficer()// SECTION 8
{
    string newRank, name;
    if (!officers.empty())
    {
        for (Officer* officer : officers)
        {
            officer->showInfo();
        }
        cout << "Enter the name of the officer to promote: ";
        cin >> name;
        for (Officer* officer : officers)
        {
            if (officer->getName() == name)
            {
                showRanks();
                cout << "Enter the new rank: ";
                cin >> newRank;
                validateRank(newRank, availableOfficerRanks);
                officer->setRank(newRank);
                cout << officer->getName() << " was promoted successfully" << endl;
                continue;
            }
        }
    }
    else
    {
        cout << "No officers registered yet" << endl;
    }
}

void Registry::promoteSubOfficer()// SECTION 9
{
    string newRank, name;
    if (!subOfficers.empty())
    {
        for (SubOfficer* subOfficer : subOfficers)
        {
            subOfficer->showInfo();
        }
        cout << "Enter the name of the subOfficer to promote: ";
        cin >> name;
        for (SubOfficer* subOfficer : subOfficers)
        {
            if (subOfficer->getName() == name)
            {
                showRanks();
                cout << "Enter the new rank: ";
                cin >> newRank;
                validateRank(newRank, availableSubOfficerRanks);
                subOfficer->setRank(newRank);
                cout << subOfficer->getName() << " was promoted successfully" << endl;
                continue;
            }
        }
    }
    else
    {
        cout << "No subOfficers registered yet" << endl;
    }
}

void Registry::promoteSoldier()// SECTION 10
{
    string newRank, name;
    if (!soldiers.empty())
    {
        for (Soldier* soldier : soldiers)
        {
            soldier->showInfo();
        }
        cout << "Enter the name of the soldier to promote: ";
        cin >> name;
        for (Soldier* soldier : soldiers)
        {
            if (soldier->getName() == name)
            {
                showRanks();
                cout << "Enter the new rank: ";
                cin >> newRank;
                validateRank(newRank, availableSoldierRanks);
                soldier->setRank(newRank);
                cout << soldier->getName() << " was promoted successfully" << endl;
                continue;
            }
        }
    }
    else
    {
        cout << "No soldiers registered yet" << endl;
    }
}

void Registry::showPersonnel()// SECTION 11
{
    cout << "************* OFFICERS **************" << endl;
    for (Officer* officer : officers)
    {
        officer->showInfo();
        cout << endl;
    }
    cout << "************* SUBOFFICERS **************" << endl;
    for (SubOfficer* subOfficer : subOfficers)
    {
        subOfficer->showInfo();
        cout << endl;
    }
    cout << "************* SOLDIERS **************" << endl;
    for (Soldier* soldier : soldiers)
    {
        soldier->showInfo();
        cout << endl;
    }
    cout << "************* PREMILITARIES **************" << endl;
    for (PreMilitary* preMilitary : preMilitaries)
    {
        preMilitary->showInfo();
        cout << endl;
    }
}

bool Registry::validateResponse(string response)
{
    bool aux = false;

    vector<string> availableResponses = { "Y", "y", "Yes", "yes", "YES", "N", "n", "No", "no", "NO" };
    for (string res : availableResponses)
    {
        if (response == res)
        {
            aux = true;
            continue;
        }
        if (response == res)
        {
            aux = true;
            continue;
        }
    }
    if (aux == true)
    {
        cout << "Correct option" << endl;
    }
    else
    {
        cout << "Incorrect option, try again" << endl;
    }
    return aux;
}

int Registry::defineSuitable(string response)
{
    if (response == "Y" || response == "y" || response == "Yes" || response == "yes")
    {
        return 1;
    }
    if (response == "N" || response == "n" || response == "No" || response == "no")
    {
        return 0;
    }
}

bool Registry::validateRank(string rankB, vector<string> ranksB)
{
    bool aux = false;
    for (string rank : ranksB)
    {
        if (rankB == rank)
        {
            aux = true;
            continue;
        }
    }
    if (aux == true)
    {
        cout << "Correct option" << endl;
    }
    else
    {
        cout << "Incorrect option, try again" << endl;
    }
    return aux;
}

void Registry::showRanks()
{
    cout << endl << "       Military ranks ordered from highest to lowest hierarchy:" << endl
        << "********** AVAILABLE RANKS **********" << endl
        << endl << "OFFICERS:" << endl
        << "- Army_General" << endl
        << "- Brigadier_General" << endl
        << "- Division_General" << endl
        << "- Colonel" << endl
        << "- Lieutenant_Colonel" << endl
        << "- Major" << endl
        << "- Captain" << endl
        << "- Lieutenant" << endl
        << "- Sublieutenant" << endl
        << endl << "SUBOFFICERS:" << endl
        << "- Chief_Subofficer" << endl
        << "- Senior_Subofficer" << endl
        << "- Subofficer" << endl
        << "- Sergeant" << endl
        << endl << "SOLDIERS:" << endl
        << "- Corporal" << endl
        << "- Sergeant" << endl
        << "- Private" << endl
        << endl << "PREMILITARIES" << endl
        << "- No_rank" << endl << endl;
}

void Registry::registerArmoredVehicle() {
    string name, origin, type;
    int serialNumber;

    cout << "Name: ";
    cin >> name;
    cout << "Origin: ";
    cin >> origin;
    cout << "Type: ";
    cin >> type;
    cout << "Serial Number: ";
    cin >> serialNumber;

    ArmoredVehicle* armoredVehicle = new ArmoredVehicle(name, origin, type, serialNumber);
    armaments.push_back(armoredVehicle);
}

void Registry::registerWeapon() {
    string name, type, caliber, origin;
    int serialNumber;

    cout << "Name: ";
    cin >> name;
    cout << "Type: ";
    cin >> type;
    cout << "Caliber: ";
    cin >> caliber;
    cout << "Origin: ";
    cin >> origin;
    cout << "Serial Number: ";
    cin >> serialNumber;

    Armament* armament = new Armament(name, type, caliber, origin, serialNumber);
    armaments.push_back(armament);
}

void Registry::registerGrenadeLauncher() {
    string name, type, caliber, origin;
    int serialNumber;

    cout << "Name: ";
    cin >> name;
    cout << "Type: ";
    cin >> type;
    cout << "Caliber: ";
    cin >> caliber;
    cout << "Origin: ";
    cin >> origin;
    cout << "Serial Number: ";
    cin >> serialNumber;

    GrenadeLauncher* grenadeLauncher = new GrenadeLauncher(name, type, caliber, origin, serialNumber);
    armaments.push_back(grenadeLauncher);
}