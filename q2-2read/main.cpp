//
//  main.cpp
//  q2-2read
//
//  Created by Louisa Taufaasau on 10/19/21.
//

#include <iostream>
#include <fstream>
using namespace std;

struct student{
    int idNumber,score[3], totalscore;
    char name[10];
    double average;
};

int main() {
    student *ptr = nullptr;
    ptr = new student;
    ifstream ifs("students.bin", ifstream::binary | ios::in);

    while(ifs.read((char *)ptr, sizeof(*ptr))) {
        cout << ptr << endl;
    }
    
    return 0;
}
