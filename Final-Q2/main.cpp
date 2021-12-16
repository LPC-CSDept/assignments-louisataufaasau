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
void quickSortIterative(Course s[], int first, int last) {
    int stack[last - first + 1];
    int top = -1;
    stack[++top] = first;
    stack[++top] = last;
    
    while (top >= 0) {
        last = stack[top--];
        first = stack[top--];
        int pivot_idx = partition(s, first, last);
        
        if (pivot_idx - 1 > first) {
            stack[++top] = first;
            stack[++top] = pivot_idx - 1;
        }
        if (pivot_idx + 1 < last) {
            stack[++top] = pivot_idx + 1;
            stack[++top] = last;
        }
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
    
    cout << "Press 1 to quick sort recursively or press 2 to quick sort iteratively" << endl;
    cin >> choice;
    cout << endl;
    
    if (choice == 1) {
        quickSortRecursive(courses, 0, 9);
        cout << endl;
    }
    else{
        quickSortIterative(courses, 0, 9);
        cout << endl;
    }
    
    cout << "Courses after sorting:" << endl;
    printCourses(courses, 10);
    
    
    file.close();
    return 0;
}
