#include "Stud3.h"
#include "RandInt.h"


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

void Stud::skaiciuotiGalutiniBala() {

    if (nd_.empty()) {
        cerr << "Klaida: ND balai yra tusciame vektoriuje!" << endl;
        throw runtime_error("ND balai yra tusciame vektoriuje");
    }
    galutinisVid_ = 0.4 * skaiciuotiNdVid(nd_) + 0.6 * egz_;
    galutinisMed_ = 0.4 * skaiciuotiNdMed(nd_) + 0.6 * egz_;

    galutinisVid_ = round(galutinisVid_ * 100.0) / 100.0;
    galutinisMed_ = round(galutinisMed_ * 100.0) / 100.0;
}

void kategorijos3(vector<Stud>& vector1, vector<Stud>& beta) {
    auto partitionPoint = partition(vector1.begin(), vector1.end(), [](const Stud& s) {
        return s.getGalutinisVid() >= 5;
        });

    beta.insert(beta.end(), make_move_iterator(partitionPoint), make_move_iterator(vector1.end()));

    vector1.erase(partitionPoint, vector1.end());
}

bool lygintiVardas(const Stud& a, const Stud& b) {
    return a.getVardas() < b.getVardas();
}
bool lygintiPavarde(const Stud& a, const Stud& b) {
    return a.getPavarde() < b.getPavarde();
}
bool lygintiGalutinis(const Stud& a, const Stud& b) {
    return a.getGalutinisVid() < b.getGalutinisVid();
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

//is terminalo
void Stud::input() {
    constexpr int max = 10;
    RandInt rnd{ 1, max };
    cout << "Input Name, Surname:" << endl;
    cin >> vardas >> pavarde;

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
                    nd_.push_back(paz);
                }
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Input Exam score: ";
            cin >> egz_;
            if (egz_ < 1 || egz_ > 10) {
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
                nd_.push_back(rnd());
            }
            egz_ = rnd();
        }
    }
    catch (exception& e) {
        cerr << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}

//i terminala
void Stud::output(const vector <Stud>& vector1) {
    cout << setw(15) << left << "Name" << setw(15) << left << "Surname" << setw(30) << left << "Final average score (vid.)" << setw(10) << right << "Adress" << endl;
    for (const Stud& student : vector1) {
        cout << student << " "<< setw(40) << right << &student << endl;
    }
}

istream& operator>>(istream& is, Stud& student) {
    string vardas, pavarde, x;
    vector<int> nd;
    int score, egz;
    is >> vardas >> pavarde;
    student.setVardas(vardas);
    student.setPavarde(pavarde);

    nd.clear();

    while (is >> x) {
        score = std::stoi(x);
        nd.push_back(score);
    }

    for (int i = 0; i < nd.size(); i++) {
        if ((nd.at(i) < 1 || nd.at(i) > 10)) {
            throw runtime_error("Error: ND score must be between 1 and 10");
        }
    }
    if (nd.empty()) {
        throw runtime_error("Error: no ND scores found");
    }

    egz = nd.back();

    nd.pop_back();
    student.setEgz(egz);
    student.setNd(nd);

    return is;
}

ostream& operator<<(ostream& out, const Stud& student) {

    out << setw(15) << left << student.vardas << setw(15) << left << student.pavarde << setw(5) << right << student.galutinisVid_;

    return out;
}


void Stud::clean() {
    vardas.clear();
    pavarde.clear();
    nd_.clear();
}

void Stud::demo(int demo) {
    if (demo == 1) {
        Stud obj1("Zigmantas", "Alonis", { 7, 5, 9 }, 8); 
        obj1.skaiciuotiGalutiniBala();

        //1.copy constructor
        //Stud obj2 = obj1;
        Stud obj2(obj1);

        //2.copy assignment operator
        Stud obj3;
        obj3 = obj1;

        cout << "Obj1:" << endl;
        cout << obj1 << endl;
        cout << "Obj2:" << endl;
        cout << obj2 << endl;
        cout << "Obj3:" << endl;
        cout << obj3 << endl;
    }
}
