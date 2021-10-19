#include <iostream>
#include <fstream>
using namespace std;

struct student{
    int idNumber,score[3], totalscore;
    char name[10];
    double average;
    
    void printStudent(){
        cout << idNumber << " " << name << " " <<  score[0] << " " << score[1] << " " << score[2] << " " << totalscore << " " << average << endl;
    }
};

int main() {
    student *ptr = nullptr;
    ptr = new student;
    ifstream ifs("students.bin");

    while(ifs.read((char *)ptr, sizeof(*ptr))) {
        if (ptr->average > 85) {
            ptr->printStudent();
        }
    }
    
    return 0;
}
