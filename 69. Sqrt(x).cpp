class Solution {
public:
    int mySqrt(int x) {
        int l = 0 , r = x , sq = 0;
        while(l <= r)
        {
            long long m = l+r>>1;
            if(m*m <= x)
                sq = m, l = m+1;
            else r = m-1;
        }
        return sq;
    }
};
