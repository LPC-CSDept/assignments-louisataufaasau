#include <stdio.h>
#include "numbers.h"
#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;

//Default constructor
Numbers::Numbers(){
    size=10;
    head=new int[10];
}

//One param constructor
Numbers::Numbers(int n){
    size=n;
    head=new int[n];
}

int Numbers::getSize() const{
    return size;
}

// get the i_th element
int Numbers::getElement(int i) const{
    return head[i];
}

//get the summation of all elements
double Numbers::getSum() const{
    double sum=0;
    for (int i=0; i<size; i++) {
        sum+=head[i];
    }
    return sum;
}

//get avg of all elements
double Numbers::getAvg() const{
    return getSum()/size;
}
void Numbers::setElement(){
    for(int i = 0; i < size; i++){
        head[i] =  (rand() % 1000);
    }
}

//set value to the i_th element
void Numbers::setElement(int value, int i){
    head[i]=value;
}

//sort all elements in ascending if the param is 0
//otherwise descending
void Numbers::bubbleSort(int desc){
    if (desc==0){
        int i, j;
          for (i = 0; i < size-1; i++)

          for (j = 0; j < size-i-1; j++)
              if (head[j] > head[j+1])
                  swap(head[j], head[j+1]);
    }
    else{
        int i, j;
          for (i = 0; i < size-1; i++)

          for (j = 0; j < size-i-1; j++)
              if (head[j] < head[j+1])
                  swap(head[j], head[j+1]);
    }
}

//print all elements from beginning if param=0
void Numbers::printNumbers(int desc){
    if (desc==0){
        for (int i=0; i<size; i++){
            cout << head[i] << endl;
        }
    }
    else{
        for (int i=size-1; i>=0; i--){
            cout << head[i] << endl;
        }
    }
}

//delete all memory space for numbers
void Numbers::clear(){
    delete[] head;
}

