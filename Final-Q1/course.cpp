#include <stdio.h>
#include "course.h"
using namespace std;

Course::Course(){
    ID=0;
    name="";
    credit=0;
}
void Course::setCourse(int idnum, string coursename, int creditamount){
    ID=idnum;
    name=coursename;
    credit=creditamount;
}

int Course::getID(){
    return ID;
}
