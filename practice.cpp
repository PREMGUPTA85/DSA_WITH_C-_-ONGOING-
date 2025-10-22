#include<bits/stdc++.h>
using namespace std;
// M3 Sieve of Eratosthenes Algorithm
int countPrimes(int n)
    {
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        int ans = 0;

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                ++ans;

                int j = 2 * i;
                while (j < n)
                {
                    prime[j] = false;
                    j += i;
                }
            }
        }
        return ans;
    }

// Time Complexity: O(n log log n)
// Space Complexity: O(n)   


int gcd(int a, int b){
    // using subtraction method
    if(b==0) return a;  
    if(a==0) return b;
    
    while(a > 0 && b > 0){
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a == 0 ? b : a; // ternary operator
}


int lcm(int a, int b){
    return (a / gcd(a, b)) * b; // to avoid overflow
}
