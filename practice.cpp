class Solution {
    public String longestCommonPrefix(String[] strs) {
        String prefix = strs[0];
        for(int i = 1; i < strs.length; i++) {
            while(strs[i].indexOf(prefix) != 0) {
                prefix = prefix.substring(0, prefix.length() - 1
                if(prefix.isEmpty())
                    return "";
            }
        }

    
}// class Solution {
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
        
        // check impossible case
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
