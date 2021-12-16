#include <iostream>
#include <fstream>
#include "course.h"
using namespace std;

int binarySearchIterative(Course array[], int N, int target){
      int first=0;
      int last=N-1;
      while (first<=last){
          int mid=(first+last)/2;
          if (array[mid].getID()==target)
              return mid;
          if (array[mid].getID()<target)
              first=mid+1;
          if (array[mid].getID()>target)
              last=mid-1;
      }
    return -1;
}

int binarySearchRecursive(Course array[], int left, int right, int target) {
    if (left <= right) {
          int mid = (left + right)/2;
          if (array[mid].getID() == target)
             return mid;
          if (array[mid].getID() > target)
             return binarySearchRecursive(array, left, mid-1, target);
          if (array[mid].getID() < target)
             return binarySearchRecursive(array, mid+1, right, target);
       }
       return -1;
}

void printCourses(Course array[], int N){
    for (int i=0; i<N; i++){
        array[i].printAll();
    }
}
void bubbleSortbyID(Course s[], int N)
{
    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N-i-1; j++)
        {
            if ( s[j].getID() > s[j+1].getID())
                swap(s[j], s[j+1]);
        }
    }
}


int main() {
    int ID;
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
    
    cout << "The courses are: " << endl;
    bubbleSortbyID(courses, 10);
    printCourses(courses, 10);
    cout << endl;
    
    cout << "Find a course using iterative binary search by entering the ID number: ";
    cin >> ID;
    cout << endl;
    
    int found = binarySearchIterative(courses, 10, ID);
    if(found != -1){
        cout << "The course was located at index " << found << ". Output of the course info:" << endl;
        courses[found].printAll();
    }
    else{
        cout << "The course doesn't exist." << endl;
    }
    
    cout << "Find a course using recursive binary search by entering the ID number: ";
    cin >> ID;
    cout << endl;
    
    found = binarySearchRecursive(courses, 0, 10, ID);
    if(found != -1){
        cout << "The course was located at index " << found << ". Output of the course info:" << endl;
        courses[found].printAll();
    }
    else{
        cout << "The course doesn't exist." << endl;
    }
    
    file.close();
    return 0;
}
