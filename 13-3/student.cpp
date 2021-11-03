#include "student.h"
#include <iostream>
using namespace std;

// DOB
DOB::DOB(){
    month=0;
    day=0;
}
DOB::DOB(int m, int d){
    month=m;
    day=d;
}
int DOB::getMonth() const{
    return month;
}
int DOB::getDay() const{
    return day;
}
void DOB::printDate() const{
    cout << month << "/" << day << endl;
}
void DOB::setDOB(DOB dob){
    month=dob.month;
    day=dob.day;
}
void DOB::setMonth(int m){
    month=m;
}
void DOB::setDay(int d){
    day=d;
}

// Student
Student::Student(){
    sid=0;
    sname="";
    dob=DOB();
}
Student::Student (string n, int id, DOB dob){
    sname=n;
    sid=id;
    this->dob=dob;
}
int Student::getID() const{
    return sid;
}
string Student::getSname() const{
    return sname;
}
DOB Student::getDOB() const{
    return dob;
}
void Student::setSname(string name){
    sname=name;
}
void Student::setID(int id){
    sid=id;
}
void Student::setDOB(DOB dob){
    this->dob=dob;
}
