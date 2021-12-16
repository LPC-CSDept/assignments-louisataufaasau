#include <iostream>
#include <fstream>
#include "Students.h"
using namespace std;

void printStudentsDesc(Students s[], int n){
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
        s[i].printStudent();
        cout << "Score sum: " << s[i].getScores()[0] + s[i].getScores()[1] + s[i].getScores()[2] << endl;
        cout << endl;
    }
}

void printStudents(Students s[], int n){
    for (int i=0; i<n; i++) {
        s[i].printStudent();
        cout << endl;
    }
}

void bubbleSortbyID(Students s[], int N)
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
    const int N = 10;
    Students students[N];

    fstream file;
    int fileNumber;
    cout << "Enter 1 for file 1 or enter 2 for file 2" << endl;
    cin >> fileNumber;
    if (fileNumber == 1) {
        file.open("students.txt");
    }
    else{
        file.open("students2.txt");
    }

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
    printStudentsDesc(students, N);
    cout << "Printing students by ID:" << endl;
    bubbleSortbyID(students, N);
    printStudents(students, N);
    
    int ID;
    cout << "Enter the ID of the student you want to find: ";
    cin >> ID;
    int position = findStudent(students, N, ID);
    if (position==-1) {
        cout << "Student not found." << endl;
    }
    else{
        cout << "Student with ID " << ID << " is located at postion " << position << endl;
        cout << "The student:" << endl;
        students[position].printStudent();
    }
    
    file.close();

    return 0;
}
