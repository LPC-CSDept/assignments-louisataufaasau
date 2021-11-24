#include <iostream>
#include <fstream>
#include "course.h"
using namespace std;

int main() {
    ifstream ifs;
    ifs.open("coursestudents.txt");
    
    Course courses[4];
        
    for (int i=0; i<4; i++){
        ifs >> courses[i];
        cout << courses[i] << endl;
    }
    
    ifs.open("addstudents.txt");
    
    for (int i=0; i<4; i++){
        ifs >> courses[i];
        cout << courses[i] << endl;
    }
    
    return 0;
}
