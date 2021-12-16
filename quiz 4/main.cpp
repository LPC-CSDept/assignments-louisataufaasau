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
    
    cout << "Updating courses." << endl;
    for (int i=0; i<courses[0].getNUM_COURSES(); i++){
        ifs >> courses[i];
        cout << courses[i] << endl;
    }
    
    ifs.close();
    
    cout << "Printing all courses" << endl;
    for (int i=0; i<courses[0].getNUM_COURSES(); i++) {
        cout << courses[i] << endl;
    }
    
    return 0;
}
