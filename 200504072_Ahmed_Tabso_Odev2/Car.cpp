#include "Car.h"

//kurucu fonksiyon
Car::Car(string destination, int carNo, int x, int y, int des_x, int des_y)
    : destination(destination), carNo(carNo), x(x), y(y), des_x(des_x), des_y(des_y), max_traveller(4), onCell(0){
    destinationFile.open("hedef" + to_string(carNo - 1) + ".txt", ios::out);
    rapor.open("sonuc" + to_string(carNo - 1) + ".txt", ios::out);
    buildRoutForFirstCar();
}

//yikici fonksiyon
Car::~Car(){
    destinationFile.close();
    rapor.close();
}

bool Car::getedDestination(){  return ((x == des_x) && (y == des_y));  }

void Car::buildRoutForFirstCar(){
    Cell routForFirstCar[172];
    int s = 0;
    for(int i = 1; i < 8;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 10;
    }
    for(int i = 11; i < 19;i++, s++){
        routForFirstCar[s].x = 7;
        routForFirstCar[s].y = i;
    }
    for(int i = 8; i < 10;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 18;
    }
    for(int i = 17; i > 9;i--, s++){
        routForFirstCar[s].x = 9;
        routForFirstCar[s].y = i;
    }
    for(int i = 11; i < 18;i++, s++){
        routForFirstCar[s].x = 9;
        routForFirstCar[s].y = i;
    }
    for(int i = 10; i < 16;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 17;
    }
    for(int i = 18; i < 20;i++, s++){
        routForFirstCar[s].x = 15;
        routForFirstCar[s].y = i;
    }
    for(int i = 16; i < 23;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 19;
    }
    for(int i = 20; i < 23;i++, s++){
        routForFirstCar[s].x = 22;
        routForFirstCar[s].y = i;
    }
    for(int i = 21; i > 15;i--, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 22;
    }
    routForFirstCar[s].x = 16;
    routForFirstCar[s++].y = 21;
    routForFirstCar[s].x = 16;
    routForFirstCar[s++].y = 22;
    for(int i = 15; i > 6;i--, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 22;
    }
    routForFirstCar[s].x = 7;
    routForFirstCar[s++].y = 21;
    for(int i = 6; i > 4;i--, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 21;
    }
    for(int i = 22; i < 24;i++, s++){
        routForFirstCar[s].x = 5;
        routForFirstCar[s].y = i;
    }
    for(int i = 4; i > 2;i--, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 23;
    }
    for(int i = 22; i > 18;i--, s++){
        routForFirstCar[s].x = 3;
        routForFirstCar[s].y = i;
    }
    for(int i = 4; i < 8;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 19;
    }
    for(int i = 18; i > 0;i--, s++){
        routForFirstCar[s].x = 7;
        routForFirstCar[s].y = i;
    }
    for(int i = 8; i < 10;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 1;
    }
    for(int i = 2; i < 5;i++, s++){
        routForFirstCar[s].x = 9;
        routForFirstCar[s].y = i;
    }
    for(int i = 10; i < 12;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 4;
    }
    for(int i = 3; i > 1;i--, s++){
        routForFirstCar[s].x = 11;
        routForFirstCar[s].y = i;
    }
    for(int i = 3; i < 5;i++, s++){
        routForFirstCar[s].x = 11;
        routForFirstCar[s].y = i;
    }
    for(int i = 10; i > 8;i--, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 4;
    }
    for(int i = 3; i > 0;i--, s++){
        routForFirstCar[s].x = 9;
        routForFirstCar[s].y = i;
    }
    for(int i = 8; i > 6;i--, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 1;
    }
    for(int i = 2; i < 19;i++, s++){
        routForFirstCar[s].x = 7;
        routForFirstCar[s].y = i;
    }
    for(int i = 8; i < 10;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 18;
    }
    for(int i = 17; i > 9;i--, s++){
        routForFirstCar[s].x = 9;
        routForFirstCar[s].y = i;
    }
    for(int i = 11; i < 18;i++, s++){
        routForFirstCar[s].x = 9;
        routForFirstCar[s].y = i;
    }
    for(int i = 10; i < 16;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 17;
    }
    for(int i = 18; i < 20;i++, s++){
        routForFirstCar[s].x = 15;
        routForFirstCar[s].y = i;
    }
    for(int i = 16; i < 23;i++, s++){
        routForFirstCar[s].x = i;
        routForFirstCar[s].y = 19;
    }
    for(int i = 20; i < 24;i++, s++){
        routForFirstCar[s].x = 22;
        routForFirstCar[s].y = i;
    }
    routForFirstCar[s].x = 23;
    routForFirstCar[s++].y = 23;
    for(int i = 0; i < s; i++){
        rout.push_back(routForFirstCar[i]);
    }

}

void Car::printRout(){
    List<Cell> tmp = rout;
    int s = tmp.size();
    for(int i = 0; i < s; i++){
        cout << "(" << tmp.front().x << ", " << tmp.front().y << ")" << endl;
        tmp.pop_front();
    }
}

void Car::moveCar(){
    if(getedDestination())
        return;
    int tmp;
    Cell tmpCell;
    tmpCell = rout.front();
    tmp = maps[tmpCell.y][tmpCell.x];
    maps[y][x] = onCell;
    onCell = tmp;
    maps[tmpCell.y][tmpCell.x] = carNo;
    x = tmpCell.x;
    y = tmpCell.y;
    rapor << "(" << y << ", " << x << ")" << " => ";
    if(tmp > 1){
        getTravellers(tmp);
        rapor << "\naractaki yolcu sayisi : " << travellers.size() << endl;
    }

    rout.pop_front();
}

void Car::printTravellers(){
    if(travellers.size()){
        rapor << "\nArabanin icindeki yolcular " << endl;
        List<NeedHelpHuman> t = travellers;
        while(t.size()){
            rapor << "yolcu : " << t.front().name << endl;
            t.pop_front();
        }
        cout << endl;
    }

}

void Car::getTravellers(int station){
    printTravellers();
    MaxHeap<NeedHelpHuman> heapTravellers;
    int stationIndex = station - 4;
    //durkatan yolcular heape aktaliyor
    if(0 < stations[stationIndex].waiters.size()){
        while(0  < stations[stationIndex].waiters.size()){
            heapTravellers.addToHeap(stations[stationIndex].waiters.front());
            stations[stationIndex].waiters.pop_front();
        }
    }
    //arabadaki yolculara islem yapiliyor
    if(0 < travellers.size()){
        while(0 < travellers.size()){
            //birakilmasi gereken yolcu varsa birakilyor..
            if((travellers.front().des_x == x) && (travellers.front().des_y == y)){
                //hedef.txt
                destinationFile << "\n" << travellers.front().name << " - oncelik puani : " << travellers.front().point
                 << " - " << "(" << travellers.front().des_y << ", "
                 << travellers.front().des_x << ")" << " yardim sever " << carNo - 1 << endl;
                //hedef.txt
                rapor << "\nYolcu Birakildi : " << travellers.front().name << endl;
                travellers.pop_front();
            }
            else{
                break;
            }
        }
        //arabadaki yolcular heape aliniyor.
        while(0 < travellers.size()){
            heapTravellers.addToHeap(travellers.front());
            travellers.pop_front();
        }
    }
    travellers.clear();
    //arabaya yolcular aliniyor kalan yolcu olursa duraga birakiliyor..
    for(int i = 0; 0 < heapTravellers.size() ; i++){
        if(i < 4){
            travellers.push_back(heapTravellers.getMax());
            rapor << "\n" << heapTravellers.getMax().name << " adli yolcu arabada.." << "puani : " << heapTravellers.getMax().point << endl;
            heapTravellers.deleteMax();

        }
        else{
            rapor << " yolcular duraga birakiliyor..." << endl;
            stations[stationIndex].waiters.push_back(heapTravellers.getMax());
            heapTravellers.deleteMax();
        }
    }
    printTravellers();
}

void buildStationsAndWaiters(){
    stations[0].setParameters("coffe", 4, 1, 1);
    stations[1].setParameters("resutrant", 5, 23, 23);
    stations[2].setParameters("hospital1", 6, 11, 2);
    stations[3].setParameters("hospital2", 7, 7, 17);
    stations[3].setWaiters(25,"yasli2", 7, 17, 9, 10, "hospital2", "school2");
    stations[3].setWaiters(20,"hasta1", 7, 17, 16, 21, "hospital2", "pharmacy2");
    stations[3].setWaiters(10,"bebekli kadin2", 7, 17, 7, 21, "hospital2", "market2");
    stations[4].setParameters("pharmacy1", 8, 6, 4);
    stations[5].setParameters("pharmacy2", 9, 16, 21);
    stations[6].setParameters("school1", 10, 17, 5);
    stations[7].setParameters("school2", 11, 9, 10);
    stations[8].setParameters("market1", 12, 19, 17);
    stations[9].setParameters("market2", 13, 21, 7);
    stations[9].setWaiters(10,"bebekli kadin3", 7, 21, 11, 2, "market2", "hospital1");
    stations[9].setWaiters(5,"ogrenci4", 7, 21, 9, 10, "market2", "school2");
    maps[23][24] = 0;
    for(int i = 0; i < 25; i++)
        maps[24][i] = 0;
}
