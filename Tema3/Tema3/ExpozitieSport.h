
#pragma once

#include <vector>
#include <algorithm>
#include <list>


#include "Expozitie.h"
#include "Sport.h"

using namespace std;

//-------------------Expozitie Sport------------
template<>
class Expozitie<Sport> {
private:
    int nr_masini_sport;
    int nr_masini_vandute;
    list<pair<Sport, double> > stoc, vandute;
public:
    Expozitie();
	Expozitie(const Expozitie<Sport>& from);
	Expozitie(int nr_masini_sport, int nr_masini_vandute);
    ~Expozitie() 
    { 
        stoc.clear();
        vandute.clear();
    };

	Expozitie operator =(const Expozitie<Sport> &from);

    void insert(const Sport &obj);
    void afis_stoc();

    void afis_vandute();

    Expozitie& operator -=(Sport &B);
};