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
    int getID();
};

#endif /* course_h */
