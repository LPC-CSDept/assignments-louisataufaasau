#include "Students.h"

Students::Students(){
    ID=0;
    name="";
    for (int i=0; i<3; i++) {
        scores[i] = rand() % 100;
    }
}

Students::Students(int i, string n, int sc[]){
    ID=i;
    name=n;
    for (int i=0; i<3; i++) {
        scores[i] = rand() % 100;
    }
}

int Students::getID(){
    return ID;
}

string Students::getName(){
    return name;
}

int* Students::getScores(){
    return scores;
}

void Students::setID(int i){
    ID=i;
}

void Students::setName(string n){
    name=n;
}

void Students::setScores(int sc []) {
    for (int i=0; i<3; i++) {
        scores[i]=sc[i];
    }
}
