# Blockchain
Blokų grandinių technologijų 1 darbas - Hash generatoriaus kūrimas.
## Hash funkcijos pseudokodas
![image](https://github.com/bei-m/Blockchain/assets/116886672/ef3bb9b6-70e4-42d8-9a62-eea6a18167c3)

## Eksperimentinis tyrimas ir rezultatų analizė
Testavimui naudoti tekstiniai failai:
* m.txt - failas, kuriame yra vienas simbolis 'm'.
* b.txt - failas, kuriame yra vienas simbolis 'b'.
* 2000.txt - failas, kuriame yra 2000 atsitiktinai sugeneruotų simbolių.
* 5000.txt - failas, kuriame yra 5000 atsitiktinai sugeneruotų simbolių.
* 3500a.txt ir 3500b.txt - failai, kuriuose yra 3500 atsitiktinai sugeneruotų simbolių ir skiriasi vienu simboliu (53 simbolis faile 3500a.txt - 'F', 3500b.txt - 'Q'.)
* tuscias.txt - tuščias failas.
* konstitucija.txt - failas, kuriame yra Lietuvos Respublikos konstitucijos tekstas.
* poros10.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 10 simbolių ilgio eilučių.
* poros100.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 100 simbolių ilgio eilučių.
* poros500.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 500 simbolių ilgio eilučių.
* poros1000.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 1000 simbolių ilgio eilučių.
* diffsymb10.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 10 simbolių ilgio eilučių, kurios porose skiriasi vienu (paskutiniu) simboliu.
* diffsymb100.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 100 simbolių ilgio eilučių, kurios porose skiriasi vienu (paskutiniu) simboliu.
* diffsymb500.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 500 simbolių ilgio eilučių, kurios porose skiriasi vienu (paskutiniu) simboliu.
* diffsymb1000.txt - failas, kuriame yra 25 000 atsitiktinai sugeneruotų 1000 simbolių ilgio eilučių, kurios porose skiriasi vienu (paskutiniu) simboliu.
  
## 1.  Hash funkcijos veikimas
![img2](https://github.com/bei-m/Blockchain/assets/116886672/78cf0e6a-aa60-4216-b6da-41838c24cbd6)

## 2. Hash funkcijos efektyvumas
<img width="996" alt="img3" src="https://github.com/bei-m/Blockchain/assets/116886672/d3b73ce0-b569-4004-9763-0c45a39827b3">

## 3. Hash funkcijos atsparumas kolizijai
![img1](https://github.com/bei-m/Blockchain/assets/116886672/d6fd8ef6-bbdb-4c28-8d72-5666fa345296)

## 4. Lavinos efektas
<img width="992" alt="img4" src="https://github.com/bei-m/Blockchain/assets/116886672/0bf1d2fe-bd94-49d6-9913-70f51a92b656">

## 5. Hash funkcijos veikimas naudojant salt'us
Naudotojui pasirinkus naudoti salt'us, naudojant tą patį failą hash reikšmė kiekvieną kartą yra skirtinga, nes salt'o ilgis ir reikšmė yra generuojami atsitiktinai.
![Screenshot 2023-10-01 at 18 50 27](https://github.com/bei-m/Blockchain/assets/116886672/b9f868c1-f9be-4303-a9a5-b164cc0bf903)

## Išvados
1. Funkcija veikia greitai nepaisant įvesties dydžio.
2. Funkcija yra deterministinė (nepaisant įvesties dydžio, išvesties dydis visada toks pats).
3. Funkcija yra atspari kolizijai.
4. Funkcija turi lavinos efekto savybę - vidutiniškas hash reikšmės skirtumas hex lygmenyje - 93.14%, bitų lygmenyje - 49.57%.
5. Funkcija (pasirinkus naudoti salt'us) turi pakankamai geras hiding ir puzzle-friendliness savybes, nes prie bet kokios įvesties yra pridedamas atsitiktinai sugeneruotas salt'as. 
