1. Project_v0.2.cpp yra main failas,
2. MyLib.h faile aprašytos bibliotekos,
3. Stud.cpp faile surašytos visos funkcijos,
4. Stud.h faile aprašyta struktūra ir funkcijų deklaracijos.
5. Failu_kurimas.cpp faile yra failų generavimo ir duomenų išvedimo į failus funkcijos.
6. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
7. Timer.h laiko skaičiavimo klasė.

   **Kas naujo?**

   Programa leidžia:
* pasirinkti ar vartotjas nori generuoti naujus 5 failus (1000, 10000, 1000000, 10000000 įrašų)
* pasirinkti pagal ką būtų rūšiuojami išvedimo duomenys (vardą, pavardę ar galutinį balą)
* apskaičiuoti failų generavimo laiką
* apskaičiuoti failų rūčiavimo, nuskaitymo ir išvedimo laiką
* padalinti studentus į dvi grupes pagal galutinį balą ("sigma" - galutinis balas >= 5, "beta" - galutinis balas < 5).

  **CPU: 12th Gen Intel(R) Core(TM) i7-1260P   2.10 GHz**
  
  **RAM: 16 GB**
  
  **SSD (1TB)**

Testų vidurkiai:

Buvo atlikti 8 testai.

* 1 000 įrašų:
  | Funkcija   | Vidutinis laikas (s)   |
  |:-----------|:----------:|
  | Failo nuskaitymas       |   0.007049 | 
  | Rūšiavimas        |   0.000362   | 
  | Dalinimas į 2 grupes     | 0.000218|
  | "Sigma" išvedimas |  0.004299  |
  |"Beta" išvedimas | 0.001367 |
  |Viso testo trukmė| 0.013487|


* 10 000 įrašų:
  | Funkcija   | Vidutinis laikas (s)   |
  |:-----------|:----------:|
  | Failo nuskaitymas       |  0.065592  | 
  | Rūšiavimas        |     0.004222 | 
  | Dalinimas į 2 grupes     |0.002387 |
  | "Sigma" išvedimas |    0.012350|
  |"Beta" išvedimas |  0.008186|
  |Viso testo trukmė| 0.092739|


* 100 000 įrašų:
  | Funkcija   | Vidutinis laikas (s)   |
  |:-----------|:----------:|
  | Failo nuskaitymas       | 0.588068   | 
  | Rūšiavimas        |   0.045850   | 
  | Dalinimas į 2 grupes     | 0.033737|
  | "Sigma" išvedimas |    0.101996|
  |"Beta" išvedimas | 0.070402 |
  |Viso testo trukmė|0.840056 |


* 1 000 000 įrašų:
  | Funkcija   | Vidutinis laikas (s)   |
  |:-----------|:----------:|
  | Failo nuskaitymas       |  5.833982  | 
  | Rūšiavimas        |  0.528940    | 
  | Dalinimas į 2 grupes     | 0.290187|
  | "Sigma" išvedimas |  0.861029  |
  |"Beta" išvedimas | 0.626815 |
  |Viso testo trukmė| 8.140956|


* 10 000 000 įrašų:
  | Funkcija   | Vidutinis laikas (s)   |
  |:-----------|:----------:|
  | Failo nuskaitymas       |   57.355937 | 
  | Rūšiavimas        |    6.242971  | 
  | Dalinimas į 2 grupes     |3.301593 |
  | "Sigma" išvedimas |  8.64999  |
  |"Beta" išvedimas |  5.985857|
  |Viso testo trukmė|81.523975 |
