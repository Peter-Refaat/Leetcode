class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int cntr1 = 0;
        for(int i = 0 ; i < n ; ++i)
            if(s[i] == '1')cntr1++;
            string ans = "";
        if(cntr1 == 1)
        {
            for(int i = 0 ; i < n ; ++i)
            {
                if(i == n - 1)ans+='1';
                else ans+='0';
            }
        }
        else
        {
            while(cntr1 > 1)
            {
                ans+='1';
                n--;
                cntr1--;
            }
            for(int i = 0 ; i < n-1 ; ++i)
            ans+='0';
            ans+='1';
        }
       return ans;
    }
};
