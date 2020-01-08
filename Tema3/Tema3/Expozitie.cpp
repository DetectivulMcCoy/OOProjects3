//-------------------EXPOZITIE------------

#include "Expozitie.h"

#include <iostream>

template <typename T>
Expozitie<T>::Expozitie()
{
		nr_total_masini = 0;
		masini.clear();
}

template <typename T>
Expozitie<T>::Expozitie(int nr_total_masini) : nr_total_masini(nr_total_masini)
{
     for (int i = 0; i < nr_total_masini; i++)
	 {
         T masina;
         cin >> masina;
         masini.push_back(make_pair(masina, -1));
     }
}

template <typename T>
Expozitie<T>::Expozitie(const Expozitie& from)
{ 
	this->masini = from.masini;
	this->nr_total_masini = from.nr_total_masini;
}

template <typename T>
Expozitie<T> Expozitie<T>:: operator =(const Expozitie& from)
{
    masini = from.masini;
	nr_total_masini = from.nr_total_masini;

    return *this;
}

template <typename T>
void Expozitie<T>::insert(const T &obj)
{
   nr_total_masini ++;
   masini.push_back(make_pair(obj, -1));
}

template <typename T>
void Expozitie<T>::afis()
{
    for (int i = 0; i < nr_total_masini; i++)
	{
      cout << "Masina: " << i+1 << endl;
       masini[i].first.afisare();
    }
}