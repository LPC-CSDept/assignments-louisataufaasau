//
//  main.cpp
//  assignment 9-1
//
//  Created by Louisa Taufaasau on 10/5/21.
//

#include <iostream>
using namespace std;

//print all elements in the array "numbers" using the pointer *ptr
int main() {
    const int N=10;
    double numbers[N]={10.0, 15.2, 21.2, 10.5, 11.3, 12.5, 13.8, 14.7, 19.8, 20.0};
    double *ptr=numbers;
    for (int i=0; i<N; i++){
        cout << *(ptr+i) << endl;
    }
    return 0;
}
