#include <iostream>
#include "numbers.h"
using namespace std;

int main() {
    srand(time(0));
    
    //Default constructor
    Numbers one;
    //Give one's array random numbers
    one.setElement();
    //Assign 5 to index 0 of one's array
    one.setElement(5, 0);
    //Sort all numbers in one's array in ascending order
    one.bubbleSort(0);
    //Print all numbers in one's array from the first index to the last
    one.printNumbers(0);
    
    cout << endl;
    
    //One param constructor
    Numbers two(5);
    //Give two's array random numbers
    two.setElement();
    //Assign 5 to index 0 of two's array
    two.setElement(5, 0);
    //Sort all numbers in one's array in descending order
    two.bubbleSort(1);
    //Print all numbers in two's array from the last index to the first (should print from least to greatest)
    two.printNumbers(1);
    
    cout << endl;
    
    cout << "The size of one is: " << one.getSize() << endl;
    cout << "The size of two is: " << two.getSize() << endl;
    
    
    cout << "The element at index 0 of one's array is: " << one.getElement(0) << endl;
    cout << "The element at index 0 of two's array is: " << two.getElement(0) << endl;
    
    cout << "The sum of all elements in one's array is: " << one.getSum() << endl;
    cout << "The sum of all elements in two's array is: " << two.getSum() << endl;
    
    cout << "The average of all elements in one's array is: " << one.getAvg() << endl;
    cout << "The average of all elements in two's array is: " << two.getAvg() << endl;
    cout << endl;
    
    one.clear();
    two.clear();
    
    cout << "The elements in one's array after being cleared:" << endl;
    one.printNumbers(0);
    cout << endl;
    
    cout << "The elements in two's array after being cleared:" << endl;
    two.printNumbers(0);
    cout << endl;
    
    return 0;
}
