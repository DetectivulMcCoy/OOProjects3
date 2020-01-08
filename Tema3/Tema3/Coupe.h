
#pragma once

#include "Masina.h"
#include <string>

using namespace std;

//----------------COUPE-------------
class Coupe :public Masina {
private:
    int nr_usi;
public:
    Coupe() :Masina() {};
    Coupe(int nr_usi,double pret, string nume);
    Coupe(const Coupe& from);
    ~Coupe() {
    nr_usi = -1;
    };
    friend istream& operator >>(istream& in, Coupe &obj);
    Coupe operator =(const Coupe &obj);
    void afisare();
    double get_pret(){ return pret; }

};
