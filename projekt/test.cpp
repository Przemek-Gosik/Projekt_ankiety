#include "test.h"
#include "wczytywanie.h"
#include <fstream>
#include <iostream>
#include <string>
void przeprowadzanie(list*adres,odp *&odpowiedzi){
    list *adres1=adres;
    odp *head,*tail;
    head=NULL;
    odpowiedzi=NULL;
    while(adres1!=NULL){

        cout<<adres1->pytanie<<endl;
        if(adres1->rodzaj_pytania==1){
            tail=head;
            cout<<"1-codziennie 2-kilka razy w tygodniu 3-raz w tygodniu 4-raz w miesiacu "<<endl<<"5-rzadziej niz raz w miesiacu 6-raz w roku 7-wcale"<<endl;
            head=new odp;
            do{
            cin>>head->odpowiedz;
            }while(head->odpowiedz!=1 && head->odpowiedz!=2 && head->odpowiedz!=3 && head->odpowiedz!=4 && head->odpowiedz!=5 && head->odpowiedz!=6 &&head->odpowiedz!=7 );
            head->nast=NULL;
            if(tail==NULL){odpowiedzi=head;
           }
            else
                tail->nast=head;
        }
        adres1=adres1->nast;
    }
}
void wyniki(string plik2,list*adres,odp*head){
    list *adres1=adres;
    odp*head1=head;
    int i=0;
    ofstream wy(plik2.c_str());
    while(adres1!=NULL){

       wy<<adres1->pytanie<<endl;
       if(adres1->rodzaj_pytania==1){
       if(head1->odpowiedz==1)wy<<"twoja odpowiedz :codziennie"<<endl;
       else if(head1->odpowiedz==2)wy<<"twoja odpowiedz :kilka razy w tygodniu"<<endl;
        else if(head1->odpowiedz==3)wy<<"twoja odpowiedz :raz w tygodniu"<<endl;
        else if(head1->odpowiedz==4)wy<<"twoja odpowiedz :raz w miesiacu"<<endl;
        else if(head1->odpowiedz==5)wy<<"twoja odpowiedz :rzadziej niz raz w miesiacu"<<endl;
        else if(head1->odpowiedz==6)wy<<"twoja odpowiedz :raz w roku"<<endl;
       else wy<<"twoja odpowiedz :wcale "<<endl;
       head1=head1->nast;
    }
        adres1=adres1->nast;

        }
        i++;

   wy.close();}
void wyniki2(list*adres,odp*head){

      list *adres1=adres;
      odp*head1=head;
      while(adres1!=NULL){

       cout<<adres1->pytanie<<endl;
       if (adres1->rodzaj_pytania==1){
       if(head1->odpowiedz==1)cout<<"twoja odpowiedz :codziennie"<<endl;
        else if(head1->odpowiedz==2)cout<<"twoja odpowiedz :kilka razy w tygodniu"<<endl;
        else if(head1->odpowiedz==3)cout<<"twoja odpowiedz :raz w tygodniu"<<endl;
        else if(head1->odpowiedz==4)cout<<"twoja odpowiedz :raz w miesiacu"<<endl;
        else if(head1->odpowiedz==5)cout<<"twoja odpowiedz :rzadziej niz raz w miesiacu"<<endl;
        else if(head1->odpowiedz==6)cout<<"twoja odpowiedz :raz w roku"<<endl;
        else cout<<"twoja odpowiedz :wcale "<<endl;
        head1=head1->nast;
         }
        adres1=adres1->nast;

        }

   }
void usuwanie2(odp*&head){
    odp*tmp;
    while(head!=NULL){
    tmp=head;
    head=head->nast;
    delete tmp;
    }

}

