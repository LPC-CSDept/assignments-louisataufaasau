#include "Students.h"

int Students::getID(){
    return ID;
}

int Students::getScores(){
    return scores[0] + scores[1] + scores[2];
}

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
