#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct student{
    int idNumber,score[3], totalscore;
    char name[10];
    double average;
};

int main(){
    int studentID, score1, score2, score3;
    char name[10];
	ofstream output;
    output.open("students.bin");
    fstream file;
    file.open("students.txt");
    
    for (int i=0; i<10; i++){
        student *students = new student;
        file >> studentID >> name >> score1 >> score2 >> score3;
        students->idNumber=studentID;
        students->score[0]=score1;
        students->score[1]=score2;
        students->score[2]=score3;
        students->average=(score1+score2+score3)/3;
        students->totalscore=score1+score2+score3;
        strcpy(students->name, name);
        // outputBinary(students);
	    output.write((char *)students, sizeof(*students));
    }
    return 0;
}
