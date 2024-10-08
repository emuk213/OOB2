#ifndef STUD_H_INCLUDED
#define STUD_H_INCLUDED
#include "MyLib2.h"

struct Stud {
	string vardas, pavarde, kategorija;
	vector <int> nd;
	int egz;
	double galutinisVid, galutinisMed;
};

void input(Stud& Lok);
void readStudTxt(const string& failoVardas, vector <Stud>& studentai);
double skaiciuotiNdVid(const vector <int>& nd);
double skaiciuotiNdMed(vector <int>& nd);
void skaiciuotiGalutiniBala(Stud& Lok);
void outputVid(Stud Lok);
void outputMed(Stud Lok);
void clean(Stud& Lok);
void kurti_faila(const string& failas, int eil);
//void outputTxt(const vector <Stud>& studentai);

#endif // STUD_H_INCLUDED

