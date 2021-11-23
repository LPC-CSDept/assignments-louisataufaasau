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
int Numbers::operator > (const Numbers &n){
    int arr1=0;
    int arr2=0;
    for (int i=0; i<size; i++){
        arr1+=numbers[i];
    }
    for (int i=0; i<n.size; i++){
        arr2+=n.numbers[i];
    }
    if (arr1>arr2){
        return 1;
    }
    else
        return 0;
}
Numbers Numbers::operator = (const Numbers &n){
    Numbers num;
    num.size=n.size;
    
    num.numbers=new int[n.size];
    for (int i=0; i<num.size; i++) {
        num.numbers[i] = n.numbers[i];
    }
    return num;
}
Numbers Numbers::operator + (const Numbers &n){
    Numbers num;
    num.size = size + n.size;
    
    num.numbers=new int[num.size];
    for (int i=0; i<size; i++) {
        num.numbers[i] = numbers[i];
    }
    for (int i=size; i<num.size; i++) {
        num.numbers[i] = n.numbers[i%n.size];
    }
    return num;
}
