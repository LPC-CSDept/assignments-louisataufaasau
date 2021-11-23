#include <iostream>
#include "numbers.h"
using namespace std;

void printNumbers(Numbers n) {
    for (int i=0; i<n.size; i++){
        cout << n.numbers[i] << endl;
    }
}

int main() {
    srand(time(NULL));
    Numbers n1(10);
    n1.createNumbers();
    Numbers n2=n1;
    
    cout << "N1: " << endl;
    printNumbers(n1);
    cout << endl;
    cout << "N2: " << endl;
    printNumbers(n2);
    cout << endl;
    
    if (n1 > n2) {
        cout << "N1 is greater." << endl;
    }
    else
        cout << "N2 is greater." << endl << endl;

    Numbers n3=n1+n2;
    cout << "N3: " << endl;
    printNumbers(n3);
    
    return 0;
}
