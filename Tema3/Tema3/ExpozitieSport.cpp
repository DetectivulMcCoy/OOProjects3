//-------------------EXPOZITIE------------

#include "ExpozitieSport.h"

#include <iostream>

Expozitie<Sport>::Expozitie()
{
  nr_masini_sport = nr_masini_vandute = 0;
}

Expozitie<Sport>::Expozitie(const Expozitie<Sport>& from)
{
  nr_masini_sport = from.nr_masini_sport;
  nr_masini_vandute = from.nr_masini_vandute;
  stoc = from.stoc;
  vandute = from.vandute;
}

Expozitie<Sport>::Expozitie(int nr_masini_sport, int nr_masini_vandute) : nr_masini_sport(nr_masini_sport), nr_masini_vandute(nr_masini_vandute)
{
    for (int i= 0; i < nr_masini_sport; ++i) {
        Sport masina; double pret;
        cin >> masina >> pret;
        stoc.push_back(make_pair(masina, pret));
    }

    for (int i=0; i< nr_masini_vandute; ++i) {
        Sport masina; double pret;
        cin >> masina >> pret;
        vandute.push_back(make_pair(masina, pret));
    }
}

Expozitie<Sport> Expozitie<Sport>:: operator =(const Expozitie& from)
{
    nr_masini_sport = from.nr_masini_sport;
    nr_masini_vandute = from.nr_masini_vandute;
    stoc = from.stoc;
    vandute = from.vandute;
    return *this;
}

void Expozitie<Sport>::insert(const Sport &obj)
{
    nr_masini_sport++;
    stoc.push_back(make_pair(obj, -1));
}

void Expozitie<Sport>::afis_stoc()
{
    try {
        if (nr_masini_sport == 0)	///EXCEPTIE AICI
            throw 1;
        else {
            int i = 0;
            for (std::list<pair<Sport, double> >::iterator it=stoc.begin(); it != stoc.end(); ++it) {
                cout << "Masina: " << i + 1 << endl;
                it->first.afisare();
                i++;
            }
        }
    }
    catch (int x) {
        cout << "Nu exista masini in stoc\n";
    }
}

void Expozitie<Sport>::afis_vandute()
{
    try {	///TRATAREA EXCEPTIILOR SI AICI
        if (nr_masini_vandute == 0)
            throw 2;
        else {
            int i = 0;
            for (std::list<pair<Sport, double> >::iterator it=vandute.begin(); it != vandute.end(); ++it) {
                cout << "Masina: " << i + 1 << endl;
                it->first.afisare();
                cout << "Pret de vanzare: " << it->second << endl;
                i++;
            }
        }
    }
    catch (int x) {
        cout << "NU exista masini vandute\n";
    }
}

Expozitie<Sport>& Expozitie<Sport>::operator -=(Sport &B)
{
    string name=B.get_nume();
    for (std::list<pair<Sport, double> >::iterator it=stoc.begin(); it != stoc.end(); ++it) {
        if (it->first.get_nume() == name) {
            vandute.push_back(make_pair(it->first, it->first.get_pret()));
            nr_masini_vandute ++;
            stoc.erase(it);
            nr_masini_sport --;
            break;
        }
    }
    return *this;
}