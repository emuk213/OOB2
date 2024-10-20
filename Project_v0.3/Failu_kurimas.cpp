#include <iostream>
#include "MyLib3.h"
#include "Stud3.h"
#include "RandInt.h"
#include "Timer.h"

void kurti_faila(const string& failas, int eil) {
    Timer t0;
    ofstream studentai(failas);

    srand(time(0));

    studentai << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde";
    for (int i = 1; i <= 9; i++) studentai << setw(10) << right << "ND" + to_string(i);
    studentai << setw(10) << right << "Egz." << "\n";

    constexpr int max = 10;
    RandInt rnd{ 1, max };

    for (int i = 1; i <= eil; i++) {
        vector <int> nd(9);
        for (int j = 0; j < 9; j++) {
            nd[j] = rnd();
        }

        studentai << setw(15) << left << ("Vardas" + to_string(i)) << setw(15) << left << ("Pavarde" + to_string(i));
        for (const int& paz : nd) studentai << setw(10) << right << paz;
        studentai << setw(10) << right << (rnd()) << "\n";
    }

    studentai.close();
    cout << "Failas " << failas << " uzdarytas" << endl;
    double e0 = t0.elapsed();
    cout << "Failo generavimas uztruko: " << e0 << "s\n";
}

void isvedimas(list <Stud>& vec, const string& failoPav) {
    ofstream failas(failoPav);
    failas << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde" << setw(5) << right << "Galutinis balas vid." << "\n";
    failas.precision(2);
    failas.setf(std::ios::fixed);

    for (const Stud& studentas : vec) {
        failas << setw(15) << left << studentas.vardas << setw(15) << left << studentas.pavarde << setw(5) << right << studentas.galutinisVid << "\n";
    }

    failas.close();

}
