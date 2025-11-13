//134.Divide two integers without using / or % and return the quotient (truncate toward zero).
int Quotient(int dividend, int divisor){
    int index = -1;
    int start = 0;
    int end = dividend;
    int quotient = start + ((end - start) >> 1);
    while(start <= end){
        if(divisor * quotient == dividend){
            return quotient;
        }
        else if(divisor * quotient < dividend){index = quotient;
            start = quotient + 1;
        }
        else  end = quotient - 1;
        quotient = start + (end - start) / 2;
    }
    return index;
}
