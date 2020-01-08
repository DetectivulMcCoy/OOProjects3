
#pragma once

#include "Masina.h"
#include <string>

using namespace std;

//------------CABRIO----------------
class Cabrio :public Masina {
private:
    string tip_acoperis;
public:
    Cabrio() :Masina() { };
    Cabrio(string tip_acoperis, double pret, string nume);
    Cabrio(const Cabrio& from);
    ~Cabrio() {
    tip_acoperis.clear();
    }
    Cabrio operator =(const Cabrio &obj);
    void afisare();
    friend istream& operator >>(istream& in, Cabrio& obj);
};