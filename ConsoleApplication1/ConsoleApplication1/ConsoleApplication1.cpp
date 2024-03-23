#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

struct Carti {

    unsigned an;
    char nume[20];
    char autor[20];
    unsigned vechime;
};
class Carte
{
public:
    unsigned an;
    char nume[20];
    char autor[20];
    unsigned vechime;
    Carte(unsigned an1, char* num1, char* autor1)
    {
        an = an1;
        strcpy_s(nume, 20, num1);
        strcpy_s(autor, 20, autor1);
    }
    Carte() {}
    unsigned arata_an() { return this->an; }
    char* arata_nume() { return this->nume; }
};

int main()
{
    Console::WriteLine("Introduceti numarul de carti: ");
    int nr_carti;
    cin >> nr_carti;
    Carte* carti = new Carte[nr_carti];
    for (int i = 0; i < nr_carti; i++) {
        Console::WriteLine("Introduceti titlul cartii {0}: ", i + 1);
        char nume[20];
        cin >> nume;
        strcpy_s(carti[i].nume, 20, nume);
        Console::WriteLine("Introduceti numele autorului {0}: ", i + 1);
        char autor[20];
        cin >> autor;
        strcpy_s(carti[i].autor, 20, autor);
        Console::WriteLine("Introduceti anul aparitiei {0}: ", i + 1);
        unsigned an;
        cin >> an;
        carti[i].an = an;
        carti[i].vechime = 2024 - an;
    }
    Console::WriteLine("Afisam titlul cartilor, numele autorilor si anul aparitiei: ");
    for (int i = 0; i < nr_carti; i++) {
        cout << carti[i].nume << "\t" << carti[i].autor << "\t" << carti[i].an << "\t" << carti[i].vechime << endl;
    }
    Console::ReadKey();

}




/*//Aplicatie care afiseaza nume si varsta unei persoane

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
}*/
