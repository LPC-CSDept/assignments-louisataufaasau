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
//    ~Numbers();
    int getMax() const;
    void createNumbers();
    friend void printNumbers(Numbers);
};

#endif /* numbers_h */
