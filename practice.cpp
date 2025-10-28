// Binary search -- Monotonic function

#include<iostream>
#include<vector>
using namespace std;


int binarysearch(vector<int> &nums, int target){
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
         if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            // right side me jao
            start = mid + 1;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        // mid = (start + end)/2;
    }
    return -1;
}

int main() {
    vector<int>arr = {-1,0,3,5,9,12};
    int target = 9;
    cout << binarysearch(arr, target);
    return 0;
}

// first occurence with binary search with store and compute

#include<iostream>
using namespace std;
