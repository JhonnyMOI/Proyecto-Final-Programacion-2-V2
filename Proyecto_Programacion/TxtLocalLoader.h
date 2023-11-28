#pragma once
#include "LocalLoader.h"
#include <fstream>

class TxtLocalLoader : public LocalLoader {
public:
    TxtLocalLoader();
    ~TxtLocalLoader();

    std::vector<Oficial*> loadOficiales() ;
    std::vector<Suboficial*> loadSuboficiales() ;
    std::vector<Soldado*> loadSoldados() ;
    std::vector<Premilitar*> loadPremilitares() ;
};
