#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPossibleSolution(vector<int> &stalls, int k, int mid) {
        int c = 1;           // count of cows placed
        int pos = stalls[0]; // position of last placed cow

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - pos >= mid) {
                c++;
                pos = stalls[i];
            }
            if (c == k) return true;
        }
        return false;
    }
