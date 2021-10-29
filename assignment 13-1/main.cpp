#include <iostream>
#include "student.h"
using namespace std;


int main(){
    Student one;
    one.setSid(200);
    one.setSname("Louisa");
    one.setScores(0, 10);
    one.setScores(1, 20);
    one.setScores(2, 30);
    
    cout << "ID: " << one.getSid() << endl;
    cout << "Name: " << one.getSname() << endl;
    cout << "Scores: " << one.getScores(0) << " " << one.getScores(1) << " " << one.getScores(2) << endl;
    cout << "Sum of scores: " << one.getSum() << endl;
    cout << "Average of scores: " << one.getAvg();
    
}


