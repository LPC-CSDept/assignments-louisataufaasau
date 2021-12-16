#include <iostream>
#include <fstream>
#include "course.h"
using namespace std;

void printCourses(Course array[], int N){
    for (int i=0; i<N; i++){
        array[i].printAll();
    }
}


int main() {
    int choice;
    Course courses[10];
    fstream file;
    int fileNumber;
    cout << "Enter 1 for file 1 or enter 2 for file 2" << endl;
    cin >> fileNumber;
    if (fileNumber == 1) {
        file.open("courses.txt");
    }
    else{
        file.open("courses2.txt");
    }
    
    for (int i=0; i<10; i++) {
        int id;
        string n;
        int c;
        file >> id >> n >> c;
        courses[i].setCourse(id, n, c);
    }
    
    cout << "The courses are:" << endl;
    printCourses(courses, 10);
    cout << endl;
    
    file.close();
    return 0;
}
