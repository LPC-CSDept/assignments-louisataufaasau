#include <iostream>
#include <fstream>
using namespace std;

const int     MAX_LEN = 20;
const int     NUM_SCORES = 3;
struct Students {
    int     sid;
    char     sname[MAX_LEN];
    double     scores[NUM_SCORES];
};

Students *makeStudents(int );
void printStudents(Students * const, int);
void sortStudents(Students * const, int);


int main()
{
    const int N=10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    printStudents(ptr, N);
}
Students *makeStudents(int N){
    fstream file;
    Students *student = new Students[N];

    file.open("students.txt");
    
    for (int i=0; i<N; i++){
    
    file >> student[i].sid >> student[i].sname >> student[i].scores[0] >> student[i].scores[1] >> student[i].scores[2];
    }
    return student;
}
void printStudents(Students * const student, int N){
    for (int i=0; i<N; i++){
    
        cout << student[i].sid << " " << student[i].sname << " " <<  student[i].scores[0] << " " << student[i].scores[1] << " " << student[i].scores[2] << endl;
    }
    cout << "------------------------------" << endl;
}
void sortStudents(Students * const student, int N){
    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N-i-1; j++)
        {
            int sum1, sum2;
            sum1=student[j].scores[0]+student[j].scores[1]+student[j].scores[2];
            sum2=student[j+1].scores[0]+student[j+1].scores[1]+student[j+1].scores[2];
            if (sum1 > sum2)
                swap(student[j], student[j+1]);
        }
    }
}
