#include <iostream>
#include <fstream>
#include "course.h"
using namespace std;

int binarySearch(Course array[], int N, int target){
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

int main() {
    int ID;
    Course courses[10];
    fstream file;
    file.open("courses.txt");
    
    for (int i=0; i<10; i++) {
        int id;
        string n;
        int c;
        file >> id >> n >> c;
    }
    
    cout << "Find a course by entering the ID number: ";
    cin >> ID;
    cout << endl;
    
    cout << binarySearch(courses, 10, ID);
    
    file.close();
    return 0;
}
