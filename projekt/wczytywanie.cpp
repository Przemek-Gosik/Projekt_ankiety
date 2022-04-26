#include "wczytywanie.h"
#include <fstream>
#include <iostream>
#include <string>
void wczytywanie (string plik,list*&adres,int &lpytan){
   ifstream we(plik.c_str());
   list *ogon;
   list*glowa;
   glowa=NULL;
   adres=NULL;
   lpytan=0;
    while (!we.eof()){
        ogon=glowa;
        string linia;
        getline(we,linia);
        glowa=new list;
        glowa->pytanie=linia;
        if(glowa->pytanie[linia.length()-1]=='?')
            glowa->rodzaj_pytania=0;
        else{
            lpytan++;
            glowa->rodzaj_pytania=1;}
         glowa->nast=NULL;
        if(ogon==NULL){adres=glowa;
      }
        else {
            ogon->nast=glowa;
    }
    }
   we.close();

}
void usuwanie(list*adres){
    list*tmp;
    while(adres!=NULL){
    tmp=adres;
    adres=adres->nast;
    delete tmp;
    }
}
