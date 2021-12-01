#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Numbers.h"
#include "Students.h"
using namespace std;

template <class T>
void printNumbers(Numbers <T> n) {
    for (int i=0; i<n.values.size(); i++){
        cout << n.values[i] << endl;
    }
}

void printStudents(Students s[], int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
                if (s[j].getScores() > s[j+1].getScores()){
                    Students temp = s[j];
                    s[j] = s[j+1];
                    s[j+1]=temp;
                }
            }
    }
    
    for (int i=0; i<n; i++) {
        cout << s[i].getID() << endl;
        cout << s[i].getScores() << endl;
        cout << endl;
    }
}

int findStudent(Students s[], int n, int ID){
    int low = 0, high = n - 1;
 
    while (low <= high){
        int mid = (low + high)/2;
 
        if (ID == s[mid].getID()) {
            return mid;
        }
        else if (ID < s[mid].getID()) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    srand(time(0));
    Students students[10];
    
    return 0;
}
