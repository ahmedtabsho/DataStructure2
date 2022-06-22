#ifndef MAXHEAP_H_INCLUDED
#define MAXHEAP_H_INCLUDED
#include <iostream>
using namespace std;

//MAX Heap sinifi

template <class T>
class MaxHeap{
    T arr[100];
    int length;
public:
    MaxHeap<T>();// kurucu fonksiyon
    int size();// heapin boyutu donduren fonksiyon
    void addToHeap(T value);// heape eleman ekleyen fonksiyon
    T deleteMax();// heapin basi silen fonksiyon
    T& getMax();// heapin max elemani getiren
    void print();// elemanlari yaziran fonksiyon
};


#endif // MAXHEAP_H_INCLUDED
