
#pragma once

#include "Masina.h"
#include <string>

using namespace std;

//-------------------SPUPER-SPORT------------
class Sport :public Masina {
private:
    string tip_plata;
public:
    Sport() :Masina() { };
    Sport(string tip_plata, double pret, string nume);
    Sport(const Sport& from);
    ~Sport() {
    tip_plata.clear();
    }
    friend istream& operator >>(istream& in, Sport &obj);
    Sport operator =(const Sport &obj);
    void afisare();
    string get_nume() {
        return nume;
    }
    double get_pret() {
        return pret;
    }
};
