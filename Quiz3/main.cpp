#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Numbers {
private:
    int ID;
    vector<int> numbers;

public:
    Numbers(){
        ID = -1;
    }
    Numbers(int id, int n){
        ID = id;

        for (int i = 0; i < n; i++) {
            int randNum = rand() % 100;
            numbers.push_back(randNum);
        }
    }

    int getId() const {
        return ID;
    }
    int getSize() const {
        return numbers.size();
    }
    int getElm(int i) const {
        return numbers.at(i);
    }
    int getMax() const {
        int maxNum = numbers[0];
        for (int i = 1; i < numbers.size(); ++i) {
            if (numbers.at(i) > maxNum){
                maxNum = numbers.at(i);
            }
        }
        return maxNum;
    }
    int getMin() const {
        int minNum = numbers[0];
        for (int i = 1; i < numbers.size(); ++i) {
            if (numbers.at(i) < minNum){
                minNum = numbers.at(i);
            }
        }
        return minNum;
    }
    int getSum() const {
        int sum = 0;
        for (int i = 0; i < numbers.size(); ++i) {
            sum += numbers.at(i);
        }
        return sum;
    }
    void deleteElm(int d){
        for (int i = 0; i < numbers.size(); ++i) {
            if (numbers.at(i) == d){
//                numbers.erase(i) // figure this out later
            }
        }
    }
    void addElm(int a) {
        numbers.push_back(a);
    }
    void printAll() const {
        for (int i = 0; i < numbers.size(); ++i) {
            cout << numbers.at(i) << endl;
        }
    }

};

int main() {
    srand(time(0));
    return 0;
}
