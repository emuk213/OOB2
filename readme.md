# **V1.0**

Testų vidurkiai:
---------------

Buvo atlikti 8 testai.

Lentelėse pateiktas vidutinis testų laikas sekundėmis naudojant vector ir list.

* 1 000 įrašų:
  
| Funkcija   | 2_strategija su vector  | 2_strategija su list|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |    |   0.005491|   
| Rūšiavimas        |      | 0.000089 |
| Dalinimas į 2 grupes     | |  0.000087|
| "Sigma" išvedimas |    | 0.001523|
|"Beta" išvedimas |  |  0.000916|
|Viso testo trukmė|   |  0.008108|

* 10 000 įrašų:

| Funkcija   | 2_strategija su vector  | 2_strategija su list|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |    |  0.042193 |   
| Rūšiavimas        |      |  0.001331|
| Dalinimas į 2 grupes     | |  0.000858|
| "Sigma" išvedimas |    | 0.007251|
|"Beta" išvedimas |  |  0.005353|
|Viso testo trukmė|   |  0.056989|

* 100 000 įrašų:

| Funkcija   | 2_strategija su vector  | 2_strategija su list|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |    |  0.332345 |   
| Rūšiavimas        |      | 0.019096 |
| Dalinimas į 2 grupes     | |  0.011417|
| "Sigma" išvedimas |    | 0.063848|
|"Beta" išvedimas |  |  0.043425|
|Viso testo trukmė|   |  0.470132|

* 1 000 000 įrašų:

| Funkcija   | 2_strategija su vector  | 2_strategija su list|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |    |   |   
| Rūšiavimas        |      |  |
| Dalinimas į 2 grupes     | |  |
| "Sigma" išvedimas |    | |
|"Beta" išvedimas |  |  |
|Viso testo trukmė|   |  |

* 10 000 000 įrašų:

| Funkcija   | 2_strategija su vector  | 2_strategija su list|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |    |   |   
| Rūšiavimas        |      |  |
| Dalinimas į 2 grupes     | |  |
| "Sigma" išvedimas |    | |
|"Beta" išvedimas |  |  |
|Viso testo trukmė|   |  |


# **V0.3**
1. Project_v0.3.cpp yra main failas,
2. MyLib3.h faile aprašytos bibliotekos,
3. Stud3.cpp faile surašytos visos funkcijos,
4. Stud3.h faile aprašyta struktūra ir funkcijų deklaracijos.
5. Failu_kurimas.cpp faile yra failų generavimo ir duomenų išvedimo į failus funkcijos.
6. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
7. Timer.h laiko skaičiavimo klasė.

**Kas naujo?**
   -------
   * Programa parašyta taip, kad vietoje vector naudotų list konteinerį informacijai apie studentus saugoti.
   * Duomenis įvedus ranka, šalia studentų duomenų yra išvedamas to studento saugojimo atmintyje adresas.
   * Atliekami programos greičio testai, jų vidurkiai lyginami su v0.2 versijos rezultatais (t.y. programa naudoja vector konteinerį).
     
***Kompiuterio specifikacijos:***
----------

  * **CPU: 12th Gen Intel(R) Core(TM) i7-1260P   2.10 GHz**
  * **RAM: 16 GB**
  * **SSD (1TB)**

Testų vidurkiai:
---------------

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

<img src="https://github.com/user-attachments/assets/21687fc0-7779-4f04-8001-f640432bb8a2" alt="Description" width="500"/>

* 10 000 įrašų:
  
| Funkcija   | Vector  | List|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       |  0.065592  | 0.061209 |
| Rūšiavimas        |     0.004222 |0.001590  |
| Dalinimas į 2 grupes     |0.002387 |0.004416 |
| "Sigma" išvedimas |    0.012350| 0.013929|
|"Beta" išvedimas |  0.008186| 0.008271|
|Viso testo trukmė| 0.092739|0.089417 |

<img src="https://github.com/user-attachments/assets/d5213a2c-bfdd-4d18-9856-2b4afa10a905" alt="Description" width="500"/>


* 100 000 įrašų:
  
| Funkcija   | Vector  | List|
|:-----------|:----------:|:------------:|
| Failo nuskaitymas       | 0.588068   |  0.527883 |
| Rūšiavimas        |   0.045850   |  0.035308 |
| Dalinimas į 2 grupes     | 0.033737| 0.058177 |
| "Sigma" išvedimas |    0.101996| 0.095644 |
|"Beta" išvedimas | 0.070402 | 0.064387 |
|Viso testo trukmė|0.840056 | 0.781400 |

<img src="https://github.com/user-attachments/assets/3b2bf153-8350-4401-9f88-fa4cb39fdb27" alt="Description" width="500"/>

* 1 000 000 įrašų:
  
 | Funkcija   | Vector  | List|
  |:-----------|:----------:|:------------:|
  | Failo nuskaitymas       |  5.833982  | 5.02694 |
  | Rūšiavimas        |  0.528940    | 0.512247  |
  | Dalinimas į 2 grupes     | 0.290187| 0.497361 |
  | "Sigma" išvedimas |  0.861029  |  0.839495|
  |"Beta" išvedimas | 0.626815 | 0.592574 |
  |Viso testo trukmė| 8.140956|  7.46862 |

<img src="https://github.com/user-attachments/assets/d9adbcba-f130-4515-80b0-c3cb13e5ef17" alt="Description" width="500"/>

* 10 000 000 įrašų:
  
 | Funkcija   | Vector  | List|
  |:-----------|:----------:|:------------:|
  | Failo nuskaitymas       |   57.355937 | 52.606862  |
  | Rūšiavimas        |    6.242971  |  7.908942|
  | Dalinimas į 2 grupes     |3.301593 | 5.202556 |
  | "Sigma" išvedimas |  8.64999  | 9.017396 |
  |"Beta" išvedimas |  5.985857| 5.814621 |
  |Viso testo trukmė|81.523975 | 80.550325 |

  <img src="https://github.com/user-attachments/assets/b941ddff-4c49-4188-91c6-8942cc296ce4" alt="Description" width="500"/>

  Tyrimo išvados:
  -------
  Labiausiai skiriasi failo nuskaitymo ir dalinimo į dvi grupes testo vidurkiai su visų dydžių failais. 
  
  * Su list'ais nuskaitymas veikia greičiau nei su vektoriais.
  * Tačiau duomenų skirstymas į dvi grupes list'uose vyksta beveik dvigubai lėčiau nei vector'iuose su visų dydžių failais.
  
  


