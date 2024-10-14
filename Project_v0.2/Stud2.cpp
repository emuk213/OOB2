#include "Stud2.h"


double skaiciuotiNdVid(const vector <int>& nd) {
    double sum = 0;
    for (int i = 0; i < nd.size(); i++) {
        sum += nd.at(i);
    }
    return sum / nd.size();
}
double skaiciuotiNdMed(vector <int>& nd) {
    sort(nd.begin(), nd.end());
    size_t size = nd.size();
    if (size % 2 == 0) {
        return (nd.at(size / 2 - 1) + nd.at(size / 2)) / 2.0;
    }
    else {
        return nd.at(size / 2);
    }
}

void skaiciuotiGalutiniBala(Stud& Lok) {
    Lok.galutinisVid = 0.4 * skaiciuotiNdVid(Lok.nd) + 0.6 * Lok.egz;
    Lok.galutinisMed = 0.4 * skaiciuotiNdMed(Lok.nd) + 0.6 * Lok.egz;
}

void kategorijos(vector<Stud>& sigma, vector<Stud>& beta, Stud& Lok) {
        if (Lok.galutinisVid < 5) {
            beta.push_back(Lok);
        }
        else if (Lok.galutinisVid >= 5) {
            sigma.push_back(Lok);
        }
        clean(Lok);
}
bool lygintiVardas(Stud& a, Stud& b) {
            return a.vardas < b.vardas;
}
bool lygintiPavarde(Stud& a, Stud& b) {
    return a.pavarde < b.pavarde;
}
bool lygintiGalutinis(Stud& a, Stud& b) {
    return a.galutinisVid < b.galutinisVid;
}
void sortByChoice(vector<Stud>& vec, int b) {
    if (b == 0) {
        sort(vec.begin(), vec.end(), lygintiVardas);
    }
    else if (b == 1) {
        sort(vec.begin(), vec.end(), lygintiPavarde);
    }
    else if (b == 2) {
        sort(vec.begin(), vec.end(), lygintiGalutinis);
    }
}
 

void input(Stud& Lok) {
    cout << "Input Name, Surname:" << endl;
    cin >> Lok.vardas >> Lok.pavarde;

    cout << "Do you want randomized ND and Exam scores (0 - no, 1 - yes)?" << endl;
    int ats;
    try {
        cin >> ats;
        if (cin.fail() || (ats != 0 && ats != 1)) {
            throw runtime_error("Error: wrong input");
        }
        if (ats == 0) {
            cout << "Input ND scores (press non numeric symbol and ENTER to finish):" << endl;
            int paz;

            while (cin >> paz) {
                if (cin.fail() || (paz < 1 || paz > 10)) {
                    throw runtime_error("Error: invalid ND input");
                }
                else {
                    Lok.nd.push_back(paz);
                }
            }

            cin.clear(); //isvalo klaidos busena
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Input Exam score: ";
            cin >> Lok.egz;
            if (Lok.egz < 1 || Lok.egz > 10) {
                throw runtime_error("Error: invalid Exam input");
            }
        }
        else if (ats == 1) {
            cout << "How many ND scores should program randomize?" << endl;
            int ndSk;
            cin >> ndSk;
            if (cin.fail()) {
                throw runtime_error("Error: invalid input");
            }

            for (int i = 0; i < ndSk; i++) {
                Lok.nd.push_back(1 + (rand() % 10));
            }
            Lok.egz = 1 + (rand() % 10);
        }
    }
    catch (exception& e) {
        cerr << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}


void readStudTxt(const string& failoVardas, vector<Stud>& studentai) {
    ifstream inFile(failoVardas); //atidarome faila nuskaitymui
    try {
        if (!inFile.is_open()) {
            throw runtime_error("Error: unable to open file: " + failoVardas);
        }
        studentai.reserve(10000000);
        string line;
        getline(inFile, line);
        while (getline(inFile, line)) {
            istringstream iss(line);
            Stud Lok1;
            int score;
            string x;

            iss >> Lok1.vardas >> Lok1.pavarde;
            
            Lok1.nd.clear();
            while (iss >> x) {

                score = std::stoi(x);
                
                Lok1.nd.push_back(score);

            }
            
            for (int i = 0; i < Lok1.nd.size(); i++) {
                if ((Lok1.nd.at(i) < 1 || Lok1.nd.at(i) > 10)) {
                    throw runtime_error("Error: ND score must be between 1 and 10");
                }
            }
            if (Lok1.nd.empty()) {
                throw runtime_error("Error: no ND scores found in line: " + line);
            }

            Lok1.egz = Lok1.nd.back(); pakeiciau:
           
            Lok1.nd.pop_back();
            

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

void outputVid(Stud Lok) {
    cout << setw(15) << left << Lok.pavarde << setw(15) << left << Lok.vardas << setw(5) << setprecision(2) << fixed << right << Lok.galutinisVid << endl;
}
void outputMed(Stud Lok) {
    cout << setw(15) << left << Lok.pavarde << setw(15) << left << Lok.vardas << setw(5) << setprecision(2) << fixed << right << Lok.galutinisMed << endl;
}

void clean(Stud& Lok) {
    Lok.vardas.clear();
    Lok.pavarde.clear();
    Lok.nd.clear();
}
