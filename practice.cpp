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

    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());

        int start = 0;
        int end = stalls.back() - stalls.front();
        int ans = -1;

        while (start <= end) {
            int mid = (start + end) >> 1;

            if (isPossibleSolution(stalls, k, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution ob;
    int n, k;
    cout << "Enter number of stalls: ";
    cin >> n;

    vector<int> stalls(n);
    cout << "Enter stall positions: ";
    for (int i = 0; i < n; i++) cin >> stalls[i];

    cout << "Enter number of cows: ";
    cin >> k;

    int result = ob.aggressiveCows(stalls, k);
    cout << "Maximum minimum distance = " << result << endl;

    return 0;
}
