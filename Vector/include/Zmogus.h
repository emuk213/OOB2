#ifndef ZMOGUS_H_INCLUDED
#define ZMOGUS_H_INCLUDED
#include "MyLib3.h"

class Zmogus {
protected:
	string vardas, pavarde;
public:
	Zmogus(string v = "", string p = "") : vardas(v), pavarde(p) {}

	Zmogus(const Zmogus& copy) : vardas(copy.vardas), pavarde(copy.pavarde) {}

	Zmogus& operator=(const Zmogus& op) {
		if (this != &op) {  // Apsauga nuo saves priskyrimo
			vardas = op.vardas;
			pavarde = op.pavarde;
		}
		return *this;
	}

	string getVardas() const { return vardas; }
	string getPavarde() const { return pavarde; }


	void setVardas(const string& v) { vardas = v; }
	void setPavarde(const string& p) { pavarde = p; }

	virtual void kasAs() const = 0;
	~Zmogus() { vardas.clear(); }

};

#endif //ZMOGUS_H_INCLUDED