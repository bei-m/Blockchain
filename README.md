# Blockchain

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
![Screenshot 2023-09-25 at 15 58 25](https://github.com/bei-m/Blockchain_private/assets/116886672/36615db4-e010-4c59-a8ba-9eb78e88133c)

## 2. Hash funkcijos efektyvumas
<img width="996" alt="Screenshot 2023-09-26 at 13 07 02" src="https://github.com/bei-m/Blockchain_private/assets/116886672/acda25e9-e1de-4597-be22-6fae090f389e">

## 3. Hash funkcijos atsparumas kolizijai
![Screenshot 2023-09-25 at 16 01 02](https://github.com/bei-m/Blockchain_private/assets/116886672/39231d0c-aecd-47a0-b443-eaf46f00d40a)

## 4. Lavinos efektas
<img width="992" alt="Screenshot 2023-09-26 at 17 07 25" src="https://github.com/bei-m/Blockchain_private/assets/116886672/cc21eacd-6bb2-4ee7-92ea-7339f9dbd609">

## Išvados
1. Funkcija veikia greitai nepaisant įvesties dydžio.
2. Funkcija yra deterministinė (nepaisant įvesties dydžio, išvesties dydis visada toks pats).
3. Funkcija yra atspari kolizijai.
4. Funkcija turi lavinos efekto savybę - vidutiniškas hash reikšmės skirtumas hex lygmenyje - 93.14%, bitų lygmenyje - 49.57%.
