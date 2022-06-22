#include "StationAndNeedHelpHuman.h"

void NeedHelpHuman::setParameters(int point, string name, int src_x, int src_y, int des_x, int des_y, string src_str, string des_str){
    this->point = point;
    this->name = name;
    this->src_x = src_x;
    this->src_y = src_y;
    this->des_x = des_x;
    this->des_y = des_y;
    this->src_str = src_str;
    this->des_str = des_str;
}

bool NeedHelpHuman::operator < (const NeedHelpHuman& rhs){
    if(this->point < rhs.point)
        return true;
    else
        return false;
}

bool NeedHelpHuman::operator > (const NeedHelpHuman& rhs){
    if(this->point > rhs.point)
        return true;
    else
        return false;
}

void Station::setParameters(string stationName, int stationNumber, int x, int y){
    this->stationName = stationName;
    this->stationNumber = stationNumber;
    this->x = x;
    this->y = y;
}

void Station::setWaiters(int point, string name, int src_x, int src_y, int des_x, int des_y, string src_str, string des_str){
    NeedHelpHuman tmp;
    tmp.setParameters(point, name, src_x, src_y, des_x, des_y , src_str, des_str);
    waiters.push_back(tmp);
}

void Station::print(){
    cout << stationName << " : " ;
    if(waiters.size()){
        List<NeedHelpHuman> w;
        w = waiters;
        while(w.size()){
            cout << w.front().name << ", ";
            w.pop_front();
        }
    }
    cout << endl;
}

