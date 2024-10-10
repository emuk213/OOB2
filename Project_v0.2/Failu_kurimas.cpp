#include <iostream>
#include "MyLib2.h"
#include "Stud2.h"

void kurti_faila(const string& failas, int eil) {
    auto start0 = std::chrono::high_resolution_clock::now();
    ofstream studentai(failas);
    
    srand(time(0));
 
    studentai << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde";
    for (int i = 1; i <= 9; i++) studentai << setw(5) << right << "ND" + to_string(i);
    studentai << setw(5) << right << "Egz." << endl;

    for (int i = 1; i <= eil; i++) {
        vector <int> nd(9);
        for (int j = 0; j < 9; j++) {
            nd[j] = 1 + (rand() % 10);
        }

        studentai << setw(15) << left << ("Vardas" + to_string(i)) << setw(15) << left << ("Pavarde" + to_string(i));
        for (const int& paz : nd) studentai << setw(5) << right << paz;
        studentai << setw(5) << right << (1 + (rand() % 10)) << endl;
    }

    studentai.close();
    cout << "Failas " << failas << " uzdarytas" << endl;
    auto end0 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration0 = end0 - start0;
    cout << "Failo generavimas uztruko: " << duration0.count() << endl;
   // system("pause");
}

void isvedimas(vector <Stud> vec, const string& failoPav) {
    ofstream failas(failoPav);
    failas << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde" << setw(5) << right << "Galutinis balas vid." << endl;

    for (const Stud& studentas : vec) {
        failas << setw(15) << left << studentas.vardas << setw(15) << left << studentas.pavarde << setw(5) << setprecision(2) << fixed << right << studentas.galutinisVid << endl;
    }

    failas.close();
}
