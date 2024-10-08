#include <iostream>
#include "MyLib2.h"
#include "Stud2.h"


int main()
{
    int a;
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

        readStudTxt("studentai" + to_string(n) + ".txt", vec1);
        cout << setw(15) << left << "Pavarde" << setw(15) << left << "Vardas " << setw(20) << setprecision(2) << fixed << right << "Galutinis balas vid." << setw(15) << right << "Kategorija" << endl;
        for (Stud& temp : vec1) {
            skaiciuotiGalutiniBala(temp);
            outputVid(temp);
        }

    n *= 10;
    }
    system("pause");
    
    return 0;
}
