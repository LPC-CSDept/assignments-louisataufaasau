//
//  Numbers.h
//  Midterm
//
//  Created by Louisa Taufaasau on 11/30/21.
//

#ifndef Numbers_h
#define Numbers_h
using namespace std;
#include <iostream>
#include <string>
#include <vector>

template <class T>
class Numbers{
private:
    int ID;
    vector<T> values;
    
    //dont make set func for this
    static int NumofObjects;
public:
    static int getNumObjects();
    int operator > (const Numbers &);
    Numbers();
    Numbers(int i, int n);
    int getID();
    int setID();
    friend void printNumbers(Numbers);
    
};

#endif /* Numbers_h */
