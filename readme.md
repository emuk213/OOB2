***Kompiuterio specifikacijos:***
----------

  * **CPU: 12th Gen Intel(R) Core(TM) i7-1260P   2.10 GHz**
  * **RAM: 16 GB**
  * **SSD (1TB)**


**Įdiegimo instrukcija**
----------
Naudokite terminalą ir CMake.
1. Parsisiųskite projektą kaip ZIP failą ir išskleiskite (extract).
2. Nukopijuokite projekto direktoriją, sukuriame build direktoriją ir į ją persikeliame:
   ```
   cd "[direktorija į projektą]"
   mkdir build
   cd build
   ```
3. Paleidžiame CMake, kad sugeneruotų reikalingus failus:
   ```
   cmake ..
   ```
4. Sukompiliuojame kodą, sukuriame .exe failą:
   
   ```
   cmake --build . --config Release 
   ```
# **V2.0**
1. main.cpp yra main failas.
2. MyLib3.h faile aprašytos bibliotekos.
3. Stud3.cpp faile surašytos visos funkcijos, realizuoti įvedimo/išvedimo operatoriai
4. Zmogus.h faile aprašyta bazinė klasė
5. Stud3.h faile aprašyta išvestinė (derived) klasė, jos konstruktoriai, funkcijų deklaracijos ir pnš.
7. Failu_kurimas.cpp faile yra failų generavimo ir duomenų nuskaitymo, išvedimo į failus funkcijos.
8. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
9. Timer.h laiko skaičiavimo klasė.
10. CmakeLists.txt
11. run.bat paleidimo failas.
12. test.cpp faile surašyti testai ir jų main funkcija.
13. html aplankas yra projekto html dokumentacija.
14. v2_0.pdf projekto dokumentacija pdf formatu.

**Kas naujo?**
---------------
* Sukurta projekto `Doxygen` dokumentacija html ir pdf formatais.
* Sukurti `Unit Test`'ai, kurie testuoja Stud klasės konstruktorių, kopijavimo konstruktorių, *setter*'ius ir *output* operatorių. Naudojamas `GoogleTest` *framework*'as.
* *run.bat* failas sukompiliuoja kodą, sukuriamas ir *Vector.exe*, ir *ProjektasTest.exe*. Automatiškai paleidžiamas testų *exe*.

  
# **V1.5**
1. main.cpp yra main failas.
2. MyLib3.h faile aprašytos bibliotekos.
3. Stud3.cpp faile surašytos visos funkcijos, realizuoti įvedimo/išvedimo operatoriai
4. Zmogus.h faile aprašyta bazinė klasė
5. Stud3.h faile aprašyta išvestinė (derived) klasė, jos konstruktoriai, funkcijų deklaracijos ir pnš.
7. Failu_kurimas.cpp faile yra failų generavimo ir duomenų nuskaitymo, išvedimo į failus funkcijos.
8. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
9. Timer.h laiko skaičiavimo klasė.
10. CmakeLists.txt
11. run.bat paleidimo failas.

**Kas naujo?**
--------------
* Sukurta abstrakti bazinė klasė `Zmogus` su *protected* kintamaisiais: vardas, pavardė.
* `Stud` klasė tapo išvestine `Zmogus` klase.

<img src="https://github.com/user-attachments/assets/bbee44c2-2d20-4ae3-b15a-37cddfa38c91" alt="Description" width="600"/>

# **V1.2**
---------------------------------------------
1. main.cpp yra main failas.
2. MyLib3.h faile aprašytos bibliotekos.
3. Stud3.cpp faile surašytos visos funkcijos, realizuoti įvedimo/išvedimo operatoriai
4. Stud3.h faile aprašyta klasė, konstruktoriai, funkcijų deklaracijos ir pnš.
5. Failu_kurimas.cpp faile yra failų generavimo ir duomenų nuskaitymo, išvedimo į failus funkcijos.
6. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
7. Timer.h laiko skaičiavimo klasė.
8. CmakeLists.txt
9. run.bat paleidimo failas.

**Kas naujo?**
------
* Realizuoti ir demonstruojami visi *Rule of three* metodai (*desrtuctor*, *copy constructor*, *copy assignment operator*).
* Perdengti įvesties ir išvesties metodai.
* Sukurti įvesties ir išvesties operatoriai.

------
Perdengti `output` ir `input` metodai, jie skiriasi savo parametrais:
 * void output(const vector<Stud>& vec, const string& failoPav); - išveda duomenis į failą.
 * void output(const vector<Stud>& vector1); - išveda duomenis į ekraną.
 * void input(const string& failoVardas, vector<Stud>& studentai); - nuskaito duomenis iš failo.
 * void input(const string& failas, int eil); - automatiškai sugeneruoja duomenis į failą.
 * void input(); - duomenų įvedimas ranka.

Stud3.h realizuota nauja funkcija `demo`, kuri demonstruoja, kad veikia kopijavimo konstruktorius ir kopijavimo priskyrimo operatorius.

# **V1.1**
----------------------------------------------
1. main.cpp yra main failas,
2. MyLib3.h faile aprašytos bibliotekos,
3. Stud3.cpp faile surašytos visos funkcijos,
4. Stud3.h faile aprašyta klasė ir funkcijų deklaracijos.
5. Failu_kurimas.cpp faile yra failų generavimo ir duomenų išvedimo į failus funkcijos.
6. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
7. Timer.h laiko skaičiavimo klasė,
8. CmakeLists.txt
9. run.bat paleidimo failas.

**Kas naujo?**
   -------
   * Programa realizuota naudojant `class`, vietoje `struct`
   * Programa parašyta ir naudojimui su `vector`'iumi, ir su `list`'u
   * Ir `struct`, ir `class` programos versijos ištirtos su optimizavimo flag'ais `-O1`, `-O2`, `-O3`

Testų vidurkiai:
---------------

Buvo atlikti 5 testai.

Lentelėse pateiktas vidutinis testų laikas sekundėmis naudojant `vector` ir 3 dalinimo į 2 grupes strategiją.

* 100 000 įrašų:
  
| Funkcija           |Struct_vector| Class_vector|
|:-------------------|:-----------:|:-----------:|
|Failo nuskaitymas   |    0.551681 |  0.596265   |
|Rūšiavimas          |    0.042794 |  0.126591   |
|Dalinimas į 2 grupes|   0.003696  |  0.019929   |
|"Sigma" išvedimas   |  0.087069   |  0.084964   |
|"Beta" išvedimas    |  0.062781   |  0.056621   |
| Viso testo trukmė  |  0.750380   |  0.884373   |     

* 1 000 000 įrašų:
  
| Funkcija           |Struct_vector| Class_vector|
|:-------------------|:-----------:|:-----------:|
|Failo nuskaitymas   |  5.270314   |  5.751194   |
|Rūšiavimas          |  0.518232   | 1.485370    |
|Dalinimas į 2 grupes|   0.046979  |  0.139557   |
|"Sigma" išvedimas   |  0.733518   | 0.766893    |
|"Beta" išvedimas    |  0.507979   |   0.530507  |
| Viso testo trukmė  |  7.077026   |   8.673524  |

Analizė su `-O1`, `-O2`, `-O3` flag'ais:
--------------------------------------
* Struct vector:
                                
|Flag   |  Greitis (s)| exe dydis (KB) |
|:------|:------------|:---------------|
|-O1    |  112.41     |  179.87        |
|-O2    |  108.14     |   173.93       |
|-O3    |  109.83     |   187.65       |

<img src="https://github.com/user-attachments/assets/b7660335-af08-41ff-95a6-ccfb4ebbd068" alt="Description" width="500"/>



* Class vector:
                                      
|Flag   |  Greitis (s)| exe dydis (KB)|
|:------|:------------|:----------|
|-O1    |    147.91   |   174.36  |
|-O2    |   136.50    |   168.03  |
|-O3    |     136.35  |    181.86 |

<img src="https://github.com/user-attachments/assets/467ff313-2a2b-4857-be84-69862988b7ee" alt="Description" width="500"/>

* Struct list:
                                         
|Flag   |  Greitis (s)| exe dydis (KB) |
|:------|:------------|:----------|
|-O1    |     132.97  |  150.25   |
|-O2    |    139.63   |   149.39  |
|-O3    |   143.10    |   150.16  |

<img src="https://github.com/user-attachments/assets/818e6126-db34-4643-9ccc-6772b883eb8a" alt="Description" width="500"/>

* Class list:
                                        
|Flag   |  Greitis (s)| exe dydis (KB) |
|:------|:------------|:----------|
|-O1    |  148.68     |   151.14  |
|-O2    |   146.61    |  149.78   |
|-O3    |    147.77   |   153.16  |

<img src="https://github.com/user-attachments/assets/11f9f304-8a80-4907-aea8-ac0a5fa2dcac" alt="Description" width="500"/>

Tyrimo išvados:
---------------
 1 000 000 ir 10 000 000 įrašų atveju, programa realizuota su `struct ` veikia šiek tiek greičiau nei su `class`.

 Programa realizuota su `vector` konteineriu su visais flag'ais veikia greičiau nei `list` programa, tačiau jos exe failai yra didesni.
  
 Ir su `vector`'iumi, ir su `list`'u programos veikia greičiausiai su `-O2` flag'u. Išskyrus `class` `vector` programos versiją, jos `-O3` flag'as veikia nežymiai greičiau nei `-O2` flag'as.
 
 Didžiausi exe failai yra `-O3` flag'o, mažiausi `-O2`.

* Taigi, atsižvelgiant į programos veikimo greitį ir exe failų dydį, optimaliausia būtų naudoti `vector` `struct` arba `list` `struct` programos versijas, naudojant `-O2` flag'ą.
# **V1.0**
----------------------------------------------
1. main.cpp yra main failas,
2. MyLib3.h faile aprašytos bibliotekos,
3. Stud3.cpp faile surašytos visos funkcijos,
4. Stud3.h faile aprašyta struktūra ir funkcijų deklaracijos.
5. Failu_kurimas.cpp faile yra failų generavimo ir duomenų išvedimo į failus funkcijos.
6. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
7. Timer.h laiko skaičiavimo klasė,
8. CmakeLists.txt
9. run.bat paleidimo failas.

**Kas naujo?**
   -------
   * Programoje realizuotos 3 strategijos (naudotojas gali pasirinkti) studentų pagal galutinį balą skirstymui.
   * Programa parašyta ir naudojimui su vector'iumi, ir su list'u.


Testų vidurkiai:
---------------

Buvo atlikti 8 testai.

Lentelėse pateiktas vidutinis testų laikas sekundėmis naudojant vector ir list.

* 1 000 įrašų:
  
| Funkcija   | 2_strategija su vector  | 2_strategija su list|3_strategija su vector|3_strategija su list|
|:-----------|:----------:|:------------:|:------------:|:---------:|
| Failo nuskaitymas       | 0.005733   |   0.005491|  0.006346 | 0.006410  |  
| Rūšiavimas        |   0.000283   | 0.000089 |  0.000263 | 0.000096 |
|***Dalinimas į 2 grupes***  | ***0.000210***|  ***0.000087***|***0.000069*** |  ***0.000033*** |
| "Sigma" išvedimas |   0.001556 | 0.001523| 0.002205 |   0.001856 |
|"Beta" išvedimas | 0.001008 |  0.000916| 0.001464  | 0.001227 |
|Viso testo trukmė|  0.008792 |  0.008108| 0.010349  | 0.009624 |


* 10 000 įrašų:

| Funkcija               | 2_strategija su vector | 2_strategija su list | 3_strategija su vector | 3_strategija su list |
|:-----------------------|:----------------------:|:--------------------:|:----------------------:|:--------------------:|
| Failo nuskaitymas      |     0.046741                   |  0.042193            |     0.054437         |0.053289  
| Rūšiavimas             |         0.003621               |  0.001331           |        0.004881      |0.002083  
| ***Dalinimas į 2 grupes***  |          ***0.002224***    |  ***0.000858***            |         ***0.000845***       |***0.000472***
| "Sigma" išvedimas     |           0.009532            | 0.007251             |         0.010891      | 0.012339
| "Beta" išvedimas      |            0.007029            |  0.005353            |        0.008013         |0.00839
| Viso testo trukmė     |         0.069149               |  0.056989            |       0.079068         |0.07657 


* 100 000 įrašų:

| Funkcija   | 2_strategija su vector  | 2_strategija su list|3_strategija su vector|3_strategija su list|
|:-----------|:----------:|:------------:|:------------:|:---------:|
| Failo nuskaitymas       |  0.383984  |  0.332345 | 0.522110    | 0.512723 |
| Rūšiavimas        |   0.041763   | 0.019096 |  0.06225 | 0.038709 |
| ***Dalinimas į 2 grupes***     | ***0.0242208***|  ***0.011417***| ***0.007132*** | ***0.014610*** |
| "Sigma" išvedimas |   0.071508 | 0.063848| 0.096222 | 0.103482 |
|"Beta" išvedimas | 0.046491 |  0.043425| 0.072234 | 0.073484 |
|Viso testo trukmė|  0.567968 |  0.470132| 0.759952 | 0.743010 |

* 1 000 000 įrašų:

| Funkcija   | 2_strategija su vector  | 2_strategija su list|3_strategija su vector|3_strategija su list|
|:-----------|:----------:|:------------:|:------------:|:---------:|
| Failo nuskaitymas       |  4.0932  |  3.350006 |  5.702961   |  5.391963|
| Rūšiavimas        |    0.526682  | 0.401233 | 0.724726 |0.565133  |
| ***Dalinimas į 2 grupes***     |***0.164642*** |  ***0.141924***| ***0.057141*** | ***0.114295*** |
| "Sigma" išvedimas |  0.723316  | 0.583383| 0.938431 | 0.944535 |
|"Beta" išvedimas | 0.557543 | 0.398344 | 0.642816 | 0.654641 |
|Viso testo trukmė|  6.065383 |  4.874893|8.066082  |  7.670571|

* 10 000 000 įrašų:

| Funkcija   | 2_strategija su vector  | 2_strategija su list|3_strategija su vector|3_strategija su list|
|:-----------|:----------:|:------------:|:------------:|:---------:|
| Failo nuskaitymas       |   44.880362 |  34.16475 |  55.102162  | 50.802437 | 
| Rūšiavimas        |    6.517658  | 6.104373 |8.130297  | 8.220571 |
| ***Dalinimas į 2 grupes***     | ***1.941232***|  ***1.392186***| ***0.576508*** | ***1.102128*** |
| "Sigma" išvedimas |  8.124385  |6.21747 |9.368383  | 9.161067 |
|"Beta" išvedimas | 5.698845 | 4.178442 |  6.60259| 6.657571 |
|Viso testo trukmė| 67.3361  | 52.057225 | 79.779962 |75.943775  |

Tyrimo išvados:
---------------
 * Remiantis v0.3 versijos testų rezultatais antra studentu skirstymo pagal galutinį balą strategija veikia greičiau nei pirmoji.
 * Visų dydžių failams trečia strategija (naudojamas partition algoritmas) veikia greičiausiai ir su vector'iais, ir su list'ais. Išimtis: 100 000 įrašų failas. Jam greičiausiai su list'u veikė antra strategija (laiko skirtumas labai nedidelis, apie 0.003s), su vector'iumi trečia.
 * Naudojant vector'ius daug didesnis greičio skirtumas tarp antros ir trečios strategijos, nei naudojant list'us. Trečia strategija su vektoriais veikia maždaug 3 kartus greičiau.



# **V0.3**
------------------------------------------
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

# **V0.2**
--------------------------------------------------
1. Project_v0.2.cpp yra main failas,
2. MyLib.h faile aprašytos bibliotekos,
3. Stud.cpp faile surašytos visos funkcijos,
4. Stud.h faile aprašyta struktūra ir funkcijų deklaracijos.
5. Failu_kurimas.cpp faile yra failų generavimo ir duomenų išvedimo į failus funkcijos.
6. RandInt.h aprašoma atsitiktinių skaičių generavimo klasė.
7. Timer.h laiko skaičiavimo klasė.

**Kas naujo?**
-----------
   Programa leidžia:
* pasirinkti ar vartotjas nori generuoti naujus 5 failus (1000, 10000, 1000000, 10000000 įrašų)
* pasirinkti pagal ką būtų rūšiuojami išvedimo duomenys (vardą, pavardę ar galutinį balą)
* apskaičiuoti failų generavimo laiką
* apskaičiuoti failų rūšiavimo, nuskaitymo ir išvedimo laiką
* padalinti studentus į dvi grupes pagal galutinį balą ("sigma" - galutinis balas >= 5, "beta" - galutinis balas < 5).

Testų vidurkiai:
---------

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

# **V.1**
--------------------------------------------------
1. Project_v0.1.cpp yra main failas,
2. MyLib.h faile aprašytos bibliotekos,
3. Stud.cpp faile surašytos visos funkcijos,
4. Stud.h faile aprašyta struktūra ir funkcijų deklaracijos.

**Kas naujo?**
-----------
Programa leidžia vartotojui pasirinkti atsitiktinai generuojamų namų darbų kiekį.
Duomenis galima nuskaityti iš failo arba įvesti pačiam.
Išimčių valdymas:
* visi "0", "1" atsakymai į užklausas nebūtų raidė ar kitas skaičius;
* įmanoma atidaryti tekstinį failą;
* tekstinio failo eilutėje yra įvestų namų darbų ar egzamino rezultatų;
* tekstiniame faile įvesti ND ir egzamino rezultatai yra tarp 1 ir 10;
* įvestas studentų ar atsitiktinai generuojamų namų darbų skaičius nėra raidė ar kitas simbolis;
* įvesti namų darbų ir egzamino rezultatas yra tarp 1 ir 10.
Išvedimo duomenys surūšiuoti pagal pavardę.
Papildomai užkomentuota yra funkcija, kuri išvestų iš tekstinio failo nuskaitytus duomenis patikrai. Taip pat užkomentuotos eilutės, kurios išvestų atsitiktinai sugeneruotus namų darbų ir egzamino rezultatus.



  


