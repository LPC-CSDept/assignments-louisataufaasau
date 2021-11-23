#ifndef numbers_h
#define numbers_h
#include <iostream>
using namespace std;

class Numbers{
private:
    int size;
    int* numbers;
public:
    Numbers();
    Numbers(int s);
    Numbers(const Numbers &);
    ~Numbers();
    int getMax() const;
    void createNumbers();
    friend void printNumbers(Numbers);
    int operator > (const Numbers &n);
    Numbers operator = (const Numbers &n);
    Numbers operator + (const Numbers &n);
    friend ostream &operator << (ostream &, const Numbers &);
    friend istream &operator >> (istream &, const Numbers &);
};

#endif /* numbers_h */
