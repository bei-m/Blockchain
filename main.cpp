#include "mylib.h"
#include "Justas.h" // https://github.com/JFour404/blockChainTech/tree/v0.2 
#include "Dovydas.h" // https://github.com/dovydasgre/Bloku-grandines-hash/releases/tag/V0.1 
#include "Rimvydas.h" // https://github.com/rimvydascivilis/blockchain-hash/releases/tag/v0.1.1
#include "Matas.h" // https://github.com/Matas28731449/hash-generator/tree/v0.2 
#include "Gabriele.h" // https://github.com/gabskir/VU-blockchain/tree/v0.1 
#include "Migle.h" // https://github.com/bei-m/Blockchain/releases/tag/v.01
#include "Sintija.h" // https://github.com/sinte19920/Blockchain_technologies/releases/tag/Hash_v0.2 
#include "Veronika.h" // https://github.com/VeronikaMack/Blockchain/releases/tag/V0.2

struct dalyvis
{
    string vardas;
    float laikas=0;
    float kolizijos=0;
    float hex=0;
    float bin=0;
    float vieta=0;
    vector<float> vec1;
    vector<float> vec2;

    dalyvis (const string a) : vardas(a), vec1(), vec2 () {}
    void setlaikas(float a) {laikas=a;} //setters
    void setkolizijos(float a) {kolizijos=a;}
    void sethex(float a) {hex=a;}
    void setbin(float a) {bin=a;}
    void setvieta (float a) {vieta=a;}
    void add1 (float a) {vec1.push_back(a);}
    void add2 (float a) {vec2.push_back(a);}
    float avg (vector<float> &vec) //vidurkio skaiciavimas
        {
            float sum=0;
            for (auto &i:vec) {sum+=i;}
            sum=sum/(vec.size());
            vec.clear();
            return sum;
        }
};

string skaitymas_s (string pav)
{
    string tekstas;
    ifstream data(pav);
    stringstream ws;
    ws<<data.rdbuf();
    tekstas=ws.str();

    return tekstas;
}
wstring skaitymas_ws (string pav)
{
    wstring tekstas;
    wifstream data(pav);
    data.imbue(locale(locale(""), new codecvt_utf8<wchar_t>));
    wstringstream ws;
    ws<<data.rdbuf();
    tekstas=ws.str();

    return tekstas;
}
void laikas (string pav, vector<dalyvis> &dalyviai)
{
    string hash;
    duration<double> diff;
    string tekstas1=skaitymas_s(pav);
    wstring tekstas2=skaitymas_ws(pav);
    auto a = high_resolution_clock::now();
    hash=migle(tekstas2);
    auto b = high_resolution_clock::now();
    hash=rimvydas(hash_f(tekstas1));
    auto c = high_resolution_clock::now();
    hash=dovydas(tekstas1);
    auto d = high_resolution_clock::now();
    hash=justas(tekstas1);
    auto e = high_resolution_clock::now();
    hash=matas(tekstas1);
    auto f = high_resolution_clock::now();
    hash=gabriele(tekstas1);
    auto g = high_resolution_clock::now();
    hash=sintija(tekstas1);
    auto h = high_resolution_clock::now();
    hash=veronika(tekstas1);
    auto i = high_resolution_clock::now();
    diff=b-a; dalyviai[0].add1(diff.count());
    diff=c-b; dalyviai[1].add1(diff.count());
    diff=d-c; dalyviai[2].add1(diff.count());
    diff=e-d; dalyviai[3].add1(diff.count());
    diff=f-e; dalyviai[4].add1(diff.count());
    diff=g-f; dalyviai[5].add1(diff.count());
    diff=h-g; dalyviai[6].add1(diff.count());
    diff=i-h; dalyviai[7].add1(diff.count());
}

void kolizijos (string pav, vector<dalyvis> &dalyviai)
{
    int sk=0;
    ifstream data1(pav);
    string tekstas1, tekstas2;
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        if (rimvydas(hash_f(tekstas1))==rimvydas(hash_f(tekstas2))) {sk++;}
        tekstas1.clear(); tekstas2.clear();
    }
    dalyviai[1].add1(sk); sk=0;
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        if (dovydas(tekstas1)==dovydas(tekstas2)) {sk++;} 
        tekstas1.clear(); tekstas2.clear();
    }
    dalyviai[2].add1(sk); sk=0;
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        if (justas(tekstas1)==justas(tekstas2)) {sk++;}
        tekstas1.clear(); tekstas2.clear();
    }
    dalyviai[3].add1(sk); sk=0;
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        if (matas(tekstas1)==matas(tekstas2)) {sk++;}
        tekstas1.clear(); tekstas2.clear();
    }
    dalyviai[4].add1(sk); sk=0;
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        if (gabriele(tekstas1)==gabriele(tekstas2)) {sk++;}
        tekstas1.clear(); tekstas2.clear();
    }
    dalyviai[5].add1(sk); sk=0;
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        if (sintija(tekstas1)==sintija(tekstas2)) {sk++;}
        tekstas1.clear(); tekstas2.clear();
    }
    dalyviai[6].add1(sk); sk=0;
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        if (veronika(tekstas1)==veronika(tekstas2)) {sk++;}
        tekstas1.clear(); tekstas2.clear();
    }
    dalyviai[7].add1(sk); sk=0;
    wifstream data2(pav);
    data2.imbue(locale(locale(""), new codecvt_utf8<wchar_t>));
    wstring tekstas3, tekstas4;
    while (data2>>tekstas3)
    {
        data2>>tekstas4;
        if (migle(tekstas3)==migle(tekstas4)) {sk++;}
        tekstas3.clear(); tekstas4.clear();
    }
    dalyviai[0].add1(sk);

}

string hextobinary (string h) //verciama hex reiksme i binary
{
    std::unordered_map<char, string> repl = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'a', "1010"}, {'b', "1011"},
        {'c', "1100"}, {'d', "1101"}, {'e', "1110"}, {'f', "1111"}
        };
    string b;
    for (int i=0; i<64; i++)
    {
        b+=repl[h[i]];
    }
    return b; 
}
void palyginimas (string h1, string h2, float &pr1, float &pr2) //lyginamas vienos poros skirtumas hex ir bitu lygmeniuose
{
    string b1, b2;
    pr1=0; pr2=0;
    transform(h1.begin(), h1.end(), h1.begin(), ::tolower);
    transform(h2.begin(), h2.end(), h2.begin(), ::tolower);
    b1=hextobinary(h1);
    b2=hextobinary(h2);
    int sk=0;
    for (int j=0; j<64; j++)
    {
        if (h1[j]!=h2[j]) {sk++;}
    }
    pr1=sk*1.0*100/64; //skaiciuojamas procentinis skirtumas
    sk=0;
    for (int j=0; j<256; j++)
    {
        if (b1[j]!=b2[j]) {sk++;}
    }
    pr2=sk*1.0*100/256;  //skaiciuojamas procentinis skirtumas
}
void skirtumas (string pav, vector<dalyvis> &dalyviai)
{
    vector<float> infoh, infob;
    string tekstas1, tekstas2;
    wstring tekstas3, tekstas4;
    string h1, h2;
    float pr1=0, pr2=0, avg=0;   
    wifstream data2(pav);
    data2.imbue(locale(locale(""), new codecvt_utf8<wchar_t>));
    while (data2>>tekstas3)
    {
        data2>>tekstas4;
        h1=migle(tekstas3); h2=migle(tekstas4); palyginimas(h1, h2, pr1, pr2);
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[0].avg(infoh); dalyviai[0].add1(avg); avg=dalyviai[0].avg(infob); dalyviai[0].add2(avg);
    ifstream data1(pav);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        h1=rimvydas(hash_f(tekstas1)); h2=rimvydas(hash_f(tekstas2)); palyginimas(h1, h2, pr1, pr2); 
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[1].avg(infoh); dalyviai[1].add1(avg); avg=dalyviai[1].avg(infob); dalyviai[1].add2(avg);
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        h1=dovydas(tekstas1); h2=dovydas(tekstas2); palyginimas(h1, h2, pr1, pr2); 
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[2].avg(infoh); dalyviai[2].add1(avg); avg=dalyviai[2].avg(infob); dalyviai[2].add2(avg);
    data1.clear(); data1.seekg(0, std::ios::beg);
     while (data1>>tekstas1)
    {
        data1>>tekstas2;
        h1=justas(tekstas1); h2=justas(tekstas2); palyginimas(h1, h2, pr1, pr2); 
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[3].avg(infoh); dalyviai[3].add1(avg); avg=dalyviai[3].avg(infob); dalyviai[3].add2(avg);
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        h1=matas(tekstas1); h2=matas(tekstas2); palyginimas(h1, h2, pr1, pr2); 
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[4].avg(infoh); dalyviai[4].add1(avg); avg=dalyviai[4].avg(infob); dalyviai[4].add2(avg);
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        h1=gabriele(tekstas1); h2=gabriele(tekstas2); palyginimas(h1, h2, pr1, pr2); 
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[5].avg(infoh); dalyviai[5].add1(avg); avg=dalyviai[5].avg(infob); dalyviai[5].add2(avg);
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        h1=sintija(tekstas1); h2=sintija(tekstas2); palyginimas(h1, h2, pr1, pr2); 
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[6].avg(infoh); dalyviai[6].add1(avg); avg=dalyviai[6].avg(infob); dalyviai[6].add2(avg);
    data1.clear(); data1.seekg(0, std::ios::beg);
    while (data1>>tekstas1)
    {
        data1>>tekstas2;
        h1=veronika(tekstas1); h2=veronika(tekstas2); palyginimas(h1, h2, pr1, pr2); 
        infoh.push_back(pr1); infob.push_back(pr2); h1.clear(); h2.clear();
    }
    avg=dalyviai[7].avg(infoh); dalyviai[7].add1(avg); avg=dalyviai[7].avg(infob); dalyviai[7].add2(avg);
}

int main ()
{
    vector<dalyvis> dalyviai={{"Migle"}, {"Rimvydas"}, {"Dovydas"}, {"Justas"}, {"Matas"}, {"Gabriele"}, {"Sintija"}, {"Veronika"}};
    float avg=0;
    //------------TESTAVIMAS------------
    //(ir vidurkiu skaiciavimas)
    cout<<"Vykdomas laiko testavimas."<<endl;
    for (int i=1; i<=4; i++)
    { 
        cout<<"Vykdomas testas Nr. "<<i<<endl;
        laikas("laikas."+to_string(i)+".txt", dalyviai);
    }
    for (int i=0; i<dalyviai.size(); i++)
    {
        avg=dalyviai[i].avg(dalyviai[i].vec1);
        dalyviai[i].setlaikas(avg);
    }

    cout<<"Vykdomas kolizijų testavimas."<<endl;
    for (int i=1; i<=4; i++)
    {
        cout<<"Vykdomas testas Nr. "<<i<<endl;
        kolizijos ("kolizijos."+to_string(i)+".txt", dalyviai);
    }
     for (int i=0; i<dalyviai.size(); i++)
    {
        avg=dalyviai[i].avg(dalyviai[i].vec1);
        dalyviai[i].setkolizijos(avg);
    }

    cout<<"Vykdomas skirtumo testavimas."<<endl;
    for (int i=1; i<=4; i++)
    {
        cout<<"Vykdomas testas Nr. "<<i<<endl;
        skirtumas ("diff."+to_string(i)+".txt", dalyviai);
    }
    for (int i=0; i<dalyviai.size(); i++)
    {
        avg=dalyviai[i].avg(dalyviai[i].vec1);
        dalyviai[i].sethex(avg);
        avg=dalyviai[i].avg(dalyviai[i].vec2);
        dalyviai[i].setbin(avg);
    }
    
    //------------(reitingavimas)------------
    sort(dalyviai.begin(), dalyviai.end(), [](const dalyvis &a, const dalyvis &b) {return a.laikas < b.laikas;});
    cout<<endl<<"Reitingas pagal greitį: "<<endl;
    for (auto i=0; i<dalyviai.size(); i++)
    {
        dalyviai[i].add1(i+1);
        cout<<i+1<<". "<<dalyviai[i].vardas<<" "<<dalyviai[i].laikas<<" s"<<endl;
    }
    sort(dalyviai.begin(), dalyviai.end(), [](const dalyvis &a, const dalyvis &b) {return a.kolizijos < b.kolizijos;});
    cout<<endl<<"Reitingas pagal kolizijas: "<<endl;
    for (auto i=0; i<dalyviai.size(); i++)
    {
        if (dalyviai[i].kolizijos==0){cout<<1; dalyviai[i].add1(1);}
        else {cout<<i+1; dalyviai[i].add1(i+1);}
        cout<<". "<<dalyviai[i].vardas<<" "<<dalyviai[i].kolizijos<<endl;
    }
    sort(dalyviai.begin(), dalyviai.end(), [](const dalyvis &a, const dalyvis &b) {return a.hex > b.hex;});
    cout<<endl<<"Reitingas pagal hex lygmens skirtumą: "<<endl;
    for (auto i=0; i<dalyviai.size(); i++)
    {
        dalyviai[i].add1(i+1);
        cout<<i+1<<". "<<dalyviai[i].vardas<<" "<<dalyviai[i].hex<<" %"<<endl;
    }
    sort(dalyviai.begin(), dalyviai.end(), [](const dalyvis &a, const dalyvis &b) {return a.bin > b.bin;});
    cout<<endl<<"Reitingas pagal bitų lygmens skirtumą: "<<endl;
    for (auto i=0; i<dalyviai.size(); i++)
    {
        dalyviai[i].add1(i+1);
        cout<<i+1<<". "<<dalyviai[i].vardas<<" "<<dalyviai[i].bin<<" %"<<endl;
    }  
    for (int i=0; i<dalyviai.size(); i++)
    {
        float v=dalyviai[i].avg(dalyviai[i].vec1);
        dalyviai[i].setvieta(v);
    }
    sort(dalyviai.begin(), dalyviai.end(), [](const dalyvis &a, const dalyvis &b) 
    {if(a.vieta==b.vieta) {return a.bin > b.bin;} else {return a.vieta < b.vieta;}});
    cout<<endl<<"Bendras reitingas: "<<endl;
    for (int i=0; i<dalyviai.size(); i++) 
    {cout<<i+1<<". "<<dalyviai[i].vardas<<endl;}

    return 0;
}