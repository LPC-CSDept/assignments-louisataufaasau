#include "Numbers.h"

template<class T>
int Numbers<T>::NumofObjects = 0;

template<class T>
int Numbers<T>::getNumObjects(){
    return NumofObjects;
}

template<class T>
int Numbers<T>::operator > (const Numbers & n){
    T arr1=0;
    T arr2=0;
    for (int i=0; i<values.size(); i++){
        arr1+=values[i];
    }
    for (int i=0; i<n.values.size(); i++){
        arr2+=n.values[i];
    }
    if (arr1>arr2){
        return 1;
    }
    else
        return 0;
}
