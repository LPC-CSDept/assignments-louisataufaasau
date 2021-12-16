#include <iostream>
#include <fstream>
#include "course.h"
using namespace std;

void printCourses(Course array[], int N){
    for (int i=0; i<N; i++){
        array[i].printAll();
    }
}

int partition (Course s[], int first, int last){
    int pivot = s[last].getID();
    int i = -1;
    for (int j=0; j<last; j++) {
        if (s[j].getID() < pivot) {
            swap(s[++i], s[j]);
        }
    }
    swap(s[i+1], s[last]);
    return i+1;
}

void quickSortRecursive(Course s[], int first, int last){
    int pivot_idx;
    if (first >= last) {
        return;
    }
    pivot_idx = partition(s, first, last);
    cout << "First: " << first << " " << "Last: " <<  last << " " << "Pivot index: " << pivot_idx << endl;
    
    quickSortRecursive(s, first, pivot_idx-1);
    quickSortRecursive(s, pivot_idx+1, last);
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
    
    quickSortRecursive(courses, 0, 9);
    
    cout << "Courses after sorting:" << endl;
    printCourses(courses, 10);
    
    
    file.close();
    return 0;
}
