//
//  Numbers.h
//  Midterm
//
//  Created by Louisa Taufaasau on 11/30/21.
//

#ifndef Numbers_h
#define Numbers_h
#include <vector>
using namespace std;

template <class T>
class Numbers{
private:
    int ID;
    vector<T> values;
    
    //dont make set func for this
    static int NumofObjects;
public:
    static int getNumObjects(void);
    int operator > (const Numbers &);
};

#endif /* Numbers_h */
