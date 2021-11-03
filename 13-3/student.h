#ifndef student_h
#define student_h
#include <string>
using namespace std;
class DOB{
private:
    int month;
    int day;
public:
    DOB();
    DOB(int m, int d);
    int getMonth() const;
    int getDay() const;
    void printDate() const;
    void setDOB(DOB dob);
    void setMonth(int m);
    void setDay(int d);
};

class Student{
private:
    int sid;
    string sname;
    DOB dob;
public:
    Student();
    Student(string n, int id, DOB dob);
    int getID() const;
    string getSname() const;
    DOB getDOB() const;
    void setSname(string name);
    void setID(int id);
    void setDOB(DOB dob);
};

#endif /* student_h */
