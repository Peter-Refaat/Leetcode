class Solution {
public:
    bool isPerfectSquare(int num) 
    {
       int l = 0 , r = num , sq = 0;
       while(l <= r)
       {
            long long m = l+r>>1;
            if(m*m <= num)
                sq = m , l = m+1;
            else r = m-1;
       }
       return sq*sq==num;
    }
};
