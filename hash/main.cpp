#include "hash.h"

bool tikrinimas(string a, char b, char c)
{ return ((tolower(a[0])==b||tolower(a[0])==c))&&a.size()==1;}

int main ()
{
    bool yn, b;
    string choice, hash_v;
    wstring tekstas=L"";
    do
    {
        do
        {
            cout<<"Jei norite nuskaityti duomenis iš failo, spauskite 't', jei ne - spauskite 'n'. ";
            getline(cin,choice);
            b=tikrinimas(choice, 't', 'n');
        }while (!b);

        if (tolower(choice[0])=='t')
        {
            string pav;
            do
            {
                cout<<"Failai (txt) šiuo metu esantys aplanke: "<<endl;
                system("ls *.txt | grep -v 'g.txt'");
                cout<<"Įrašykite (txt) failo pavadinimą: ";
                getline(cin,pav);
                pav.find(".TXT")!=pav.npos? pav.erase(pav.length()-4):pav=pav;
                pav.find(".txt")!=pav.npos? pav=pav:pav=pav+".txt";
                const char* ff=pav.c_str();
                wifstream data(pav);
                if (!data.is_open()) {cout<<"Klaida. Nepavyko rasti tokio failo."<<endl; b=false;}
                else {b=true;}
            }while(!b);  
            wifstream data(pav);
            data.imbue(locale(locale(""), new codecvt_utf8<wchar_t>));
            wstringstream ws;
            ws<<data.rdbuf();
            tekstas=ws.str();                 
        }
        else 
        {
            wcin.imbue(locale(locale(""), new codecvt_utf8<wchar_t>));
            cout<<"Įveskite norimą tekstą: ";
            getline(wcin, tekstas);
        }
        hash_v=hash(tekstas);
        choice.clear(); tekstas.clear();
        cout<<"Hash value: "<<hash_v<<endl;
        do
        {
            cout<<"Jei norite generuoti hash kodą kitam tekstui spauskite 't', jei ne - spauskite 'n'. ";
            getline(cin,choice);
            b=tikrinimas(choice, 't', 'n');
            if (tolower(choice[0])=='t') {yn=true;}
            else {yn=false;}
        }while(!b);
    }while(yn);

    return 0;
}