//
//  numbers.h
//  assignment 13-2
//
//  Created by Louisa Taufaasau on 10/28/21.
//

#ifndef numbers_h
#define numbers_h

class Numbers{
private:
    int size;
    int* head;
public:
    //Default constructor
    Numbers();
    //One param constructor
    Numbers(int);
    int getSize() const;
    // get the i_th element
    int getElement(int i) const;
    //get the summation of all elements
    double getSum() const;
    //get avg of all elements
    double getAvg() const;
    void setElement();
    //set value to the i_th element
    void setElement(int value, int i);
    //sort all elements in ascending if the param is 0
    //otherwise descending
    void bubbleSort(int desc);
    //print all elements from beginning if param=0
    void printNumbers(int desc);
    //delete all memory space for numbers
    void clear();
};

#endif /* numbers_h */
