
#pragma once

#include <string>

using namespace std;

//---------------MASINA-------------
class Masina {
protected:
    double pret;
    string nume;
public:
    Masina();
    Masina(double pret, string nume);
    ~Masina();
    Masina(const Masina& from);
    Masina operator =(const Masina& obj);
    friend istream& operator>>(istream&, Masina&);
    virtual void afisare();
    
};
