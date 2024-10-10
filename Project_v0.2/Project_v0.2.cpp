#include <iostream>
#include "MyLib2.h"
#include "Stud2.h"


int main()
{
    vector <Stud> vec1, sigma, beta;
    Stud temp;
    int a;
    string failoVardas;
    cout << "Ar norite generuoti naujus studentu sarasu failus? (0-ne, 1-taip)" << endl;
    cin >> a;
    if (a == 1) {
        int b = 1000;

        for (int i = 0; i < 5; i++) {

           kurti_faila("studentai" + to_string(b) + ".txt", b);
           b *= 10;
        }
    }
    
    int n = 1000;
    for (int i = 0; i < 5; i++) {
        vec1.reserve(n);
        sigma.reserve(n);
        beta.reserve(n);
        auto start = std::chrono::high_resolution_clock::now();
        readStudTxt("studentai" + to_string(n) + ".txt", vec1);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        cout << "\nFailo is " + to_string(n) + " irasu nuskaitymas uztruko : " << duration.count() << endl;
        for (Stud& temp : vec1) {
            skaiciuotiGalutiniBala(temp);
        }
        auto start1 = std::chrono::high_resolution_clock::now();
        for (Stud& temp : vec1) {
            kategorijos(sigma, beta, temp);
        }
        vec1.clear();
        auto end1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration1 = end1 - start1;
        cout << to_string(n) + "irasu dalinimas i 2 grupes uztruko : " << duration1.count() << endl;

        auto start2 = std::chrono::high_resolution_clock::now();
        isvedimas(sigma, "sigma" + to_string(n) + ".txt");
        auto end2 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration2 = end2 - start2;
        cout << to_string(n) + "irasu sigma irasymo i faila uztruko: " << duration2.count() << endl;

        auto start3 = std::chrono::high_resolution_clock::now();
        isvedimas(beta, "beta" + to_string(n) + ".txt");
        auto end3 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration3 = end3 - start3;
        cout << to_string(n) + "irasu beta irasymo i faila uztruko: " << duration3.count() << endl;
        std::chrono::duration<double> totalTime = duration + duration1 + duration2 + duration3;
        cout << "\n" + to_string(n) + "irasu testo laikas: " << totalTime.count() << endl;

        n *= 10;
    }

    system("pause");
    
    return 0;
}
