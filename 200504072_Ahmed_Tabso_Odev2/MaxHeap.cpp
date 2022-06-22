#include "MaxHeap.h"

template<class T>
MaxHeap<T>::MaxHeap(){ length = 0; }

template<class T>
int MaxHeap<T>::size(){  return length;  }

template<class T>
T& MaxHeap<T>::getMax(){ return arr[0]; }

template<class T>
void MaxHeap<T>::addToHeap(T value){
        if(length == 0){
            arr[length++] = value;
        }
        else if(length == 100){
            cout << "heap dolu " << endl;
        }
        else{
            if(arr[0] < value){
                T temp;
                temp = arr[0];
                arr[0] = value;
                arr[length++] = temp;
            }else{
                arr[length++] = value;
            }
        }
}

template<class T>
T MaxHeap<T>::deleteMax(){
        if(length == 0){
            cout << "heap bos.. " << endl;
            return T();
        }
        else if(length == 1){
            T maximum = arr[0];
            arr[0] = T();
            length--;
            return maximum;
        }
        else{
            int maxIndex = 1;
            T maximum = arr[1];
            T root = arr[0];
            for(int i = 1; i < length;i++)
                if(arr[i] > maximum){
                    maximum = arr[i];
                    maxIndex = i;
                }
            arr[0] = maximum;
            for(int i = maxIndex; i < length; i++){
                arr[i] = arr[i + 1];
            }
            length--;
            return root;
        }

}

template<class T>
void MaxHeap<T>::print(){
        for(int i = 0; i < length; i++){
            cout << arr[i] << "  ";
        }
        cout << endl;
}
