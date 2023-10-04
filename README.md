# Blockchain
Blokų grandinių technologijų 1 darbas - Hash generatoriaus kūrimas.

## Grupės hash funkcijų lyginamoji analizė
### Testavimo ir reitingavimo eiga:
Yra vykdomi 4 testai:
1. Veikimo trukmės testavimas
2. Kolizijų testavimas
3. Procentinis skirtumas hex lygmenyje
4. Procentinis skirtumas bitų lygmenyje

Po kiekvieno testo yra sudaromi atskiri reitingai, kuriuose visi dalyviai yra išrikiuojami nuo geriausio rezultato iki blogiausio. Vėliau skaičiuojamas bendras reitingas pagal formulę:
<br>
<img width="516" alt="formule" src="https://github.com/bei-m/Blockchain/assets/116886672/df6a1f39-93ab-4d37-8e8b-bd5f3e58bc90">

Jeigų testų metu du dalyviai turi tą pati rezultatą jiems skiriama ta pati vieta, tačiau skaičiuojant bendrą reitingą yra teikiama pirmenybė dalyviui, kurio funkcija generavo didesnį procentinį skirtumą bitų lygmenyje turinčią hash reikšmę.

#### Dalyviai:
Miglė    https://github.com/bei-m/Blockchain/releases/tag/v.01 <br>
Rimvydas https://github.com/rimvydascivilis/blockchain-hash/releases/tag/v0.1.1 <br>
Dovydas  https://github.com/dovydasgre/Bloku-grandines-hash/releases/tag/V0.1 <br>
Justinas  https://github.com/JFour404/blockChainTech/tree/v0.2 <br>
Matas     https://github.com/Matas28731449/hash-generator/tree/v0.2 <br>
Gabrielė  https://github.com/gabskir/VU-blockchain/tree/v0.1 <br>
Sintija  https://github.com/sinte19920/Blockchain_technologies/releases/tag/Hash_v0.2 <br> 
Veronika https://github.com/VeronikaMack/Blockchain/releases/tag/V0.2 <br>

#### Testavimui naudoti failai:
* Veikimo trukmės testavimas
  * laikas.1.txt, laikas.2.txt, laikas.3.txt, laikas.4.txt - failai, kuriuose yra po 100 000 atsitiktinai sugeneruotų simbolių.
* Kolizjų testavimas
  * kolizijos.1.txt - failas, kuriame yra 25 000 eilučių po 10 atsitiktinai sugeneruotų simbolių.
  * kolizijos.2.txt - failas, kuriame yra 25 000 eilučių po 100 atsitiktinai sugeneruotų simbolių.
  * kolizijos.3.txt - failas, kuriame yra 25 000 eilučių po 500 atsitiktinai sugeneruotų simbolių.
  * kolizijos.4.txt - failas, kuriame yra 25 000 eilučių po 1000 atsitiktinai sugeneruotų simbolių.
* Procentinis skirtumas hex ir bitų lygmeniuose
  * diff.1.txt - failas, kuriame yra 25 000 eilučių po 10 atsitiktinai sugeneruotų simbolių, kurios porose skiriasi vienu (paskutiniu) simboliu.
  * diff.2.txt - failas, kuriame yra 25 000 eilučių po 100 atsitiktinai sugeneruotų simbolių, kurios porose skiriasi vienu (paskutiniu) simboliu.
  * diff.3.txt - failas, kuriame yra 25 000 eilučių po 500 atsitiktinai sugeneruotų simbolių, kurios porose skiriasi vienu (paskutiniu) simboliu.
  * diff.4.txt - failas, kuriame yra 25 000 eilučių po 1000 atsitiktinai sugeneruotų simbolių, kurios porose skiriasi vienu (paskutiniu) simboliu.

## Testavimo rezultatai
<img width="633" alt="rez" src="https://github.com/bei-m/Blockchain/assets/116886672/da24794e-1fd4-41bf-931e-fef80413aa18">

# Bendras reitingas
<img width="152" alt="bendras" src="https://github.com/bei-m/Blockchain/assets/116886672/cdc99137-6703-444c-9589-030bcdc06da7">


