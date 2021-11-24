#ifndef course_h
#define course_h
using namespace std;

class Student {
private:
    int id;
    string sname;
    char grade;
    double scores;
};

class Course{
private:
    string cname;
    int credits;
    string semester;
    vector<Student> student;
};

#endif /* course_h */
