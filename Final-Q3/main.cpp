#include <iostream>
#include <fstream>
#include "ProductWorker.h"

using namespace std;
int main() {
    int choice;
    ProductWorker workers[10];
    fstream file;
    int fileNumber;
    file.open("ProductWorker.txt");
    
    for (int i=0; i<10; i++) {
        int id;
        string n;
        string d;
        int s;
        double p;
        file >> n >> id >> d >> s >> p;
        workers[i].setWorker(n, d, id, s, p);
    }
    
    return 0;
}
