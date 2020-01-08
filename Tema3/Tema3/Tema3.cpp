//tema 3
//problema 5

#include <iostream>

#include "Masina.h"
#include "Coupe.h"
#include "Hatch.h"
#include "Cabrio.h"
#include "Sport.h"
//#include "Expozitie.h"
#include "ExpozitieSport.h"

using namespace std;

void menu()
{
    cout << "1 - Adaugati o noua masina." << std::endl;
    cout << "2 - Cumparati o masina sport." << std::endl;
    cout << "3 - Detaliile expozitiei." << std::endl;
    cout << "4 - Detaliile vanzarilor." << std::endl;
    cout << "5 - Iesire." << std::endl;
}

void adaugare_masina(Expozitie<Sport> & expozitie)
{
    cout << "Alegeti tipul de masina. Tipul Supersport se va adauga in expozitie.\nCelelalte tipuri vor afisa datele." << endl;
    cout << "1 - Coupe" << endl;
    cout << "2 - Hot-Hatch" << endl;
    cout << "3 - Cabrio" << endl;
    cout << "4 - Supersport" << endl;
    cout << "Selectati: ";
    int command;
    cin >> command;
    if (command < 1 || command > 4) {
        cout << "Exceptie, comanda trebuie sa fie intre 1 si 5" << endl;
        return;
    }
    switch(command) {
        case 1: {
            Coupe A;
            cin >> A;
            cout << "Masina nu se poate adauga la o expozitie sport:" << endl;
            A.afisare();
            break;
        }
        case 2: {
            Hot_hatch A;
            cin >> A;
            cout << "Masina nu se poate adauga la o expozitie sport:" << endl;
            A.afisare();
            break;
        }
        case 3: {
            Cabrio A;
            cin >> A;
            cout << "Masina nu se poate adauga la o expozitie sport:" << endl;
            A.afisare();
            break;
        }
        case 4: {
            Sport A;
            cin >> A;
            expozitie.insert(A);
            cout << "Masina a fost adaugata in expozitie:" << endl;
            A.afisare();
            break;
        }
        default:
            break;
    }
    cout << "*********************************************" << endl;
}

void cumpara_masina(Expozitie<Sport> & expozitie) {
    Sport A;
    cin >> A;
    expozitie -= A;
    cout << "Masina a fost vanduta:" << endl;
    A.afisare();
    cout << "*********************************************" << endl;
}

void detalii_expozitie(Expozitie<Sport> & expozitie) {
    expozitie.afis_stoc();
    cout << "*********************************************" << endl;
}

void detalii_vanzari(Expozitie<Sport> & expozitie) {
    expozitie.afis_vandute();
    cout << "*********************************************" << endl;
}

void test()
{
    cout << "----------------COUPE-------------\n";
    Coupe Q(4,3000.1,"Coupe test");
    Coupe A, B;
    cin >> A;
    B = A;
    B.afisare();
    
    cout << "--------------HOT-HATCH-----------\n";
    Hot_hatch C, D;
    cin >> C;
    D = C;
    D.afisare();
    
    cout << "----------------CABRIO-------------\n";
    Cabrio E, F;
    cin >> E;
    F = E;
    E.afisare();
    
    cout << "-------------------SPUPER-SPORT----\n";
    Sport G, H;
    cin >> G;
    H = G;
    H.afisare();
 }

void test1()
{
    Expozitie<Sport> expozitie;
    while(true) {
        menu();
        cout << "Selectati comanda dorita: " << std::endl;
        int command;
        cin >> command;
        if (command < 1 || command > 5) {
            cout << "Exceptie, comanda trebuie sa fie intre 1 si 5" << endl;
            cout << "*********************************************" << endl;
            continue;
        }
        switch(command) {
            case 1: {
                adaugare_masina(expozitie);
                break;
            }
            case 2: {
                cumpara_masina(expozitie);
                break;
            }
            case 3: {
                detalii_expozitie(expozitie);
                break;
            }
            case 4: {
                detalii_vanzari(expozitie);
                break;
            }
            default:
                break;
        }
        if (command == 5) break;
    }
}

int main()
{
    //test();
	test1();

    return 0;
}