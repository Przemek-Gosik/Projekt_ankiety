/**
  * \file test.h
  *\brief Plik nagłówkowy zawierający funkcje do zadawania pytań i zapisywania wyniku
  */
#ifndef TEST_H
#define TEST_H
#include "wczytywanie.h"
#include <fstream>
#include <iostream>
using namespace std;
/** \brief Element listy dynamiczej
 *
 * Lista pobiera odpowiedzi na poszczególne pytania od użytkownika.
 */
struct odp{
   ///Liczba określająca wybór odpowiedź użytkownika
   int odpowiedz;
   ///Wskaźnik na następny element
   odp*nast;
};
/**
 * @brief przeprowadzanie
 *
 * Funkcja zadaje użytkownikowi pytania i pobiera od niego odpowiedzi.
 * @param adres Lista dynamiczna z pytaniami z ankiety
 * @param odpowiedzi Lista dynamiczna z odpowiedziami użytkownika
 */
void przeprowadzanie(list*adres,odp *&odpowiedzi);
/**
 * @brief wyniki
 *
 * Funkcja zapisuje odpowiedzi  z ankiety uzytkownika w pliku o wczytanej nazwie.
 * @param plik2 Nazwa pliku
 * @param adres Lista dynamiczna z pytaniami z ankiety
 * @param head Lista dynamiczna z odpowiedziami użytkownika
 */
void wyniki(string plik2,list *adres,odp*head);
/**
 * @brief wyniki2
 *
 * Funkcja wypisuje odpowiedzi użytkownika z ankiety.
 * @param adres Lista dynamiczna z pytaniami z ankiety
 * @param head Lista dynamiczna z odpowiedziami użytkownika
 */
void wyniki2(list *adres,odp*head);
/**
 * @brief usuwanie2
 *
 * Funkcja dealokuje pamięć po liście dynamicznej z odpowiedziami.
 * @param odpowiedzi
 */
void usuwanie2(odp *&odpowiedzi);

#endif // TEST_H
