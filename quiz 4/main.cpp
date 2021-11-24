#include <iostream>
#include "course.h"
using namespace std;

istream& operator >> (istream& is, Course& c){
    is >> c.credits;
    return is;
}

int main() {
    
    return 0;
}
