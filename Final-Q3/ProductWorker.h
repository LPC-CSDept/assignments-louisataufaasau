#ifndef ProductWorker_h
#define ProductWorker_h
#include <iostream>
using namespace std;
class Employee{
private:
    string name;
    string hiredate;
    int number;
public:
    Employee();
    Employee(string nm, string hrd, int snum);
    string getName();
    string getHireDate();
    int getNumber();
    void setName(string nm);
    void setHireDate(string hrd);
    void setNumber(int snum);
};

class ProductWorker : public Employee{
private:
    int shift;
    double pay;
    
public:
    ProductWorker();
    ProductWorker(string n, string h, int num, int shf, double py);
    int getShift();
    double getPay();
    void setShift(int shf);
    void setPay(double py);
    void setWorker(string n, string h, int num, int shf, double py);
    void printWorker();
};

#endif /* ProductWorker_h */
