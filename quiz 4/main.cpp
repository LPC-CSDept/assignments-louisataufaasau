#include <iostream>
#include <fstream>
#include "course.h"
using namespace std;

int main() {
    ifstream ifs;
    ifs.open("coursestudents.txt");
    
    Course courses[4];
        
    for (int i=0; i<courses[0].getNUM_COURSES(); i++){
        ifs >> courses[i];
        cout << courses[i] << endl;
    }
    
    ifs.close();
    
    ifs.open("addstudents.txt");

    while (!ifs.eof()) {

        string cname;
        int size, course_id=-1;
        
        ifs >> cname >> size;
        
        for (int i=0; i<courses[0].getNUM_COURSES(); i++) {
            if (cname == courses[i].getCname()) {
                course_id = i;
            }
        }

        for (int i=0; i<size; i++) {
            int idd;
            string s;
            char g;
            double ss;

            ifs >> idd >> s >> g >> ss;
            Student student(idd, s, g, ss);
            courses[course_id].addStudent(student);
        }

        cout << "Updated Students list for the Course " << cname << endl;
        cout << courses[course_id] << endl;
           
   }
    
    cout << "Printing all courses" << endl;
    for (int i=0; i<courses[0].getNUM_COURSES(); i++) {
        cout << courses[i] << endl;
    }
    
    return 0;
}
