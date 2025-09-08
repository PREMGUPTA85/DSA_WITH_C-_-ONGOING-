
// peak index in a mountain array
#include<iostream>
#include<vector>
using namespace std;

int peakmountain(vector<int> &nums){
    int start = 0;
    int end = nums.size() -1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(nums[mid] < nums[mid + 1]){
            // right jao
             start = mid + 1;
        }
        else{
            // left jao 
            end = mid ;
        }
        mid = start + (end - start)/2;
    }
    return mid;
}

int main() {
    vector<int> arr = {0, 10, 5, 2};
    cout << peakmountain(arr);
    return 0;
}
