// O(sqrt(N)*log(N)
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

//O(sqrt(N))
//using fermat's theorem: Any positive number n is expressible as a sum of two squares if and only if 
//the prime factorization of n, every prime of the form (4k+3) (prime%4==3) occurs an even number of times.
class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i = 2 ; i*i <= c ; ++i)
        {
            int cnt = 0;
            while(c%i==0)
                cnt++ , c/=i;
            if(i%4==3 and cnt&1)
                return false;
        }
        return c%4!=3;
    }
};
