1. Project_v0.3.cpp yra main failas,
2. MyLib3.h faile aprašytos bibliotekos,
3. Stud3.cpp faile surašytos visos funkcijos,
4. Stud3.h faile aprašyta struktūra ir funkcijų deklaracijos.
5. Failu_kurimas.cpp faile yra failų generavimo ir duomenų išvedimo į failus funkcijos.
6. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
7. Timer.h laiko skaičiavimo klasė.

   **Kas naujo?**

   * Programa parašyta taip, kad vietoje vector naudotų list konteinerį informacijai apie studentus saugoti.
   * Duomenis įvedus ranka, šalia studentų duomenų yra išvedamas ir to studento saugojimo atmintyje adresas.
   * Atliekami programos greičio testai, jų vidurkiai lyginami su v0.2 versijos rezultatais (t.y. programa naudoja vector konteinerį).

  **CPU: 12th Gen Intel(R) Core(TM) i7-1260P   2.10 GHz**
  
  **RAM: 16 GB**
  
  **SSD (1TB)**

Testų vidurkiai:

Buvo atlikti 8 testai.

Lentelėse pateiktas vidutinis testų laikas sekundėmis naudojant vector ir list.

* 1 000 įrašų:
  
| Funkcija   | Vector  | List|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |   0.007049 |  0.006176 |
| Rūšiavimas        |   0.000362   | 0.000100 |
| Dalinimas į 2 grupes     | 0.000218|  0.000480|
| "Sigma" išvedimas |  0.004299  | 0.002947|
|"Beta" išvedimas | 0.001367 | 0.001585 |
|Viso testo trukmė| 0.013487| 0.011256 |


* 10 000 įrašų:
  
| Funkcija   | Vector  | List|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |  0.065592  | 0.061209 |
| Rūšiavimas        |     0.004222 |0.001590  |
| Dalinimas į 2 grupes     |0.002387 |0.004416 |
| "Sigma" išvedimas |    0.012350| 0.013929|
|"Beta" išvedimas |  0.008186| 0.008271|
|Viso testo trukmė| 0.092739|0.089417 |


* 100 000 įrašų:
  
| Funkcija   | Vector  | List|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       | 0.588068   |   |
| Rūšiavimas        |   0.045850   |   |
| Dalinimas į 2 grupes     | 0.033737|  |
| "Sigma" išvedimas |    0.101996|  |
|"Beta" išvedimas | 0.070402 |  |
|Viso testo trukmė|0.840056 |  |


* 1 000 000 įrašų:
  
 | Funkcija   | Vector  | List|
  |:-----------|:----------:|:------------:|
  | Failo nuskaitymas       |  5.833982  |  |
  | Rūšiavimas        |  0.528940    |   |
  | Dalinimas į 2 grupes     | 0.290187|  |
  | "Sigma" išvedimas |  0.861029  |  |
  |"Beta" išvedimas | 0.626815 |  |
  |Viso testo trukmė| 8.140956|   |


* 10 000 000 įrašų:
  
 | Funkcija   | Vector  | List|
  |:-----------|:----------:|:------------:|
  | Failo nuskaitymas       |   57.355937 |   |
  | Rūšiavimas        |    6.242971  |  |
  | Dalinimas į 2 grupes     |3.301593 |  |
  | "Sigma" išvedimas |  8.64999  |  |
  |"Beta" išvedimas |  5.985857|  |
  |Viso testo trukmė|81.523975 |  |
