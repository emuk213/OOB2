#ifndef STUD_H_INCLUDED
#define STUD_H_INCLUDED
#include "MyLib3.h"

struct Stud {
	string vardas, pavarde;
	vector <int> nd;
	int egz;
	double galutinisVid, galutinisMed;
};

void input(Stud& Lok);
void readStudTxt(const string& failoVardas, list<Stud>& studentai);
double skaiciuotiNdVid(const vector <int>& nd);
double skaiciuotiNdMed(vector <int>& nd);
void skaiciuotiGalutiniBala(Stud& Lok);
void output(const list <Stud>& list1, int a);
void clean(Stud& Lok);
void kurti_faila(const string& failas, int eil);
void isvedimas(list <Stud>& vec, const string& failoPav);
void kategorijos(list<Stud>& list1, list<Stud>& sigma, list<Stud>& beta);

void kategorijos2(list<Stud>& list1, list<Stud>& beta);

bool lygintiVardas(Stud& a, Stud& b);
bool lygintiPavarde(Stud& a, Stud& b);
bool lygintiGalutinis(Stud& a, Stud& b);
void sortByChoice(list<Stud>& vec, int b);

#endif // STUD_H_INCLUDED

