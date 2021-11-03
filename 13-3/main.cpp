#include <iostream>
#include <fstream>
#include <algorithm>
#include "student.h"
using namespace std;

void sortStudents(Student students[], int size){
    for (int i = 0; i < size-1; i++){
        
        for (int j = 0; j < size-i-1; j++){
            
            if (students[j].getDOB().getMonth() > students[j+1].getDOB().getMonth()){
                    swap(students[j], students[j+1]);
            }
            else if (students[j].getDOB().getMonth() == students[j+1].getDOB().getMonth()){
                if (students[j].getDOB().getDay() > students[j+1].getDOB().getDay()){
                    swap(students[j], students[j+1]);
                }
            }
            
        }
        
    }
}

int main() {
    
    fstream file;
    file.open("students.txt");
    Student students[10];
    
    for (int i=0; i<10; i++) {
        string name;
        int id, month, day;
        DOB dob;
        
        file >> name >> id >> month >> day;
        dob.setMonth(month);
        dob.setDay(day);
        
        students[i].setSname(name);
        students[i].setID(id);
        students[i].setDOB(dob);
    }
    
    cout << "Unsorted" << endl;
    for (int i=0; i<10; i++) {
        cout << students[i].getSname() << " " << students[i].getID() << " " << students[i].getDOB().getMonth() << "/" << students[i].getDOB().getDay() << endl;
    }
    cout << endl;
    
    sortStudents(students, 10);
    
    cout << "Sorted" << endl;
    for (int i=0; i<10; i++) {
        cout << students[i].getSname() << " " << students[i].getID() << " " << students[i].getDOB().getMonth() << "/" << students[i].getDOB().getDay() << endl;
    }
    
    
    return 0;
}
