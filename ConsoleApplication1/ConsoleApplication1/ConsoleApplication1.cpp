//Aplicatie care afiseaza nume si varsta unei persoane

#include "pch.h"
#include <iostream>

using namespace System; //pt Visual Studio C++/CLI
using namespace std;

struct Persoana
{
    unsigned vs;
    char nume[20];
    char prenume[20];
};

class Pers
{
private:
    unsigned vs;
    char nume[20];
    char prenume[20];

public:
    //2 metode cu acelasi nume cu cel al clasei, adica Pers
    //o metoda cu params si una fara params
    Pers(unsigned vs1, char* num1, char* prenum1)
    {
        vs = vs1;
        //strcpy(nume, num1);
        //strcpy(prenume, prenum1);
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned arata_vs() { return this->vs; }
    char* arata_nume() { return this->nume; }


};

class Carti
{
private: 
    char nume_carte[20];
    char autor[20];
    unsigned anul_cartii;
    unsigned vechime{ 2024 - anul_cartii };

public:
    Carti(unsigned ancar1, unsigned vec1, char* numecar1, char* aut1)
    {
        anul_cartii = ancar1;
        vechime = vec1;
        strcpy_s(nume_carte, 20, numecar1);
        strcpy_s(autor, 20, aut1);
    }
    Carti() {}
    unsigned arata_anul_cartii() { return this->anul_cartii; }
    char* arata_autor() { return this->autor; }
};


int main()
{

    Console::WriteLine("Introduceti numarul de persoane: "); // specific VISUAL C++/CLI
    int nr_persoane;
    cin >> nr_persoane;
    Persoana* persoane = new Persoana[nr_persoane];

    for (int i = 0; i < nr_persoane; i++)
    {
        Console::WriteLine("Introduceti nume persoanei {0}", i + 1);
        char nume[20];
        cin >> nume;
        strcpy_s(persoane[i].nume, 20, nume);
        Console::WriteLine("Introduceti prenume persoanei {0}", i + 1);
        char prenume[20];
        cin >> prenume;
        Console::WriteLine("Introduceti varsta persoanei {0}", i + 1);
        unsigned vs;
        cin >> vs;
        persoane[i].vs = vs;
    }

    Console::WriteLine("Afisam numele persoanelor si varstele aferente: ");

    for (int i = 0; i < nr_persoane; i++)
    {
        cout << persoane[i].nume << "\t" << persoane[i].vs << endl;
    }

    //get_char()
    Console::ReadKey(); // specific Visual C++/CLI

    return 0;
}