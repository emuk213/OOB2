#include <iostream>
#include "MyLib2.h"
#include "Stud2.h"
#include "timer.h"


int main()
{
    vector <Stud> vec1, sigma, beta;
    Stud temp;
    int a, b;
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
    cout << "Pagal ka norite rusiuoti duomenis? (0-varda, 1-pavarde, 2-galutini bala)" << endl;
    cin >> b;
    
        int n = 1000;
        for (int i = 0; i < 5; i++) {
            vec1.reserve(n);
            sigma.reserve(n);
            beta.reserve(n);
            Timer t;
            readStudTxt("studentai" + to_string(n) + ".txt", vec1);
            double e = t.elapsed();
            cout << "\nFailo is " + to_string(n) + " irasu nuskaitymas uztruko: " << e << " s\n";

            for (Stud& temp : vec1) {
                skaiciuotiGalutiniBala(temp);
            }
            Timer t1;
            sortByChoice(vec1, b);
            double e1 = t1.elapsed();
            cout << to_string(n) + "irasu rusiavimas uztruko: " << e1 << " s\n"; 

            Timer t2;
            for (Stud& temp : vec1) {
                kategorijos(sigma, beta, temp);
            }
            vec1.clear();
            double e2 = t2.elapsed();
            cout << to_string(n) + "irasu dalinimas i 2 grupes uztruko: " << e2 << " s\n";
            
            Timer t3;
            isvedimas(sigma, "sigma" + to_string(n) + ".txt");
            double e3 = t3.elapsed();
            cout << to_string(n) + "irasu sigma irasymo i faila uztruko: " << e3 << " s\n";

            Timer t4;
            isvedimas(beta, "beta" + to_string(n) + ".txt");
            double e4 = t4.elapsed();
            cout << to_string(n) + "irasu beta irasymo i faila uztruko: " << e4 << " s\n";

            double totalTime = e + e1 + e2 + e3 + e4;
            cout << "\n" + to_string(n) + "irasu testo laikas: " << totalTime << " s\n";

            n *= 10;
        }

    system("pause");
    
   

    return 0;
}
