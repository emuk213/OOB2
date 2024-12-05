#include <iostream>
#include "MyLib3.h"
#include "Stud3.h"
#include "RandInt.h"
#include "Timer.h"

void Stud::input(const string& failas, int eil) {
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

//is failo
void Stud::input(const string& failoVardas, list<Stud>& studentai) {
    ifstream inFile(failoVardas);
    try {
        if (!inFile.is_open()) {
            throw runtime_error("Error: unable to open file: " + failoVardas);
        }
        string line;
        getline(inFile, line);
        while (getline(inFile, line)) {
            istringstream iss(line);
            Stud Lok1;
            iss >> Lok1;

            studentai.push_back(Lok1);
        }
        inFile.close();

    }
    catch (const std::invalid_argument& e) {
        throw runtime_error("Error: ND score is a letter");
    }
    catch (exception& e) {
        cerr << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}


//i faila
void Stud::output(const list<Stud>& vec, const string& failoPav) {
    ofstream failas(failoPav);
    failas.precision(2);
    failas.setf(std::ios::fixed);
    failas << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde" << setw(5) << right << "Galutinis balas vid." << "\n";
    for (const Stud& student : vec) {
        failas << student << "\n";
    }

    failas.close();
}
