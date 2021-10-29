//
//  student.h
//  assignment 13-1
//
//  Created by Louisa Taufaasau on 10/28/21.
//

#ifndef student_h
#define student_h
#include <string>
using namespace std;

class Student{
private:
    int sid;
    string sname;
    double scores[3];
public:
    int getSid() const;
    string getSname() const;
    //get the i_th score
    double getScores(int) const;
    //get the summation of scores
    double getSum() const;
    double getAvg() const;
    void setSid(int);
    void setSname(string);
    //1st param: index
    //2nd param: score value
    void setScores(int,int);
};

#endif /* student_h */
