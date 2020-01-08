//----------------COUPE-------------

#include "Coupe.h"

#include <iostream>

Coupe::Coupe(int nr_usi, double pret, string nume) :Masina(pret, nume) {
    this->nr_usi = nr_usi;
}
Coupe::Coupe(const Coupe& from)
{
    this->pret = from.pret;
    this->nume = from.nume;
    this->nr_usi = from.nr_usi;
}

Coupe Coupe:: operator =(const Coupe &obj) {
    //pret = obj.pret;
    //nume = obj.nume;

    Masina::operator=(obj);
    nr_usi = obj.nr_usi;

    return *this;
}

void Coupe:: afisare() {
    Masina::afisare();
    cout << "Nr. usi: " << nr_usi << endl;// << "Pret: " << pret << endl << "Nume: " << nume << endl;
}

//Coupe in
istream& operator >>(istream& in, Coupe& obj) {

    in >> (Masina&)obj;
    int nr_usi;
    cout << "Nr usi\n";
    in >> nr_usi;
    obj.nr_usi = nr_usi;
    return in;
}

