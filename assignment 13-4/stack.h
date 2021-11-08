//
//  stack.h
//  assignment 13-4
//
//  Created by Louisa Taufaasau on 11/5/21.
//
#ifndef stack_h
#define stack_h
#include <vector>
using namespace std;
class Stack{
private:
    vector<int> pool;
public:
    Stack();
    Stack(int);
    void clear();
    bool isEmpty();
    void push(int);
    void pop();
    int topEl();
    int getSize();
    void printAll();
};

#endif /* stack_h */
