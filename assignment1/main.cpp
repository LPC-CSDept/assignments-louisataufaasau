#include <iostream>
#include <fstream>
using namespace std;

struct student{
    int idNumber,score[2], totalscore;
    char name[10];
    double average;
};

void findStudent(student x[]){
    int idNum;
    cout << "Enter ID Number: ";
    cin >> idNum;
    for (int i=0; i<10; i++){
        if (idNum==x[i].idNumber){
            cout << "Name: " << x[i].name << endl;
            cout << "Score 1: " << x[i].score[0] << endl;
            cout << "Score 2: " << x[i].score[1] << endl;
            cout << "Total score: " << x[i].totalscore << endl;
            cout << "Average: " << x[i].average << endl;
        }
    }
    
}

void outputBinary(student x[]) {
    ofstream output;
    output.open("students.bin");
    for (int i=0; i<10; i++) {
        output.write((char *)&x[i], sizeof(x[i]));
    }
}

int main(){
    student students[10];
    int studentID, score1, score2;
    char name[10];
    fstream file;
    file.open("students.txt");
    
    for (int i=0; i<10; i++){
        file >> studentID >> name >> score1 >> score2;
        students[i].idNumber=studentID;
        students[i].score[0]=score1;
        students[i].score[1]=score2;
        students[i].average=(score1+score2)/2;
        students[i].totalscore=score1+score2;
        strcpy(students[i].name, name);
    }
    
    findStudent(students);
    outputBinary(students);
    return 0;
}
