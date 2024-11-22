#ifndef STUD_H_INCLUDED
#define STUD_H_INCLUDED
#include "MyLib3.h"

class Stud {
private:
	string vardas_, pavarde_;
	vector <int> nd_;
	int egz_;
	double galutinisVid_, galutinisMed_;
	
public:
	Stud() : egz_(0), galutinisVid_(0), galutinisMed_(0), vardas_(""), pavarde_("") { }
	Stud(istream& is);
	istream& readStudent(istream&);

	inline string vardas() const { return vardas_; }
	inline string pavarde() const { return pavarde_; }
	inline double galutinisVid() const { return galutinisVid_; }
	inline double galutinisMed() const { return galutinisMed_; }
	void input();
	void skaiciuotiGalutiniBala();
	void clean();
	void setVardas(const string& vardas) {vardas_ = vardas;}
	void setPavarde(const string& pavarde) {pavarde_ = pavarde;}
	void setNd(const vector<int>& nd) {nd_ = nd;}
	void setEgz(int egz) {egz_ = egz;}

	~Stud() { }
};

void readStudTxt(const string& failoVardas, vector<Stud>& studentai);

static double skaiciuotiNdVid(const vector <int>& nd);
static double skaiciuotiNdMed(vector <int>& nd);

void output(const vector <Stud>& vector1, int a);
void kurti_faila(const string& failas, int eil);
void isvedimas(const vector<Stud>& vec, const string& failoPav);

void kategorijos3(vector<Stud>& vector1, vector<Stud>& beta);

bool lygintiVardas(const Stud& a, const Stud& b);
bool lygintiPavarde(const Stud& a, const Stud& b);
bool lygintiGalutinis(const Stud& a, const Stud& b);
void sortByChoice(vector<Stud>& vec, int b);

#endif //STUD_H_INCLUDED

