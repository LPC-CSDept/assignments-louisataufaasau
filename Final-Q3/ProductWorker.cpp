#include "ProductWorker.h"
Employee::Employee(){
    name="";
    hiredate="";
    number=0;
}
string Employee::getName(){
    return name;
}
string Employee::getHireDate(){
    return hiredate;
}
int Employee::getNumber(){
    return number;
}
void Employee::setName(string nm){
    name=nm;
}
void Employee::setHireDate(string hrd){
    hiredate=hrd;
}
void Employee::setNumber(int snum){
    number=snum;
}
ProductWorker::ProductWorker(): Employee(){
    shift=0;
    pay=0;
}
ProductWorker::ProductWorker(string n, string h, int num, int shf, double py){
    name=n;
    hiredate=h;
    number=num;
    shift=shf;
    pay=py;
}
