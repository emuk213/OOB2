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
    system("pause");
    
    return 0;
}
