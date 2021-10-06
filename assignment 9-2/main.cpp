#include <iostream>
using namespace std;

void printArray(double* const n, int N){
    for (int i=0; i<N; i++) {
        cout << *(n+i) << endl;
    }
}

int main() {
    const int N = 10;
    double numbers[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5, 13.8, 14.7, 19.8, 20.0};
    
    printArray(numbers, N);
    
    return 0;
}
