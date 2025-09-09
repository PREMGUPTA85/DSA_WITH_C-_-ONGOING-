
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

int getpivotindex(vector<int> &arr){
        int start = 0;
        int size = arr.size(); 
        int end =size - 1;
        int mid = start + (end - start)/2;
        while(start <= end){
            if(mid + 1 < size && arr[mid] > arr[mid + 1]){
                  return mid;
                }
            // line B
            else if(arr[mid] < arr[0]){
                // left jao 
                end = mid - 1;
            }
            else {
                // line A m h 
                // right jao 
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }
    int binarysearch(int start, int end , int target, vector<int> &arr){

        int mid = start + (end - start)/2;
        while(start <= end){
           if(arr[mid] == target){
               return mid;
           }
           else if(arr[mid] < target){
                // right jao
                start = mid + 1;
           }
           else{
            // left jao 
            end = mid - 1;
           }
            mid = start + (end - start)/2;
           }
           return -1;
        }
        int searchinarotatedarray(vector<int>& nums, int target) {
        int size = nums.size() - 1;
      int pivotindex = getpivotindex(nums);
      //Searching in Line A check target exist in line a
      if(target >= nums[0] && target <= nums[pivotindex]) {
            int ans = binarysearch(0, pivotindex, target, nums);
            return ans;
      }
     // Searching n line B
     else {
        int index = binarysearch(pivotindex + 1, size, target, nums);
            return index;
        }
    return -1;
    }

bool searchina2DMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        //total elements
        int n = rows * columns;

        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s <= e) {
            //mid ka use karkek 2D array ka rowIndex and colIndex find krenge
            int rowIndex = mid/columns;
            int colIndex = mid%columns;

            if(matrix[rowIndex][colIndex] == target) {
                return true;
            }
            if(target > matrix[rowIndex][colIndex] ) {
                //right
                s = mid+1;
            }
            else {
                //left
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return false;
    }

 int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid = s+(e-s)/2;
        int ans  = -1;

        while(s<=e) {
            //happy case
            long long int product = mid * mid;
            if(product == x) {
                return mid;
            }
            if(product < x) {
                //may or may not be 
                //store and compute
                ans = mid;
                //go to right to find or jada paas ka answer
                s = mid+1;
            }
            else {
                //mid*mid > x -> left
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

int main() {
    // vector<int> arr = {0, 10, 5, 2};
    // cout << peakmountain(arr);
    // vector<int> arr = {4,5,6,7, 0, 1,2};
    // cout << searchinarotatedarray(arr, 0);
    // vector<vector<int>> arr = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };
    // cout << searchina2DMatrix(arr, 10);
    cout << mySqrt(50);
    return 0;
}
