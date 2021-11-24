#ifndef course_h
#define course_h
using namespace std;
#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    int id;
    string sname;
    char grade;
    double scores;
public:
    Student();
    Student(int i, string s, char g, double sc);
    int getId();
    string getSname();
    char getGrade();
    double getScores();
    
    void setId(int i);
    void setSname(string s);
    void setGrade(char g);
    void setScores(double s);
    void setStudent(int i, string s, char g, double sc);
};

class Course{
private:
    string cname;
    int credits;
    string semester;
    vector<Student> student;
    static int NUM_COURSES;
    
public:
    Course();
    Course(string c, int cred, string s, vector<Student> stud);
    string getCname();
    int getCredits();
    string getSemester();
    vector<Student> getStudent();
    int getNUM_COURSES();
    
    void setCname(string c);
    void setCredits(int c);
    void setSemester(string s);
    void setStudent(vector <Student> s);
    void setCourse(string c, int cred, string s, vector<Student> stud);
    
    void addStudent(Student &s);
    
    friend ostream& operator<<(ostream& os, const Course& c){
        os << c.cname << endl << c.credits << endl << c.semester << endl;
        
        
            return os;
        }
//    friend istream &operator >> (istream& is, const Course& c){
//        is >> c.credits;
//        return is;
//    }
    
};

#endif /* course_h */
