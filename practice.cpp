// git add .
// git commit -m "update"
// git push

#include<iostream>
#include<vector>
using namespace std;

// Given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any ” / “ and ” % “ operators

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333… which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5

int Quotient(int dividend, int divisor){
    int index = -1;
    int start = 0;
    int end = dividend;
    int quotient = start + ((end - start) >> 1);
    while(start <= end){
        if(divisor * quotient == dividend){
            return quotient;
        }
        else if(divisor * quotient < dividend){
            // store 
            index = quotient;
            // compute 
            start = quotient + 1;
        }
        else {
            // left jao 
            end = quotient - 1;
        }
        quotient = start + (end - start) / 2;
    }
    return index;
}

// Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
// Output: 2
// Explanation: Output is index of 40 in given array i.e. 2

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
// Output: -1
// Explanation: -1 is returned to indicate the element is not present

int nearlysearch(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // cout << "printing mid:  " << mid << endl;
        // cout << "target " << target << endl;
        // cout << "arr[mid]: " << arr[mid] << endl << endl;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > arr[mid])
        {
            // right
            s = mid + 2;
        }
        else
        {
            // left
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int singleelementinasortedarray(vector<int> &arr){
     int s = 0;
        int n = arr.size();
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s <= e) {
            //case 1: single element
            if(s == e) {
                return arr[s];
            }

            //mid index pr value 
            int currVal = arr[mid];
            //mid-1 index pr value, if exists
            int leftVal = -1;
            if(mid-1 >= 0) {
                leftVal = arr[mid-1];
            }
            //mid+1 index pr value, if exists
            int rightVal = -1;
            if(mid+1 < n) {
                rightVal = arr[mid+1];
            }

            //case 2: non duplicates
            if(currVal != leftVal && currVal != rightVal) {
                return currVal;
            }
            //case 3: left me duplicate mila 
            if(currVal == leftVal && currVal != rightVal) {
                int pairStartingIndex = mid-1;
                if(pairStartingIndex & 1) {
                    //agar index odd hua 
                    //standing on right part
                    //move to left
                    e = mid-1;
                }
                else {
                    //move to right
                    s = mid+1;
                }
            }//case 4: right me duplicate mila 
            else if(currVal != leftVal && currVal == rightVal) {
                int pairStartingIndex = mid;
                 if(pairStartingIndex & 1) {
                    //agar index odd hua 
                    //standing on right part
                    //move to left
                    e = mid-1;
                }
                else {
                    //move to right
                    s = mid+1;
                }
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }

int main() {
    // int dividend = -10,  divisor = -3;
    // int ans = Quotient(abs(dividend), abs(divisor));
    // if((dividend  > 0 &&  divisor < 0) && (dividend < 0 && divisor > 0)){
    //     ans = 0 - ans;
    // }
    // cout << "dividend = -10,  divisor = -3, Quotient = " << ans;


    // int arr[] = {10, 3, 40, 20, 50, 80, 70};
    // int size = 7;

    // int target = 20;

    // int ans = nearlysearch(arr, size, target);
    // cout << "Found at Index: " << ans << endl;

    vector<int> arr = {1,2,2,3,3};
    cout <<  singleelementinasortedarray(arr);
    
    return 0;
}
