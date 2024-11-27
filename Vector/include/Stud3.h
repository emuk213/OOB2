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

	/*
	Stud(const Stud& op) : vardas_(op.vardas_), pavarde_(op.pavarde_), nd_(op.nd_), egz_(op.egz_),
		galutinisVid_(op.galutinisVid_), galutinisMed_(op.galutinisMed_) {}*/
	
	Stud(const Stud& op);
	
	//Stud(string, string, int, double, double);
	Stud(const Stud& c) {
		vardas_ = c.vardas_;
		pavarde_ = c.pavarde_;
		nd_ = c.nd_;
		egz_ = c.egz_;
		galutinisVid_ = c.galutinisVid_;
		galutinisMed_ = c.galutinisMed_;

	}
	Stud& operator=(const Stud& op) {
		if (this != &op) {  // Apsauga nuo savees priskyrimo
			vardas_ = op.vardas_;
			pavarde_ = op.pavarde_;
			nd_ = op.nd_;
			egz_ = op.egz_;
			galutinisVid_ = op.galutinisVid_;
			galutinisMed_ = op.galutinisMed_;
		}
		return *this;
	}

	
	Stud& operator=(const Stud& op);


	inline string vardas() const { return vardas_; }    // get'eriai, inline
	inline string pavarde() const { return pavarde_; }  // get'eriai, inline
	inline double galutinisVid() const { return galutinisVid_; }
	inline double galutinisMed() const { return galutinisMed_; }

	void input();
	void skaiciuotiGalutiniBala();
	void clean();
	void setVardas(const string& vardas) {vardas_ = vardas;}
	void setPavarde(const string& pavarde) {pavarde_ = pavarde;}
	void setNd(const vector<int>& nd) {nd_ = nd;}
	void setEgz(int egz) {egz_ = egz;}

	~Stud() = default;

	friend istream& operator>>(istream& in, Stud& student);
	friend ostream& operator<<(ostream& out, const Stud& student);
	void output(const vector<Stud>& vec, const string& failoPav);
	void output(const vector<Stud>& vector1, int a);

	void input(const string& failoVardas, vector<Stud>& studentai);
	void input(const string& failas, int eil);
};
/*
Stud::Stud(string vardas, string pavarde,  int egz, double vid, double med) {
	vardas_ = vardas;
	pavarde_ = pavarde;
	//nd_ = nd;
	egz_ = egz;
	galutinisVid_ = vid;
	galutinisMed_ = med;
}*/

//void readStudTxt(const string& failoVardas, vector<Stud>& studentai);

static double skaiciuotiNdVid(const vector <int>& nd);
static double skaiciuotiNdMed(vector <int>& nd);




void kategorijos3(vector<Stud>& vector1, vector<Stud>& beta);

bool lygintiVardas(const Stud& a, const Stud& b);
bool lygintiPavarde(const Stud& a, const Stud& b);
bool lygintiGalutinis(const Stud& a, const Stud& b);
void sortByChoice(vector<Stud>& vec, int b);

#endif //STUD_H_INCLUDED

