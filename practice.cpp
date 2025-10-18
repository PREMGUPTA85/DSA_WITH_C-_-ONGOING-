#include<bits/stdc++.h>
using namespace std;
vector<int> binaryrepresentation(vector<int> &arr){
    // size of declared vector
    int n = arr.size();
    // new vector 
    vector<int> twoscomp(n + 1, 0);

    // flip the array
    for(int i = n - 1; i >= 0; i--){
        twoscomp[i + 1] = arr[i] == 0 ? 1 : 0;
    }

    // add 1 
    int carry = 1;
    int sum = 0;
    for(int i = twoscomp.size() - 1; i >= 0; i--){
        sum = twoscomp[i] + carry;
        twoscomp[i] = sum % 2;
        carry = sum / 2;
    }

    if(carry == 0){
        twoscomp.erase(twoscomp.begin());
    }
    // print result
    for(int i = 0; i < twoscomp.size() ; i++){
        cout << twoscomp[i];
    }
    cout << endl;

    return twoscomp;
}


void printmap(unordered_map<int, int> freqmap){
    unordered_map<int, int>:: iterator it;
    cout << "\n-- Map has below things--\n" ;
  for(it = freqmap.begin(); it != freqmap.end(); it++){
        int key = it->first;
        int freq = it->second;
    cout << key << " " << freq << endl;
}
}



int singlenumbermapmethod(vector<int> &nums){
    // freq table
    unordered_map<int, int> freqmap;
  
    //add freqs to the map table 
    for(int i = 0; i < nums.size(); i++){
        int num = nums[i];
        freqmap[num] += 1;
        // printmap(freqmap);
}
// return -1;
    unordered_map<int, int>:: iterator it;
    int ans;
    for(it = freqmap.begin(); it != freqmap.end(); it++){
        int key = it->first;
        int freq = it->second;
        if(freq == 1){
            ans = key;
            break;
        }
    }
    return ans;
}

void rotatearray(vector<vector<int>> &matrix){
    // new matrix for store transpose

    // step - 1 transpose 
    int rowsize = matrix.size();
    int columnsize = matrix[0].size();
        vector<vector<int>> newm(rowsize, vector<int>(columnsize, 0));
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            //newm[i][j] = matrix[j][i]; by self method
            swap(newm[i][j], matrix[j][i]);
        }
    }
    cout << "Transpose:\n";
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            cout << newm[i][j] << " ";
        }
        cout << endl;
    }
    // step 2. reverse row wise
    cout << "Rotate array:\n";
    for(int i = 0; i < rowsize; i++){
        reverse(newm[i].begin(), newm[i].end());
    }
       for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            cout << newm[i][j] << " ";
        }
     cout << endl;
    }
}



// maximum subarray 
int maximumsubarraynaivemthod(vector<int> &nums){
    //naive method
    // int ans = INT_MIN;
    // for(int i = 0; i < nums.size(); i++){
    //     int sum = 0;
    //     for(int j = i; j < nums.size(); j++){
    //         sum += nums[j];
    //         ans = max(ans, sum);
    //     }
    // }
    // return ans;
}

