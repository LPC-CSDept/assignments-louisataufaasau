#include "course.h"

Student::Student(){
    id=0;
    sname="";
    grade='\0';
    scores=0;
}
Student::Student(int i, string s, char g, double sc){
    id=i;
    sname=s;
    grade=g;
    scores=sc;
}
int Student::getId(){
    return id;
}
string Student::getSname(){
    return sname;
}
char Student::getGrade(){
    return grade;
}
double Student::getScores(){
    return scores;
}
void Student::setId(int i){
    id=i;
}
void Student::setSname(string s){
    sname=s;
}
void Student::setGrade(char g){
    grade=g;
}
void Student::setScores(double s){
    scores=s;
}
void Student::setStudent(int i, string s, char g, double sc){
    id=i;
    sname=s;
    grade=g;
    scores=sc;
}

Course::Course(){
    cname="";
    credits=0;
    semester="";
    
    NUM_COURSES++;
}
Course::Course(string c, int cred, string s, vector<Student> stud){
    cname=c;
    credits=cred;
    semester=s;
    student=stud;
    
    NUM_COURSES++;
}
string Course::getCname(){
    return cname;
}
int Course::getCredits(){
    return credits;
}
string Course::getSemester(){
    return semester;
}
vector<Student> Course::getStudent(){
    return student;
}
void Course::setCname(string c){
    cname=c;
}
void Course::setCredits(int c){
    credits=c;
}
void Course::setSemester(string s){
    semester=s;
}
void Course::setStudent(vector <Student> s){
    student=s;
}
void Course::setCourse(string c, int cred, string s, vector<Student> stud){
    cname=c;
    credits=cred;
    semester=s;
    student=stud;
}
void Course::addStudent(Student &s){
    student.push_back(s);
}
int Course::NUM_COURSES = 0;

int Course::getNUM_COURSES(){
    return NUM_COURSES;
}
