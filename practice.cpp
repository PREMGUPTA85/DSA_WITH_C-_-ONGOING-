// precision of sqrt
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


// koko eating bananas
bool canKokoFinishBananasWithKSpeed(vector<int> &piles, int h, int k)
    {
        long long int totalHoursTakenByKokoToFinishAllBananas = 0;
        for (int i = 0; i < piles.size(); i++)
            totalHoursTakenByKokoToFinishAllBananas += ceil(piles[i] / (double)k);

        // if(totalHoursTakenByKokoToFinishAllBananas <= h) return true;
        // return false;
        return totalHoursTakenByKokoToFinishAllBananas <= h;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int start = 1;
        // auto it = max_element(piles.begin(), piles.end());
        // int end = *it;
        int end = *max_element(piles.begin(), piles.end());
        // end to mere pkka ans hai,
        int ans = 0;

        // TC: O(Log(Max(Piles)) * O(n)) -> O(n*log(max(piles)))
        while (start <= end)
        {
            int mid = (start + end) >> 1;
            int k = mid;
            if (canKokoFinishBananasWithKSpeed(piles, h, k))
            {
                // koko will finish all bananas
                // without being caught
                ans = k;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return ans;
    }


int mySqrt(int n)
{
    int s = 0, e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) >> 1;
        if (mid * mid <= n)
        {
            ans = mid;
            s = mid + 1; // go right
        }
        else
            e = mid - 1; //  left jata hu
    }
    return ans;
}

double myPrecisionSqrt(int n)
{
    double sqrt = mySqrt(n); // -> O(logn)

    /* O(precision) */
    int precision = 9;
    double step = 0.1;
    while (precision--)
    {
        double j = sqrt; // j->7.0;
        while (j * j <= n)
        {
            // store and compute
            sqrt = j;
            j += step; // j-> 7.1
        }
        // after this while loop i got 1 precision ans.
        step /= 10;
    }
    return sqrt;
}


double BSPrecision(int n)
{
    double start = 0;
    double end = n;
    double ans = 0;
    while ((end - start) > 0.000000001)
    {
        double mid = (start + end) / 2;
        double sqr = mid * mid;
        if (sqr <= n)
        {
            ans = mid;
            start = mid + 0.000000000000000000000000001;
        }
        else
            end = mid - 0.000000000000000000000000001;
    }
    return ans;
}

// agar koi no. perfect square nhi h to uska perfect square root nhi ho skta
int main()
{
    int n = 63;
    // double ans = myPrecisionSqrt(n); // TC: O(logn) + O(Precision).
    // printf("M1: Precision Sqrt: %.9f\n", ans);
    // cout << ans << endl;
    // cout hota hai, it only print 5 precision.

    // zada kes kre?

    // double ans = BSPrecision(n);
    // printf("M2: Precision Sqrt: %.9f\n", ans);

    // coco eating bananas
    vector<int> piles = {3,6,7,11};
    int h = 8; // guard gya h 8 hrs k liye
    cout << minEatingSpeed(piles, h);  // 4 o/p -->aaya kaise kya chahiye tha 
    // TOTAL MINIMUM hours <= guard hours hone chahiye 
    // leetcode qs no. 875

    // m bouquets with k flowers
    vector<int> bloomDay = {1,10,3,10,2};   
    int m = 3; // bouquets
    int k = 1; // flowers in each bouquet   
    cout << minDays(bloomDay, m, k); // 3 o/p
    // leetcode qs no. 1482
    return 0;
}
