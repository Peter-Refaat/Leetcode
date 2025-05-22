class Solution {
public:
    double myPow(double x, int n)
    {
       double mult = 1;
       int prev = n;
       n = abs(n);
       while(n > 0)
       {
        if(n&1)
        mult*=x;
        n >>= 1;
        x = x*x;
       }
       if(prev < 0)
       return 1.0/mult;
       else if(prev > 0)
       return mult;
       else
       return 1;
    }
};
