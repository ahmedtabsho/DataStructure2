#include "Car.h"
#include "Car.cpp"

/*
    Projede iki nokta arasindaki en kisa yolu bulan fonksiyon olmadigi icin
    diger adimlari gostermek icin ilk arabanin yolunu ve alacagi yolculari belirleyip
    arabaya yolcu alma sartlari, yolcu birakma, arabanin harketini,
    alip biraktigi yolcular ve bunlari raporlamak (hedef.txt, sonuc.txt)
    bunlar disinda dosya okuma, yazma siniflar olusuturup impelementasyonu vs gibi islemler gerceklerstirildi..
*/


void printMap();//haritayi yazdiran fonksiyon
void readmap();//haritayi dosyadan okuyan fonkisyon

int main(){
    //harita okunup yazdirliyor..
    readmap();
    printMap();

    //Car sinifindan bir nesne olusuturlyor ve gidicegi duraklar belirleniyor
    Car firstCar("restorant", 2, 0, 10, 23, 23);
    buildStationsAndWaiters();

    //Araba harket ettirliyor ve onu gormek icin harita her adimda yazdirliyor..
    while(!firstCar.getedDestination()){
        firstCar.moveCar();
        printMap();
    }


    return 0;
}

//okumayi iki iki karakter seklinde yapip maps dizisine atiyor..
void readmap(){
    fstream mapFile;
    char ch, ch1;
    int tmp;
    int i = 0, j = 0;
    bool ifiplusing = false;
    mapFile.open ("harita.txt", ios::in);
    while(mapFile >> ch){
        if(ch != ','){
            if(i <= MAX_ROWS){
                if(j > MAX_COLUMNS){
                    i++;
                    ifiplusing = true;
                    j = 0;
                    maps[i][j] = (int)ch - 48;
                    j++;
                }
                else{
                    maps[i][j] = (int)ch - 48;
                    j++;
                }
            }
            if(mapFile >> ch){
                if(ch != ','){
                    tmp = (int)ch - 48;
                    if(!ifiplusing){
                        maps[i - 1][j - 1] = (maps[i - 1][j - 1] * 10) + tmp;
                        ifiplusing = false;
                    }

                    else
                        maps[i][j - 1] = (maps[i][j - 1] * 10) + tmp;
                }
            }
        }
    }
    mapFile.close();
}

void printMap(){
    for(int i = 0; i < 25; i++){
        for (int j = 0; j < 25; j++)
            cout << maps[i][j] << " ";
        cout << endl;
    }
    cout << "\n\n\n" << endl;
}

