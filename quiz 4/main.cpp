#include <iostream>
#include <fstream>
#include "course.h"
using namespace std;

int main() {
    ifstream ifs;
    ifs.open("coursestudents.txt");
    
    Course courses[4];
    
    ifs >> courses[0];
    
    return 0;
}
