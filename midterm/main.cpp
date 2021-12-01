#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
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
            int score1 = s[j].getScores()[0] + s[j].getScores()[1] + s[j].getScores()[2];
            int score2 = s[j+1].getScores()[0] + s[j+1].getScores()[1] + s[j+1].getScores()[2];
            
            if (score1 < score2){
                Students temp = s[j];
                s[j] = s[j+1];
                s[j+1]=temp;
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        cout << "ID: " << s[i].getID() << endl;
        cout << "Name: " << s[i].getName() << endl;
        cout << "Scores: " << s[i].getScores()[0] << " " << s[i].getScores()[1] << " " << s[i].getScores()[2] << endl;
        cout << "Score sum: " << s[i].getScores()[0] + s[i].getScores()[1] + s[i].getScores()[2] << endl;
        cout << endl;
    }
}

Students findStudent(Students s[], int n, int ID){
    int low = 0, high = n - 1;
 
    while (low <= high){
        int mid = (low + high)/2;
 
        if (ID == s[mid].getID()) {
            return s[mid];
        }
        else if (ID < s[mid].getID()) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << "Student not found." << endl;
    return s[0];
}

int main() {
    srand(time(0));
    const int N = 10;
    Students students[10];
    
    fstream file;
    file.open("students.txt");
    
    for (int i=0; i<N; i++){
        int ID;
        string name;
        int scores[3];
        
        file >> ID >> name >> scores[0] >> scores[1] >> scores[2];
        students[i].setID(ID);
        students[i].setName(name);
        students[i].setScores(scores);
    }
    
    cout << "Printing students in descending order by score total:" << endl;
    printStudents(students, N);
        
    cout << "Student with ID 10006677 is " << findStudent(students, N, 10006677).getName() << endl;
    
    return 0;
}
