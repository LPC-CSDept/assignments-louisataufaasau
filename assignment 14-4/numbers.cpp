#include "numbers.h"

Numbers::Numbers(){
    size=0;
    numbers=NULL;
}
Numbers::Numbers(int s){
    size=s;
    numbers=new int[s];
}
Numbers::Numbers(const Numbers &n1){
    size=n1.size;
    numbers=new int[n1.size];
    
    for (int i=0; i<n1.size; i++) {
        numbers[i] = n1.numbers[i];
    }
}
Numbers::~Numbers(){
    delete [] numbers;
}
int Numbers::getMax() const{
    int max=numbers[0];
    for (int i=0; i<size; i++){
        if (numbers[i]>max){
            max=numbers[i];
        }
    }
    return max;
}

void Numbers::createNumbers(){
    for (int i=0; i<size; i++){
        int v1 = rand() % 100;
        numbers[i]=v1;
    }
}
