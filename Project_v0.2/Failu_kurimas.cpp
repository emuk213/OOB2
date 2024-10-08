#include <iostream>
#include "MyLib2.h"
#include "Stud2.h"

void kurti_faila(const string& failas, int eil) {
    auto start = std::chrono::high_resolution_clock::now();
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
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    cout << "Failo generavimas uztruko: " << duration.count() << " sekundziu." << endl;
   // system("pause");
}