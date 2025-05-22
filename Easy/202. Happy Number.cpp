class Solution {
private:
    int cnt;
public:
    Solution()
    {
        cnt = 0;
    }
    bool isHappy(int n) 
    {
        if(n==1)
            return 1;
        if(cnt == 10)
            return false;
        int x = 0;
        while(n)
        {
            x += (n%10)*(n%10);
            n/=10;
        }
        cnt++;
        return isHappy(x);
    }
    
};
