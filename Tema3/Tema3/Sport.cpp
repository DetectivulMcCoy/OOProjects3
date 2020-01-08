//-------------------SPUPER-SPORT------------

#include "Sport.h"

#include <iostream>

Sport::Sport(string tip_plata, double pret, string nume) :Masina(pret, nume) {
    this->tip_plata = tip_plata;
}
Sport::Sport(const Sport& from)
{
    this->pret = from.pret;
    this->nume = from.nume;
    this->tip_plata = from.tip_plata;
}
Sport Sport:: operator =(const Sport &obj) {
    //pret = obj.pret;
    //nume = obj.nume;
    Masina::operator=(obj);
    tip_plata = obj.tip_plata;

    return *this;
}

void Sport::afisare() {
    Masina::afisare();
    cout << "Tip plata: " << tip_plata << endl;// << "Pret: " << pret << endl << "Nume: " << nume << endl;
}

//Sport in
istream& operator >>(istream& in, Sport& obj) {
    
    in >> (Masina&)obj;
    string tip_plata;
    cout << "Tip plata\n";
    in >> tip_plata;
    obj.tip_plata = tip_plata;
    return in;
}