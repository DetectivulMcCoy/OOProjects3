
#pragma once

#include "Masina.h"
#include <string>

using namespace std;

//--------------HOT-HATCH-----------
class Hot_hatch:public Masina{
private:
    string tip_motor;
public:
    Hot_hatch() :Masina() { };
    Hot_hatch(string tip_motor, double pret, string nume);
    Hot_hatch(const Hot_hatch& from);
    ~Hot_hatch() {
    tip_motor.clear();
    }
    friend istream& operator >>(istream& in, Hot_hatch &obj);
    Hot_hatch operator =(const Hot_hatch &obj);
    void afisare();
};

