/**
  * \file podsumowanie.h
  * \brief Plik nagłówky zawierający liste dynamiczną zliczającą głosy oraz funkcje generującą podsumowanie
  */
#ifndef PODSUMOWANIE_H
#define PODSUMOWANIE_H
#include <string>
#include <fstream>
#include <iostream>
#include "wczytywanie.h"
#include <cmath>
#include <iomanip>
#include "test.h"
using namespace std;
/** \brief Element listy dynamicznej
 *
 *Element okresla ile bylo glosow na kazda z opcji w kazdym pytaniu.
 */
struct glosy{
/// liczba okreslajaca ile osob wybralo 1 w danym pytaniu
int ilena1;
/// liczba okreslajaca ile osob wybralo 2 w danym pytaniu
int ilena2;
/// liczba okreslajaca ile osob wybralo 3 w danym pytaniu
int ilena3;
/// liczba okreslajaca ile osob wybralo 4 w danym pytaniu
int ilena4;
/// liczba okreslajaca ile osob wybralo 5 w danym pytaniu
int ilena5;
/// liczba okreslajaca ile osob wybralo 6 w danym pytaniu
int ilena6;
/// liczba okreslajaca ile osob wybralo 7 w danym pytaniu
int ilena7;
/// wskaźnik na następny elemment listy
glosy*nast;
};
/**
 * @brief tworzenie
 *
 * Funkcja tworzy liste dynamiczną o określonej wielkośi zawierającą liczby glosow oddanych na poszczegolne opcje w każdym pytaniu.
 * @param ilosc Lista dynamiczna zliczająca głosy
 * @param lpytan Określa wielkość powstałej listy
 */
void tworzenie(glosy *&ilosc,int lpytan);
/**
 * @brief aktualizacja
 *
 * Funkcja dolicza głosy z przeprowadzonej ankiety
 * @param odpowiedzi Lista zawierająca odpowiedzi użytkownika na poszczególne pytania
 * @param ilosc Lista dynamiczna zliczająca głosy
 * @param lankietowanych Liczba przeprowadzonych ankiet
 */
void aktualizacja(odp*odpowiedzi,glosy*ilosc,int &lankietowanych);
/**
 * @brief podsumowanie
 *
 * Funkcja zapisuje do pliku podsumowanie przeprowadzonych ankiet podczas pracy programu.
 * @param plik3 Nazwa pliku gdzie zostanie zapisane podsumowanie
 * @param adres Lista dynamiczna zawierająca pytania z ankiety
 * @param ilosc Lista dynamiczna zliczająca głosy
 * @param lankietowanych Liczba przeprowadzonych ankiet
 */
void podsumowanie(string plik3,list*adres,glosy *ilosc,int lankietowanych);
/**
 * @brief podsumowanie1
 *
 * Funkcja wypisująca podsumowanie przeprowadzonych ankiet
 * @param adres Lista dynamiczna zawierająca pytania
 * @param ilosc Lista dynamiczna zliczająca głosy
 * @param lankietowanych Liczba przeprowadzonych ankiet
 */
void podsumowanie1(list*adres,glosy *ilosc,int lankietowanych);
/**
 * @brief usuwanie3
 *
 * Lista dynamiczna dealokująca pamięć po liście dynamicznej
 * @param ilosc Lista zliczająca głosy
 */
void usuwanie3(glosy*&ilosc);
#endif // PODSUMOWANIE_H
