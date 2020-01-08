//--------------HOT-HATCH-----------

#include "Hatch.h"

#include <iostream>

Hot_hatch::Hot_hatch(const Hot_hatch& from)
{
    this->pret = from.pret;
    this->nume = from.nume;
    this->tip_motor = from.tip_motor;
}

Hot_hatch::Hot_hatch(string tip_motor, double pret, string nume) :Masina(pret, nume) {
    this->tip_motor = tip_motor;
}
Hot_hatch Hot_hatch:: operator =(const Hot_hatch &obj) {
    //pret = obj.pret;
    //nume = obj.nume;
    Masina::operator=(obj);
    tip_motor = obj.tip_motor;

    return *this;
}

void Hot_hatch::afisare() {
    Masina::afisare();
    cout << "Tip Motor: " << tip_motor << endl;// << "Pret: " << pret << endl << "Nume: " << nume << endl;
}

//Hatch in
istream& operator >>(istream& in, Hot_hatch& obj) {
    in >> (Masina&)obj;
    string tip_motor;
    cout << "Tip motor\n";
    in >> tip_motor;
    obj.tip_motor = tip_motor;
    return in;
}
