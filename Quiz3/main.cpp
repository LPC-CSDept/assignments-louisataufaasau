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
                numbers.erase(remove(numbers.begin(), numbers.end(), d), numbers.end());
            }
        }
    }
    void addElm(int a) {
        numbers.push_back(a);
    }
    void printAll() const {
        for (int i = 0; i < numbers.size(); ++i) {
            cout << numbers.at(i) << " ";
        }
    }

};

int findMax(Numbers numberset [], int n) {
    int largest = numberset[0].getMax() - numberset[0].getMin();

    for (int i = 1; i < n; ++i) {
        if ((numberset[i].getMax() - numberset[i].getMin()) > largest){
            largest = i;
        }
    }

    return largest;
}

void deDup(Numbers numberset1, Numbers numberset2) {
    for (int i = 0; i < numberset1.getSize(); ++i) {
        for (int j = 0; j < numberset2.getSize(); ++j) {
            if (numberset1.getElm(i) == numberset2.getElm(j)) {
                numberset1.deleteElm(i);
            }
        }
    }
}

int main() {
    const int N = 5;
    srand(time(0));

    Numbers numberset[] = {
            Numbers(1, 3),
            Numbers(2, 5),
            Numbers(3, 10),
            Numbers(4, 5),
            Numbers(5, 3)};

    for (int i = 0; i < N; ++i) {
        cout << "Number Set ID " << numberset[i].getId() << "\t";
        numberset[i].printAll();
    }
    cout << endl;

    int id = findMax(numberset, N);
    cout << "The set ID that has max difference is " << id << "\t";
    cout << "The diff is " << numberset[id].getMax() - numberset[id].getMin() << endl;
    cout << endl;

    deDup(numberset[2], numberset[3]);
    cout << "ID 3 - ID 4\n ";
    numberset[2].printAll();
    cout << endl;

    deDup(numberset[0], numberset[1]);
    cout << "ID 1 - ID 2\n";
    numberset[0].printAll();

    return 0;
}
