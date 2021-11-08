#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    int arr[20];
    Stack stack(20);
    for (int i=0; i<20; i++){
        arr[i]=i;
    }
    for (int i=0; i<20; i++){
        stack.push(arr[i]);
    }
    for (int i=0; i<20; i++){
        cout << stack.topEl() << endl;
        stack.pop();
    }
    return 0;
}
