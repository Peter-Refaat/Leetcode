class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long a = 0 ; a*a <= c ; ++a)
        {
            int b = c - a*a;
            long long l = 0 , r = b , sq = 0;
            while(l <= r)
            {
                long long m = l+r>>1;
                if(m*m <= b)
                    sq = m , l = m+1;
                else r = m-1;
            }
            if(sq*sq == b)
                return true;
        }
        return false;
    }
};
