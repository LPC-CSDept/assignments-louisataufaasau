#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Numbers.h"
using namespace std;

template <class T>
void printNumbers(Numbers <T> n) {
    for (int i=0; i<n.values.size(); i++){
        cout << n.values[i] << endl;
    }
}
int main() {
    srand(time(0));
    
    return 0;
}
