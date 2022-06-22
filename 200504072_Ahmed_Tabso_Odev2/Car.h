#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include "StationAndNeedHelpHuman.h"
#include "StationAndNeedHelpHuman.cpp"
#include <fstream>
#include "MaxHeap.h"
#include "MaxHeap.cpp"
#define MAX_ROWS 24
#define MAX_COLUMNS 24

/*
    bu dosyada durak ve insan siniflarini entegre ederek
    Car sinifi olusyurlyor ve onun islevelerini yerine getirmek icin
    kendi olusturdugum List ve Heap ve benzer beli araclar kullaniliyor.
    ayni anda bu sinifin icinde hedef.txt ve sonuc.txt
    dosyalari olusturulup doldurluyor.
*/

int maps[MAX_ROWS][MAX_COLUMNS];//harita

Station stations[10];//duraklar
void buildStationsAndWaiters();// duraklari olusturan fonksiyon.

class Car{
public:
    fstream destinationFile;
    fstream rapor;
    string destination;
    string tmpDes;
    int carNo;
    int x;
    int y;
    int des_x;
    int des_y;
    int tmp_des_x;
    int tmp_des_y;
    int max_traveller;
    int onCell;
    List<NeedHelpHuman> travellers;
    List<Cell> rout;
    Car(string destination, int carNo, int x, int y, int des_x, int des_y);
    ~Car();
    bool getedDestination();// aracin gitmek istedigi yere varip varmadigini soyleyen fonksiyon
    void buildRoutForFirstCar();// aracin gidecegi routu belirleyen fonksiyon..
    void printRout();//routu yazdiran
    void moveCar();// arabayi adim adim harket ettiren
    void printTravellers();// arabanin icindeki yolcularin bilgilerini dosyaya yazdiran fonkisyon
    void getTravellers(int station);//yolculari projede belirlenen kurallara gore arabaya alan fonkisyon
};

#endif // CAR_H_INCLUDED
