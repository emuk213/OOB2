#include <iostream>
#include "MyLib2.h"
#include "Stud2.h"
#include "RandInt.h"

void kurti_faila(const string& failas, int eil) {
    auto start0 = std::chrono::high_resolution_clock::now();
    ofstream studentai(failas);
    
    srand(time(0));
 
    studentai << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde";
    for (int i = 1; i <= 9; i++) studentai << setw(10) << right << "ND" + to_string(i);
    studentai << setw(10) << right << "Egz." << endl;

    constexpr int max = 10;
    RandInt rnd{ 1, max };
    for (int i = 1; i <= eil; i++) {
        vector <int> nd(9);
        for (int j = 0; j < 9; j++) {
             nd[j] = rnd();
        }

        studentai << setw(15) << left << ("Vardas" + to_string(i)) << setw(15) << left << ("Pavarde" + to_string(i));
        for (const int& paz : nd) studentai << setw(10) << right << paz;
        studentai << setw(10) << right << (rnd()) << endl;
    }

    studentai.close();
    cout << "Failas " << failas << " uzdarytas" << endl;
    auto end0 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration0 = end0 - start0;
    cout << "Failo generavimas uztruko: " << duration0.count() << endl;
}

void isvedimas(vector <Stud> vec, const string& failoPav) {
    ofstream failas(failoPav);
    failas << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde" << setw(5) << right << "Galutinis balas vid." << endl;

    for (const Stud& studentas : vec) {
        failas << setw(15) << left << studentas.vardas << setw(15) << left << studentas.pavarde << setw(5) << setprecision(2) << fixed << right << studentas.galutinisVid << endl;
    }

    failas.close();
}
