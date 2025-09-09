
// 10/2 = 5 is output and 10 / - 2 = -5 is output i.e. we need to get quotient but without using /(divisor) and %(modulo) operator

int Quotient(int dividend, int divisor){
    int index = -1;
    int start = 0;
    int end = dividend;
    int quotient = start + (end - start) / 2;
    while(start <= end){
        if(divisor * quotient == dividend){
            return quotient;
        }
        else if(divisor * quotient < dividend){
            // store 
            index = quotient;
            // compute 
            start = quotient + 1;
        }
        else {
            // left jao 
            end = quotient - 1;
        }
        quotient = start + (end - start) / 2;
    }
    return index;
}

int main() {
    int dividend = 10,  divisor = -3;
    int ans = Quotient(abs(dividend), abs(divisor));
    if(dividend < 0 || divisor < 0){
        ans = 0 - ans;
    }
    cout << "dividend = 10,  divisor = -3, Quotient = " << ans;
    return 0;
}
