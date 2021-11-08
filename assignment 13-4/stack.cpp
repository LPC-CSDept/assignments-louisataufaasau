//
//  stack.cpp
//  assignment 13-4
//
//  Created by Louisa Taufaasau on 11/5/21.
//

#include <stdio.h>
#include "stack.h"
#include <iostream>
#include <vector>
using namespace std;

Stack::Stack(){
    pool.reserve(10);
}
Stack::Stack(int n){
    pool.reserve(n);
}
void Stack::clear(){
    pool.clear();
}
bool Stack::isEmpty(){
    return pool.empty();
}
void Stack::push(int el){
    pool.push_back(el);
}
void Stack::pop(){
    pool.pop_back();
}
int Stack::topEl(){
    return pool.back();
}
int Stack::getSize(){
    return pool.size();
}
void Stack::printAll(){
    for (int i=0; i<pool.size(); i++){
        cout << pool[i] << endl;
    }
}
