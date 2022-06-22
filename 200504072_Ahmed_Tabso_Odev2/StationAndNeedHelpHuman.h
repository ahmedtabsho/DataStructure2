#ifndef STATIONANDNEEDHELPHUMAN_H_INCLUDED
#define STATIONANDNEEDHELPHUMAN_H_INCLUDED
#include <iostream>
#include "List.h"
#include "List.cpp"

using namespace std;

/*
    bu dosyada nokta, yardima ihtiyaci olan ve durak siniflari yazildi
    kendi olusturdugum List sinifi kullanildi.
*/

//nokta yapsi
struct Cell{
public:
    int x;
    int y;
    Cell(int x = -1 , int y = -1){
        this->x = x;
        this->y = y;
    }
};

class NeedHelpHuman{
public:
    int point;
    string name;
    int src_x;
    int src_y;
    int des_x;
    int des_y;
    string src_str;
    string des_str;
    void setParameters(int point, string name, int src_x, int src_y, int des_x, int des_y, string src_str, string des_str);//yolcu olusturmak icin paramertreleri atayan fonksiyon
    bool operator < (const NeedHelpHuman& rhs);// iki yolcu arasinda karsilastirma yaparken yolcularin puanlarina gore
    bool operator > (const NeedHelpHuman& rhs);// karsilastirmayi yapabilmek icin buyuk kucuk operatorleri asiri olarak yuklendi.
};

class Station{
public:
    string stationName;
    int stationNumber;
    int x;
    int y;
    List<NeedHelpHuman> waiters;// durakta olacak insanlar
    void setParameters(string stationName, int stationNumber, int x, int y);//duragin bilgilerini atayan fonksiyon
    void setWaiters(int point, string name, int src_x, int src_y, int des_x, int des_y, string src_str, string des_str);//durakta olan yolcunun biliglerini
    void print();//duragin bilgilerini yazdiran fonksiyon..
};



#endif // STATIONANDNEEDHELPHUMAN_H_INCLUDED
