//---------------MASINA-------------

#include "Masina.h"

#include <iostream>

Masina::Masina() {
    //cout << "Constructor Masina!\n";
}

Masina::Masina(double pret, string nume) {
    this->pret = pret;
    this->nume = nume;
}

Masina::Masina(const Masina& from)
{
    this->pret = from.pret;
    this->nume = from.nume;
}

Masina::~Masina() {
    pret = -1;
    nume.clear();
}

Masina Masina::operator=(const Masina& obj) {
    pret = obj.pret;
    nume = obj.nume;

    return *this;
}
void Masina::afisare() {
    cout << "Pret: " << pret << endl << "Nume: " << nume << endl;
}

istream& operator >>(istream& in, Masina& obj) {
    double pret;
    string nume;
    cout << "Pret, nume\n";
    in >> pret >> nume;
    obj.pret = pret;
    obj.nume = nume;
    return in;
}
