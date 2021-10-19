#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int *fillupArray(int N);
void printArray(int * const ptr, int N);


int main()
{
    srand(time(0));
    
    const     int N=10;
    int     *ptr=nullptr;

    ptr = fillupArray(N);
    printArray(ptr, N);
 
    
}
int *fillupArray(int N){
    int *randnum = new int[N];
    for (int i=0; i<N; i++){
        randnum[i]=rand()%100;
    }
    return randnum;
}
void printArray(int * const ptr, int N){
    for (int i=0; i<N; i++){
        cout << ptr[i] << endl;
    }
}
