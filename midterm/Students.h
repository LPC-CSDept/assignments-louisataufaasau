#ifndef Students_h
#define Students_h

#include <iostream>
using namespace std;

class Students {
private:
    int ID;
    string name;
    int scores[3];
    
public:
    Students();
    Students(int, string, int[]);
    
    int getID();
    string getName();
    int* getScores();
    
    void setID(int);
    void setName(string);
    void setScores(int []);
    
    void printStudent();
};

#endif /* Students_h */
