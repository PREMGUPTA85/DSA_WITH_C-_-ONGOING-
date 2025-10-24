

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
    
    
