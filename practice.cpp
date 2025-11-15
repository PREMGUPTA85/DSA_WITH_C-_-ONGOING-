class Solution {
public:
   
 double findMaxAverage(vector<int>& nums, int k) {
    // --- Step 1: First window sum calculate ---
        int i = 0, j = k - 1;
        int sum = 0;

        for(int x = i; x <= j; x++){
            sum += nums[x];
   }
     int maxsum = sum;   // starting window best

        // --- Step 2: Slide window exactly like your i++ j++ loop ---
    
