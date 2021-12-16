#include <iostream>
#include <fstream>
#include "ProductWorker.h"
using namespace std;

int highestPay(ProductWorker workers[], int size) {
    int highest=0;
    for (int i=0; i<size; i++){
        if (workers[highest].getPay()<workers[i].getPay()){
            highest=i;
        }
    }
    return highest;
}

int main() {
    ProductWorker workers[10];
    fstream file;
    int fileNumber;
    cout << "Enter 1 for file 1 or enter 2 for file 2" << endl;
    cin >> fileNumber;
    if (fileNumber == 1) {
        file.open("ProductionWorker.txt");
    }
    else{
        file.open("ProductionWorker2.txt");
    }
    
    for (int i=0; i<10; i++) {
        int id;
        string n;
        string d;
        int s;
        double p;
        file >> n >> id >> d >> s >> p;
        workers[i].setWorker(n, d, id, s, p);
        workers[i].printWorker();
    }
    cout << endl;
    
    int highest = highestPay(workers, 10);
    cout << "The employee with the highest pay is located at index " << highest << endl;
    cout << "Their information:" << endl;
    workers[highest].printWorker();
    
    return 0;
}
