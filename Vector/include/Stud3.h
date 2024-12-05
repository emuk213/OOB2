#ifndef STUD_H_INCLUDED
#define STUD_H_INCLUDED
#include "MyLib3.h"
#include "Zmogus.h"

class Stud : public Zmogus {
private:
	vector <int> nd_;
	int egz_;
	double galutinisVid_, galutinisMed_;

public:

	Stud(string v = "", string p = "", vector<int> nd = {}, int egz = 0) : Zmogus(v, p), nd_(nd), egz_(egz), galutinisVid_(0), galutinisMed_(0) {}


	//1.copy constructor
	Stud(const Stud& c) : Zmogus(c), nd_(c.nd_), egz_(c.egz_), galutinisVid_(c.galutinisVid_), galutinisMed_(c.galutinisMed_) {};

	//2.copy assignment operator
	Stud& operator=(const Stud& op) {
		if (this != &op) { 
			Zmogus::operator=(op);
			nd_ = op.nd_;
			egz_ = op.egz_;
			galutinisVid_ = op.galutinisVid_;
			galutinisMed_ = op.galutinisMed_;
		}
		return *this;
	}
	//3.destructor
	~Stud() { nd_.clear(); }

	//getters:
	inline double getGalutinisVid() const { return galutinisVid_; }
	inline double getGalutinisMed() const { return galutinisMed_; }
	vector<int> getNd() const { return nd_; }
	int getEgz() const { return egz_; }

	//setters:

	void setNd(const vector<int>& nd) { nd_ = nd; }
	void setEgz(int egz) { egz_ = egz; }

	//input/output operators:
	friend istream& operator>>(istream& is, Stud& student);
	friend ostream& operator<<(ostream& out, const Stud& student);

	//perdengti metodai:
	void output(const vector<Stud>& vec, const string& failoPav);
	void output(const vector<Stud>& vector1);

	void input(const string& failoVardas, vector<Stud>& studentai);
	void input(const string& failas, int eil);
	void input();

	void skaiciuotiGalutiniBala();
	void clean();

	void demo(int demo);
	void kasAs() const { cout << "As esu studentas" << endl; }
};

static double skaiciuotiNdVid(const vector <int>& nd);
static double skaiciuotiNdMed(vector <int>& nd);

void kategorijos3(vector<Stud>& vector1, vector<Stud>& beta);

bool lygintiVardas(const Stud& a, const Stud& b);
bool lygintiPavarde(const Stud& a, const Stud& b);
bool lygintiGalutinis(const Stud& a, const Stud& b);
void sortByChoice(vector<Stud>& vec, int b);

#endif //STUD_H_INCLUDED
