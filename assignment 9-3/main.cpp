#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double *makeNumbers(int N);
void printNumbers(double * const ptr, int N);
void sortNumbers(double * const ptr, int N);
void deleteNumbers(double * ptr);


int main()
{
    srand(time(0));
    
    const     int N=10;
    double     *ptr=nullptr;

    ptr = makeNumbers(N);
    cout << " Initial Double Values \n";
    printNumbers(ptr, N);
    sortNumbers(ptr, N);
    cout << " Sorted Double Values \n";
    printNumbers(ptr, N);
    deleteNumbers(ptr);
}
double *makeNumbers(int N){
    double *randnum = new double[N];
    for (int i=0; i<N; i++){
        randnum[i]=(double)rand();
    }
    return randnum;
}

void sortNumbers(double * const ptr, int N){
    sort(ptr, ptr+N);
}

void printNumbers(double * const ptr, int N){
    for (int i=0; i<N; i++){
        cout << ptr[i] << endl;
    }
}

void deleteNumbers(double * ptr){
    delete [] ptr;
}
