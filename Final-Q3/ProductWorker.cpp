#include "ProductWorker.h"

Employee::Employee(){
    name="";
    hiredate="";
    number=0;
}
Employee::Employee(string nm, string hrd, int snum){
    name=nm;
    hiredate=hrd;
    number=snum;
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
    shift=1;
    pay=0;
}
ProductWorker::ProductWorker(string n, string h, int num, int shf, double py): Employee(n, h, num){
    shift=shf;
    if (shf>2) {
        shift = 2;
    }
    if (shf<1) {
        shift = 1;
    }
    pay=py;
}
int ProductWorker::getShift(){
    return shift;
}
double ProductWorker::getPay(){
    return pay;
}
void ProductWorker::setShift(int shf){
    shift = shf;
    if (shf>2) {
        shift = 2;
    }
    if (shf<1) {
        shift = 1;
    }
}
void ProductWorker::setPay(double py){
    pay=py;
}
void ProductWorker::setWorker(string n, string h, int num, int shf, double py){
    shift = shf;
    if (shf>2) {
        shift = 2;
    }
    if (shf<1) {
        shift = 1;
    }
    pay=py;
    setName(n);
    setHireDate(h);
    setNumber(num);
}
void ProductWorker::printWorker(){
    cout << getName() << " " << getHireDate() << " " << getNumber() << " " << shift << " " << pay << endl;
}

bool ProductWorker::operator <(const ProductWorker& p) {
   if(pay < p.pay) {
      return true;
   }
   return false;
}
