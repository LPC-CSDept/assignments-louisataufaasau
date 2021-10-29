#include "student.h"
#include <iostream>
using namespace std;

int Student::getSid() const{
    return sid;
}

string Student::getSname() const{
    return sname;
}
//get the i_th score
double Student::getScores(int index) const{
    return scores[index];
}
//get the summation of scores
double Student::getSum() const{
    int sum=0;
    for (int i=0; i<3; i++){
        sum+=scores[i];
    }
    return sum;
}
double Student::getAvg() const{
    return getSum()/3;
}
void Student::setSid(int id){
    sid=id;
}
void Student::setSname(string name){
    sname=name;
}
//1st param: index
//2nd param: score value
void Student::setScores(int a,int b){
    scores[a]=b;
}
