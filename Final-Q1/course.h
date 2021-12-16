#ifndef course_h
#define course_h
#include <iostream>
using namespace std;

class Course{
private:
    int ID;
    string name;
    int credit;
public:
    Course();
    void setCourse(int idnum, string coursename, int creditamount);
    void printAll();
    int getID();
    string getName();
    int getCredit();
};

#endif /* course_h */
