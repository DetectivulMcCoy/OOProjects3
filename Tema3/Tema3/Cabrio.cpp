//----------------CABRIO-------------

#include "Cabrio.h"

#include <iostream>

Cabrio::Cabrio(string tip_acoperis, double pret, string nume) :Masina(pret, nume) {
    this->tip_acoperis = tip_acoperis;
}
Cabrio::Cabrio(const Cabrio& from)
{
    this->pret = from.pret;
    this->nume = from.nume;
    tip_acoperis = from.tip_acoperis;
}

Cabrio Cabrio:: operator =(const Cabrio &obj) {
    //pret = obj.pret;
    //nume = obj.nume;
    Masina::operator=(obj);
    tip_acoperis = obj.tip_acoperis;

    return *this;
}

void Cabrio::afisare() {
    Masina::afisare();
    cout << "Tip acoperis: " << tip_acoperis << endl;// << "Pret: " << pret << endl << "Nume: " << nume << endl;
}

//Cabrio in
istream& operator >>(istream& in, Cabrio& obj) {

    in >> (Masina&)obj;

    string tip_acoperis;
    cout << "Tip acoperis\n";
    in >> tip_acoperis;
    obj.tip_acoperis = tip_acoperis;
    return in;
}