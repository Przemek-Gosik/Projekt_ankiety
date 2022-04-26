/**
  *\file wczytywanie.h
  *\brief Plik nagłówkowy zawierający funkcje do pobierania pytań z pliku tekstowego
  */
#ifndef WCZYTYWANIE_H
#define WCZYTYWANIE_H
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
/** \brief Element listy dynamicznej
 *
 * Element zawierający pytanie pobrane z pliku oraz jego rodzaj.
 */
struct list{
    ///Treść pytania
    string pytanie;
    ///Rodzaj pytania tzn takie na które trzeba odpowiadać albo takie które należy tylko wyświetlić
    int rodzaj_pytania;
    ///Wskaźnik na następny elemnt listy
    list*nast;
};
/**
 * @brief wczytywanie
 *
 * Funkcja wczytuje pytania z pliku oraz zapamiętuje liczbe pytań na które należy odpowiadać
 * @param plik Nazwa pliku z pytaniami
 * @param adres Lista dynamiczna zapisująca poszczególne pytania
 * @param lpytan Parametr zliczający liczbe pytań które wymagają odpowiedzi od użytkownika
 */
void wczytywanie(string plik,list*&adres,int &lpytan);
/**
 * @brief usuwanie
 *
 * Funkcja dealokuje pamięć z listy dynamicznej
 * @param adres Lista dynamiczna z pytaniami
 */
void usuwanie(list *adres);
#endif // WCZYTYWANIE_H
