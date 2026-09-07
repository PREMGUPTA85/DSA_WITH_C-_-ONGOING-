class Solution {

public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);

        int m=nums1.size(),n=nums2.size();
        int low=0,high=m;

        while(low<=high){
            int cut1=(low+high)/2;
            int cut2=(m+n+1)/2-cut1;

            int l1=(cut1==0)?INT_MIN:nums1[cut1-1];
            int l2=(cut2==0)?INT_MIN:nums2[cut2-1];
            int r1=(cut1==m)?INT_MAX:nums1[cut1];
            int r2=(cut2==n)?INT_MAX:nums2[cut2];

            if(l1<=r2 && l2<=r1){
                if((m+n)%2==0)
                    return (max(l1,l2)+min(r1,r2))/2.0;
                return max(l1,l2);
            }
            else if(l1>r2) high=cut1-1;
            else low=cut1+1;
        }
        return 0.0;
    }
};// class Solution {
// public:
//     string reorganizeString(string s) {
//         unordered_map<char, int> freq;
//         for(char c : s) freq[c]++;
//         // max heap
//         priority_queue<pair<int, char>> pq;
//         for(auto &p : freq) {
//             pq.push({p.second, p.first});
//         }
//         while(pq.size() > 1) {
//             auto [count1, char1] = pq.top(); pq.pop();
//             auto [count2, char2] = pq.top(); pq.pop();
//             result += char1;
//             result += char2;
//             if(--count1 > 0) pq.push({count1, char1});
//             if(--count2 > 0) pq.push({count2, char2});
//         }
//         if(!pq.empty()) {
//             auto [count, ch] = pq.top();
//             if(count > 1) return "";
//             result += ch;
//         }
//         return result;
//     }
// };

// //
class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        vector<int> freq(26, 0);
        
        // count frequency
        for(char c : s) {
            freq[c - 'a']++;
        }
        
        // find max frequency char
        int maxFreq = 0, maxChar = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] > maxFreq) {
                maxFreq = freq[i];
                maxChar = i;
            }
        }
        if(maxFreq > (n + 1) / 2) return "";
        
        string res(n, ' ');
        
        int index = 0;
        
        // place most frequent char first
        while(freq[maxChar] > 0) {
            res[index] = char(maxChar + 'a');
            index += 2;
            freq[maxChar]--;
        }
        
        // place remaining chars
        for(int i = 0; i < 26; i++) {
            while(freq[i] > 0) {
                if(index >= n) index = 1; // move to odd index
                
                res[index] = char(i + 'a');
                index += 2;
                freq[i]--;
            }
        }
        return res;
    }
};
