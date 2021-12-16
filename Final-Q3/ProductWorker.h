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
};

#endif /* ProductWorker_h */
