//
//  main.cpp
//  q2-2read
//
//  Created by Louisa Taufaasau on 10/19/21.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct student{
    int idNumber,score[2], totalscore;
    char name[10];
    double average;
};

int main() {
    ifstream infile("students.bin", ifstream::binary | ios::in);
    char word[50];
    
    infile.read(word, sizeof(student));
    cout << word << endl;
    
    infile.close();
    
    
    return 0;
}
