#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Numbers.h"
using namespace std;

void printNumbers(Numbers <int> n) {
    for (int i=0; i<n.values.size(); i++){
        cout << n.values[i] << endl;
    }
}

int main() {
    srand(time(0));

    cout << "Test 1:" << endl;
    Numbers<int> n1(1, 3);
    Numbers<int> n2(2, 5);

    cout << "There are " << n1.getNumObjects() << endl;

    if (n1>n2) {
        cout << "n1 is greater than n2" << endl;
    }
    else {
        cout << "n1 is not greater than n2" << endl;
    }
    cout << "n1's ID is: " << n1.getID() << endl;

    cout << "n1's values are: " << endl;
    printNumbers(n1);
    cout << "n2's values are: " << endl;
    printNumbers(n2);
    cout << endl << endl;;

    cout << "Test 2:" << endl;
    Numbers<int> n3(3, 5);
    Numbers<int> n4(4, 7);

    cout << "There are " << n3.getNumObjects() << endl;

    if (n3>n4) {
        cout << "n3 is greater than n4" << endl;
    }
    else {
        cout << "n3 is not greater than n4" << endl;
    }
    cout << "n3's ID is: " << n3.getID() << endl;

    cout << "n3's values are: " << endl;
    printNumbers(n3);
    cout << "n4's values are: " << endl;
    printNumbers(n4);
    cout << endl;

    return 0;
}
