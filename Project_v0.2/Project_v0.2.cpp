#include <iostream>
#include "MyLib2.h"
#include "Stud2.h"
#include "timer.h"


int main()
{
    vector <Stud> vec1, sigma, beta;
    Stud temp;
    int a, b, c, f, g, h;
    string failoVardas;
    cout << "Ar norite atlikti testus arba generuoti naujus failus (0-ne, 1-taip)?" << endl;
    cin >> h;
    if (h == 0) {
        cout << "Do you want Final score with vid or med (0 - vid, 1 - med)?" << endl;
        try {
            cin >> a;
            if (cin.fail() || (a != 0 && a != 1)) {
                throw runtime_error("Error: wrong input");
            }

            cout << "Do you want to read data from txt file (0 - no, 1 - yes)?" << endl;

            cin >> b;
            if (cin.fail() || (b != 0 && b != 1)) {
                throw runtime_error("Error: wrong input");
            }
            
            if (b == 1) {
                cout << "Input file name" << endl;
                cin >> failoVardas;

                readStudTxt(failoVardas, vec1);

                if (a == 0) {
                    cout << setw(15) << left << "Surname" << setw(10) << left << "Name" << setw(5) << right << "Final average score (vid.)" << endl;

                    sort(vec1.begin(), vec1.end(), [](const Stud& a, const Stud& b) {
                        return a.pavarde < b.pavarde;
                        });

                    for (Stud& student : vec1) {
                        skaiciuotiGalutiniBala(student);
                        outputVid(student);

                    }
                }
                else if (a == 1) {
                    cout << setw(15) << left << "Surname" << setw(10) << left << "Name" << setw(5) << right << "Final average score (med.)" << endl;

                    sort(vec1.begin(), vec1.end(), [](const Stud& a, const Stud& b) {
                        return a.pavarde < b.pavarde;
                        });


                    for (Stud& student : vec1) {
                        skaiciuotiGalutiniBala(student);
                        outputMed(student);
                    }
                }
            }
            else if (b == 0) {
                cout << "How many students do you have?" << endl;

                cin >> g;
                if (cin.fail()) {
                    throw runtime_error("Error: input must be a number");
                }

                for (int i = 0; i < g; i++) {
                    cout << "Please input student data:" << endl;
                    input(temp);
                    skaiciuotiGalutiniBala(temp);
                    vec1.push_back(temp);
                    clean(temp);
                }
                if (a == 0) {
                    cout << setw(15) << left << "Surname" << setw(10) << left << "Name" << setw(5) << right << "Final average score (vid.)" << endl;

                    sort(vec1.begin(), vec1.end(), [](const Stud& a, const Stud& b) {
                        return a.pavarde < b.pavarde;
                        });
                    for (int i = 0; i < g; i++)
                        outputVid(vec1.at(i));
                }
                else if (a == 1) {
                    cout << setw(15) << left << "Surname" << setw(10) << left << "Name" << setw(5) << right << "Final average score (med.)" << endl;

                    sort(vec1.begin(), vec1.end(), [](const Stud& a, const Stud& b) {
                        return a.pavarde < b.pavarde;
                        });
                    for (int i = 0; i < g; i++)
                        outputMed(vec1.at(i));
                }

            }
        }
        catch (exception& e) {
            cerr << e.what() << endl;
            return 1;
        }
    }
    if (h == 1) {

        cout << "Ar norite generuoti naujus studentu sarasu failus? (0-ne, 1-taip)" << endl;
        cin >> c;
        if (c == 1) {
            int d = 1000;

            for (int i = 0; i < 5; i++) {

                kurti_faila("studentai" + to_string(b) + ".txt", b);
                d *= 10;
            }

        }

        cout << "Pagal ka norite rusiuoti duomenis? (0-varda, 1-pavarde, 2-galutini bala)" << endl;
        cin >> f;

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
            sortByChoice(vec1, f);
            double e1 = t1.elapsed();
            cout << to_string(n) + " irasu rusiavimas uztruko: " << e1 << " s\n";

            Timer t2;
            for (Stud& temp : vec1) {
                kategorijos(sigma, beta, temp);
            }
            vec1.clear();
            double e2 = t2.elapsed();
            cout << to_string(n) + " irasu dalinimas i 2 grupes uztruko: " << e2 << " s\n";
            
            Timer t3;
            isvedimas(sigma, "sigma" + to_string(n) + ".txt");
            double e3 = t3.elapsed();
            cout << to_string(n) + " irasu sigma irasymo i faila uztruko: " << e3 << " s\n";

            Timer t4;
            isvedimas(beta, "beta" + to_string(n) + ".txt");
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
