#include <iostream>
#include "numbers.h"
using namespace std;

void printNumbers(Numbers n) {
    for (int i=0; i<n.size; i++){
        cout << n.numbers[i] << endl;
    }
}
ostream &operator << (ostream & os, const Numbers &n){
    os << n.size << endl;
    for (int i=0; i<n.size; i++){
        os << n.numbers[i] << " ";
    }
    return os;
}
istream &operator >> (istream & is, const Numbers &n){
    for (int i=0; i<n.size; i++){
        is >> n.numbers[i];
    }
    return is;
}
int main() {
    srand(time(NULL));
    Numbers n1(10);
    n1.createNumbers();
    
    cout << n1;
    cin >> n1;
    cout << n1;
    
    return 0;
}
