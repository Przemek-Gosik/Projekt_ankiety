#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "wczytywanie.h"
#include "podsumowanie.h"
#include "test.h"
#include <iomanip>
using namespace std;

void ankieta()
{   list*adres;
    odp*odpowiedzi;
    glosy*ilosc;
    int lpytan;
    int lankietowanych=0;
    wczytywanie("pytania.txt",adres,lpytan);
    tworzenie(ilosc,lpytan);
    cout<<lpytan<<endl;
    int znakr;
    do{
    cout << "Witamy ! Przygotowalismy dla ciebie krotka ankiete na temat odzywiania sie.Wypelnienie jej zajmie ci kilka minut ." << endl;
    cout<<"Do poruszania sie po ankiecie uzywaj klawiszy numerycznych."<<endl;
    cout<<"Nacisnij 0 aby przejsc do testu"<<endl;
    int znak;
    do{
    cin>>znak;
    }while(znak!=0);
    int znak1;
    do{
    przeprowadzanie(adres,odpowiedzi);
    cout<<"1-Zatwierdz swoje podejscie 2-Powtorz bez zapisywania"<<endl;
    do{
        cin>>znak1;
    }while(znak1!=1 && znak1!=2);
    }while(znak1==2);
    if(znak1==1){
    int znak2,znak3;
    cout<<lankietowanych<<endl;
    aktualizacja(odpowiedzi,ilosc,lankietowanych);
    cout<<"Czy chcesz wyswietlic swoje podejscie?"<<endl;
    cout<<"1-tak 2-nie"<<endl;
    do{
    cin>>znak3;
    }while(znak3!=1 && znak3!=2);
    if(znak3==1){
    wyniki2(adres,odpowiedzi);
    }
    cout<<"Czy chcesz zapisac swoje podejscie w pliku ?"<<endl;
    cout<<"1-tak 2-nie"<<endl;
    do{
    cin>>znak2;
    }while(znak2!=1 && znak2!=2);
    if(znak2==1){
    string plik2;
    cout<<"Podaj nazwe?"<<endl;
    cout<<"(Poprawne rozszerzenie pliku w nazwie nie jest wymagane)"<<endl;
    cin>>plik2;
    plik2+=".txt";
    wyniki(plik2,adres,odpowiedzi);
    }
    }
    do{
    cout<<"Czy chcesz wykonac kolejna ankiete?"<<endl;
    cout<<"1-tak  2-nie"<<endl;
    cin>>znakr;
    }while(znakr!=1 && znakr!=2);
    usuwanie2(odpowiedzi);

   }while(znakr==1);
    cout<<"Czy chcesz wygenerowac podsumowanie przeprowadzonych ankiet?"<<endl;
    cout<<"1-tak 2-nie"<<endl;
    int znak4,znak5,znak6;
    do{
        cin>>znak4;
    }while(znak4!=1 && znak4!=2);
    if(znak4==1){
    cout<<"Czy chcesz wyswietlic podsumowanie ?"<<endl;
    cout<<"1-tak 2-nie"<<endl;
    do{
        cin>>znak6;
    }while(znak6!=1 && znak6!=2);
    if(znak6==1) podsumowanie1(adres,ilosc,lankietowanych);
    cout<<"Czy chcesz zapisac w pliku podsumowanie ?"<<endl;
    cout<<"1-tak 2-nie"<<endl;
    do{
        cin>>znak5;
    }while(znak5!=1 && znak5!=2);
    if(znak5==1){
        string plik3;
        cout<<"Podaj nazwe"<<endl;
        cout<<"(Poprawne rozszerzenie pliku w nazwie nie jest wymagane)"<<endl;
        cin>>plik3;
        plik3+=".txt";
        podsumowanie(plik3,adres,ilosc,lankietowanych);
    }
    }

     usuwanie3(ilosc);
     usuwanie(adres);
    cout<<"Dowidzenia!"<<endl;
     }
