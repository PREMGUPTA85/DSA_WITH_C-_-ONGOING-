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


void findFirstOccurence(int nums[],int n, int target, int &ansindex){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
         if(nums[mid] == target){
            // ans found --> may or may not be first occurence
            // store and compute
            ansindex = mid;
            // kyoki first occurence ki baat ho rhi h toh left me hi jana pdega
            end = mid - 1;
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
}


int main() {
    int arr[] = {5,10,20,20,20,20,20,30,40,50,60};
    int n = 11;
    int target = 60;
// -1 means index not found
    int ansindex = -1;
// binary search lgane jaa rha hu to pakka array sorted hi hoga
    findFirstOccurence(arr, n , target, ansindex);
    cout << "First Occ index: " << ansindex << endl;
    return 0;
}


// last occurence with binary search with store and compute

#include<iostream>
using namespace std;


void findlastOccurence(int nums[],int n, int target, int &ansindex){l
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
         if(nums[mid] == target){
            // ans found --> may or may not be first occurence
            // store and compute
            ansindex = mid;
            // kyoki first occurence ki baat ho rhi h toh left me hi jana pdega
            start = mid + 1;
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
}

int main() {
    int arr[] = {5,10, 10,20,20,20,20,20,30,40,50,60};
    int n = 12;
    int target = 20;
    // -1 means index not found
    int ansindex = -1;
    // binary search lgane jaa rha hu to pakka array sorted hi hoga
    findlastOccurence(arr, n , target, ansindex);
    cout << "First Occ index: " << ansindex << endl;
    return 0;
}

