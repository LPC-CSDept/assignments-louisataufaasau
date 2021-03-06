#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makeArray(int [] , int);
void printArray(int [] , int);
void selectionSort(int [], int );

int main()
{
    const int N= 10;
    int array[N];

    srand(time(0));
    makeArray(array, N);
    cout << " Initial Array : " ;
    printArray(array, N);

    selectionSort(array, N);
    cout << " Sorted Array : " ;
    printArray(array, N);
    

}

void makeArray(int array[], int N)
{
    for(int i=0; i<N; i++)
        array[i] = rand() % 100 + 1;
}
void printArray(int array[], int N)
{
    for(int i=0; i<N; i++)
        cout << array[i]  << "\t" ;
    cout << endl;
}

void selectionSort(int array[], int N){
    for (int i=0; i<N-1; i++){
        int smallest=i;
        for (int j=i+1; j<N; j++){
            if (array[j]<array[smallest]){
                smallest=j;
            }
        }
        swap(array[smallest],array[i]);
    }
}
