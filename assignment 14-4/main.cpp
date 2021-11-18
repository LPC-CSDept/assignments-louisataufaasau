#include <iostream>
#include "numbers.h"
using namespace std;

void printNumbers(Numbers n) {
    for (int i=0; i<n.size; i++){
        cout << n.numbers[i] << endl;
    }
}

int main() {
    srand (time(NULL));
    
    Numbers n1(10);
    n1.createNumbers();
    Numbers n2(n1);
    
    cout << n1.getMax() << endl;
    cout << n2.getMax() << endl;
    cout << endl;
    
    printNumbers(n1);
    cout << endl;
    printNumbers(n2);
    
    return 0;
}
