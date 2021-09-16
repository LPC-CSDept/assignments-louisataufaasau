#include <iostream>
using namespace std;

int findTarget(int nums[], int size, int target){
    int first=0;
    int last=size-1;
    while (first<=last){
        int mid=(first+last)/2;
        if (nums[mid]==target)
            return mid;
        if (nums[mid]<target)
            first=mid+1;
        if (nums[mid]>target)
            last=mid-1;
    }
    return -1;
}
int main() {
    int nums[10] = {5, 7, 9, 10, 23, 54, 55, 71, 71, 88};
    int target = 9;
    const int size=10;
    
    cout << "Target was found at index: " << findTarget(nums, size, target) << endl;
    
    return 0;
}
