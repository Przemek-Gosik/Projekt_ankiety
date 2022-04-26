#include "podsumowanie.h"
#include "wczytywanie.h"
#include "test.h"
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
void tworzenie(glosy*&ilosc,int lpytan){
    glosy*head;
    ilosc=NULL;
    for(int i=0;i<lpytan;i++){
        head=new glosy;
        head->ilena1=0;
        head->ilena2=0;
        head->ilena3=0;
        head->ilena4=0;
        head->ilena5=0;
        head->ilena6=0;
        head->ilena7=0;
        head->nast=ilosc;
        ilosc=head;
    }
}
void aktualizacja(odp *odpowiedzi,glosy *ilosc,int &lankietowanych){
   odp *odpowiedzi1=odpowiedzi;
   glosy*ilosc1=ilosc;
   while(odpowiedzi1!=NULL){
       if(odpowiedzi1->odpowiedz==1)ilosc1->ilena1++;
       else if(odpowiedzi1->odpowiedz==2)ilosc1->ilena2++;
       else if(odpowiedzi1->odpowiedz==3)ilosc1->ilena3++;
       else if(odpowiedzi1->odpowiedz==4)ilosc1->ilena4++;
       else if(odpowiedzi1->odpowiedz==5)ilosc1->ilena5++;
       else if(odpowiedzi1->odpowiedz==6)ilosc1->ilena6++;
       else ilosc1->ilena7++;
   ilosc1=ilosc1->nast;
   odpowiedzi1=odpowiedzi1->nast;}
   lankietowanych++;
}
void podsumowanie(string plik3,list*adres,glosy *ilosc,int lankietowanych){
    list*adres1=adres;
    glosy*ilosc1=ilosc;
    ofstream wi(plik3.c_str());
    wi<<"W ankiecie wzielo udzial "<<lankietowanych<<"osob"<<endl;
    while(adres1!=NULL){
        cout<<adres1->pytanie<<endl;
        if(adres1->rodzaj_pytania==1){
             double j1=double((100*ilosc1->ilena1)/lankietowanych);
             double j2=double((100*ilosc1->ilena2)/lankietowanych);
             double j3=double((100*ilosc1->ilena3)/lankietowanych);
             double j4=double((100*ilosc1->ilena4)/lankietowanych);
             double j5=double((100*ilosc1->ilena5)/lankietowanych);
             double j6=double((100*ilosc1->ilena6)/lankietowanych);
             double j7=double((100*ilosc1->ilena7)/lankietowanych);
             wi<<"codziennie"<<fixed<<setprecision(1)<<j1<<"%"<<endl;
             wi<<"kilka razy w tygodniu"<<fixed<<setprecision(1)<<j2<<"%"<<endl;
             wi<<"raz w tygodniu"<<fixed<<setprecision(1)<<j3<<"%"<<endl;
             wi<<"raz w miesiacu"<<fixed<<setprecision(1)<<j4<<"%"<<endl;
             wi<<"rzadziej niz raz w miesiacu"<<fixed<<setprecision(1)<<j5<<"%"<<endl;
             wi<<"raz wroku"<<fixed<<setprecision(1)<<j6<<"%"<<endl;
             wi<<"wcale"<<fixed<<setprecision(1)<<j7<<"%"<<endl;
         ilosc1=ilosc1->nast;
        }
        adres1=adres1->nast;
    }
   wi.close();
}
void podsumowanie1(list*adres,glosy *ilosc,int lankietowanych){
    list*adres1=adres;
    glosy*ilosc1=ilosc;

    cout<<"W ankiecie wzielo udzial "<<lankietowanych<<"osob"<<endl;
    while(adres1!=NULL){
        cout<<adres1->pytanie<<endl;
        if(adres1->rodzaj_pytania==1){
             double j1=double((100*ilosc1->ilena1)/lankietowanych);
             double j2=double((100*ilosc1->ilena2)/lankietowanych);
             double j3=double((100*ilosc1->ilena3)/lankietowanych);
             double j4=double((100*ilosc1->ilena4)/lankietowanych);
             double j5=double((100*ilosc1->ilena5)/lankietowanych);
             double j6=double((100*ilosc1->ilena6)/lankietowanych);
             double j7=double((100*ilosc1->ilena7)/lankietowanych);
             cout<<"codziennie: "<<fixed<<setprecision(1)<<j1<<"%"<<endl;
             cout<<"kilka razy w tygodniu: "<<fixed<<setprecision(1)<<j2<<"%"<<endl;
             cout<<"raz w tygodniu: "<<fixed<<setprecision(1)<<j3<<"%"<<endl;
             cout<<"raz w miesiacu: "<<fixed<<setprecision(1)<<j4<<"%"<<endl;
             cout<<"rzadziej niz raz w miesiacu: "<<fixed<<setprecision(1)<<j5<<"%"<<endl;
             cout<<"raz w roku: "<<fixed<<setprecision(1)<<j6<<"%"<<endl;
             cout<<"wcale: "<<fixed<<setprecision(1)<<j7<<"%"<<endl;
         ilosc1=ilosc1->nast;
        }
        adres1=adres1->nast;
    }

}
void usuwanie3(glosy*&ilosc){
    glosy*tmp;
    while(ilosc!=NULL){
    tmp=ilosc;
    ilosc=ilosc->nast;
    delete tmp;
}
}
