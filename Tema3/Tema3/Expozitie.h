
#pragma once

#include <vector>
#include <algorithm>
#include <list>

using namespace std;

//-------------------Expozitie------------
template <typename T>
class Expozitie {
    int nr_total_masini;
    vector<pair<T, double> > masini;
public:
	Expozitie();
    Expozitie(int nr_total_masini);
	Expozitie(const Expozitie& from);
    ~Expozitie() { masini.clear(); };

	Expozitie operator =(const Expozitie &from);
    void insert(const T &obj);
    void afis();
};
