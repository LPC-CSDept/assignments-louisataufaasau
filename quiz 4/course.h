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
    
    friend ostream& operator<<(ostream& os, Course& c){
        os << c.cname << endl << c.credits << endl << c.semester << endl;
        os << c.student.size() << endl;
        for (int i=0; i<c.student.size(); i++) {
            os << c.student[i].getId() << " " << c.student[i].getSname() << " " << c.student[i].getGrade() << " " << c.student[i].getScores() << endl;
        }
        os << endl;
        
            return os;
        }
    friend istream &operator >> (istream& is, Course& c){
        is >> c.cname >> c.credits >> c.semester;
        
        int size = 0;
        is >> size;
        
        for (int i=0; i<size; i++) {
            int idd;
            string s;
            char g;
            double ss;

            is >> idd >> s >> g >> ss;
            Student student(idd, s, g, ss);
            c.addStudent(student);
        }
        return is;
    }
    
};

#endif /* course_h */
