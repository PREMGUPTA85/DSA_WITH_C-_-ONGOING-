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
