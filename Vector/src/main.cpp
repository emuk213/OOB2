
#include <iostream>
#include "MyLib3.h"
#include "Stud3.h"
#include "Timer.h"


int main()
{
    vector <Stud> vector1, sigma, beta;
    Stud temp;
    int b, c, f, g, h, x, demo;
    string failoVardas;

    //Zmogus zmgs;

    cout << "Demo? (1-yes, 0-no)" << endl;
    cin >> demo;
    temp.demo(demo);
    system("pause");


    cout << "Ar norite atlikti testus arba generuoti naujus failus (0-ne, 1-taip)?" << endl;
    cin >> h;
    if (h == 0) {
        try {
            cout << "Pagal ka norite rusiuoti duomenis? (0-varda, 1-pavarde, 2-galutini bala)" << endl;
            cin >> x;
            cout << "Ar norite nuskaityti duomenis is failo? (0 - ne, 1 - taip)" << endl;

            cin >> b;
            if (cin.fail() || (b != 0 && b != 1)) {
                throw runtime_error("Error: wrong input");
            }

            if (b == 1) {
                cout << "Iveskite failo pavadinima" << endl;
                cin >> failoVardas;

                temp.input(failoVardas, vector1);

                for (Stud& student : vector1) {
                    student.skaiciuotiGalutiniBala();
                }
                sortByChoice(vector1, x);
                temp.output(vector1);
            }

            else if (b == 0) {
                cout << "Kiek studentu vesite?" << endl;
                cin >> g;
                if (cin.fail()) {
                    throw runtime_error("Error: input must be a number");
                }

                for (int i = 0; i < g; i++) {
                    cout << "Iveskite studentu duomenis:" << endl;
                    temp.input();
                    temp.skaiciuotiGalutiniBala();
                    vector1.push_back(temp);
                    temp.clean();
                }

                sortByChoice(vector1, x);
                temp.output(vector1);
            }
        }
        catch (exception& e) {
            cerr << e.what() << endl;
            return 1;
        }
    }

    if (h == 1) {

        temp.clean();

        cout << "Ar norite generuoti naujus studentu sarasu failus? (0-ne, 1-taip)" << endl;
        cin >> c;
        if (c == 1) {
            int d = 1000;

            for (int i = 0; i < 5; i++) {
                temp.input("studentai" + to_string(d) + ".txt", d);
                d *= 10;
            }

        }

        cout << "Pagal ka norite rusiuoti duomenis? (0-varda, 1-pavarde, 2-galutini bala)" << endl;
        cin >> f;

        int n = 1000;
        for (int i = 0; i < 5; i++) {
            vector1.clear();
            sigma.clear();
            beta.clear();
            string failas = "studentai" + std::to_string(n) + ".txt";

            Timer t;
            temp.input(failas, vector1);
            double e = t.elapsed();
            cout << "\nFailo is " + to_string(n) + " irasu nuskaitymas uztruko: " << e << " s\n";

            for (Stud& temp : vector1) {
                temp.skaiciuotiGalutiniBala();
            }
            Timer t1;
            sortByChoice(vector1, f);
            double e1 = t1.elapsed();
            cout << to_string(n) + " irasu rusiavimas uztruko: " << e1 << " s\n";

            Timer t2;
            kategorijos3(vector1, beta);
            double e2 = t2.elapsed();
            cout << to_string(n) + " irasu dalinimas i 2 grupes uztruko: " << e2 << " s\n";
            sortByChoice(vector1, f);
            sortByChoice(beta, f);
            Timer t3;
            temp.output(vector1, "sigma" + to_string(n) + ".txt");
            double e3 = t3.elapsed();
            cout << to_string(n) + " irasu sigma irasymo i faila uztruko: " << e3 << " s\n";
            Timer t4;
            temp.output(beta, "beta" + to_string(n) + ".txt");
            double e4 = t4.elapsed();
            cout << to_string(n) + " irasu beta irasymo i faila uztruko: " << e4 << " s\n";
            double totalTime = e + e1 + e2 + e3 + e4;
            cout << "\n" + to_string(n) + " irasu testo laikas: " << totalTime << " s\n";
            n *= 10;
        }
    }
    system("pause");
    return 0;
}
